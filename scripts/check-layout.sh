#!/usr/bin/env bash
# Checks the repository layout rules (see docs/adr/0001-repo-layout.md).
# Usage: bash scripts/check-layout.sh   (no args, read-only)
# Env:   BASE_REF  git ref used as baseline for check 7 (default: main)
# Exit:  0 if every check passes, 1 otherwise.
set -euo pipefail

BASE_REF="${BASE_REF:-main}"
MIGRATION_HEADER='| Caminho antigo | Caminho novo |'
KEBAB_REGEX='^[a-z0-9]+(-[a-z0-9]+)*$'
DISCIPLINES='CPW_I CPW_II ED_I LDP LP_I'
MAX_LISTED=5

failures=0

cd "$(git rev-parse --show-toplevel)"

pass() {
  echo "OK: $1"
}

fail() {
  echo "FAIL: $1: $2"
  failures=$((failures + 1))
}

# Prints "OK: <check>" when <offenders> (newline-separated) is empty,
# otherwise "FAIL: <check>: <count> <what>: first few offenders".
report_offenders() {
  local check="$1" what="$2" offenders="$3"
  if [ -z "$offenders" ]; then
    pass "$check"
    return
  fi
  local count listed
  count=$(printf '%s\n' "$offenders" | wc -l | tr -d ' ')
  listed=$(printf '%s\n' "$offenders" | head -n "$MAX_LISTED" | sed 's/^/[/; s/$/]/' | tr '\n' ' ')
  if [ "$count" -gt "$MAX_LISTED" ]; then
    listed="$listed..."
  fi
  fail "$check" "$count $what: $listed"
}

# Newline-separated list of tracked paths (spaces safe; newlines in names are not expected).
tracked_paths() {
  git ls-files -z | tr '\0' '\n'
}

url_decode() {
  local escaped
  escaped=$(printf '%s' "$1" | sed -e 's/\\/\\\\/g' -e 's/%\([0-9A-Fa-f][0-9A-Fa-f]\)/\\x\1/g')
  printf '%b' "$escaped"
}

# Check 1: no tracked path with space, '&' or '...'.
check_forbidden_chars() {
  local offenders=""
  local path
  while IFS= read -r path; do
    case "$path" in
      *" "* | *"&"* | *...*) offenders="${offenders}${path}"$'\n' ;;
    esac
  done < <(tracked_paths)
  report_offenders "no spaces, '&' or '...' in tracked paths" "bad paths" "${offenders%$'\n'}"
}

# Check 2: no tracked .DS_Store.
check_no_ds_store() {
  local offenders
  offenders=$(tracked_paths | awk -F/ '$NF == ".DS_Store"')
  report_offenders "no tracked .DS_Store" ".DS_Store files" "$offenders"
}

# Check 3: a single tracked .gitignore, at the root, with the required rules.
check_single_gitignore() {
  local check="single root .gitignore"
  local found
  found=$(tracked_paths | awk -F/ '$NF == ".gitignore"')
  if [ "$found" != ".gitignore" ]; then
    local detail
    if [ -z "$found" ]; then
      detail="root .gitignore is not tracked"
    else
      detail="tracked .gitignore files: $(printf '%s' "$found" | tr '\n' ' ')"
    fi
    fail "$check" "$detail"
    return
  fi
  if [ ! -f .gitignore ]; then
    fail "$check" ".gitignore missing in working tree"
    return
  fi
  local rule missing=""
  for rule in '.DS_Store' '.orch/' '*.dSYM/'; do
    if ! grep -qxF -- "$rule" .gitignore; then
      missing="${missing}${rule}"$'\n'
    fi
  done
  report_offenders "$check" "missing rules in .gitignore" "${missing%$'\n'}"
}

# True when the directory name is exempt from the kebab rule.
is_frozen_dir() {
  case "$1" in
    *.dSYM | .vscode) return 0 ;;
  esac
  [[ "$1" =~ ^exercise[0-9]+$ ]]
}

# Check 4: directories below discipline level are kebab-case (POO skipped).
check_kebab_dirs() {
  local offenders="" path parent dirs discipline part
  local -a parts
  while IFS= read -r path; do
    case "$path" in
      */*) ;;
      *) continue ;;
    esac
    discipline="${path%%/*}"
    case " $DISCIPLINES " in
      *" $discipline "*) ;;
      *) continue ;;
    esac
    parent="${path%/*}"
    [ "$parent" = "$discipline" ] && continue
    dirs="${parent#*/}"
    IFS=/ read -r -a parts <<< "$dirs"
    local current="$discipline"
    for part in "${parts[@]}"; do
      current="$current/$part"
      if is_frozen_dir "$part"; then
        break
      fi
      if ! [[ "$part" =~ $KEBAB_REGEX ]]; then
        offenders="${offenders}${current}"$'\n'
        break
      fi
    done
  done < <(tracked_paths)
  offenders=$(printf '%s' "$offenders" | sort -u)
  report_offenders "directories are kebab-case (frozen excepted)" "bad directories" "$offenders"
}

# Prints "old<TAB>new" for each row of the MIGRATION.md table.
migration_rows() {
  local line in_table=0 old new rest
  while IFS= read -r line; do
    if [ "$in_table" -eq 0 ]; then
      [ "$line" = "$MIGRATION_HEADER" ] && in_table=1
      continue
    fi
    case "$line" in
      "|"*) ;;
      *) break ;;
    esac
    case "$line" in
      "|---"* | "| ---"* | "|:--"*) continue ;;
    esac
    rest="${line#|}"
    old="${rest%%|*}"
    rest="${rest#*|}"
    new="${rest%%|*}"
    old=$(printf '%s' "$old" | tr -d '`' | sed 's/^[[:space:]]*//; s/[[:space:]]*$//')
    new=$(printf '%s' "$new" | tr -d '`' | sed 's/^[[:space:]]*//; s/[[:space:]]*$//')
    printf '%s\t%s\n' "$old" "$new"
  done < MIGRATION.md
}

tracked_count() {
  git ls-files -z -- ":(literal)$1" | tr -cd '\0' | wc -c | tr -d ' '
}

# Check 5: every MIGRATION.md row is applied (old untracked, new tracked).
check_migration_applied() {
  local check="MIGRATION.md rows applied"
  if [ ! -f MIGRATION.md ]; then
    fail "$check" "MIGRATION.md not found at repo root"
    return
  fi
  local rows problems="" old new total=0
  rows=$(migration_rows)
  if [ -z "$rows" ]; then
    fail "$check" "no table rows found under header '$MIGRATION_HEADER'"
    return
  fi
  while IFS=$'\t' read -r old new; do
    total=$((total + 1))
    if [ -z "$old" ] || [ -z "$new" ]; then
      problems="${problems}empty cell in row $total"$'\n'
      continue
    fi
    if [ "$(tracked_count "$old")" -gt 0 ]; then
      problems="${problems}old still tracked: $old"$'\n'
    fi
    if [ "$(tracked_count "$new")" -eq 0 ]; then
      problems="${problems}new not tracked: $new"$'\n'
    fi
  done <<< "$rows"
  report_offenders "$check" "row problems (of $total rows)" "${problems%$'\n'}"
}

# Prints the relative link targets of a Markdown file, one per line.
markdown_links() {
  { grep -o '\]([^)]*)' "$1" || true; } | sed 's/^](//; s/)$//'
}

# Check 6: relative Markdown links in README.md and MIGRATION.md resolve.
check_markdown_links() {
  local check="README.md and MIGRATION.md links resolve"
  local problems="" file target decoded
  for file in README.md MIGRATION.md; do
    if [ ! -f "$file" ]; then
      problems="${problems}${file} not found"$'\n'
      continue
    fi
    while IFS= read -r target; do
      [ -z "$target" ] && continue
      target="${target#<}"
      target="${target%>}"
      case "$target" in
        "#"*) continue ;;
        [A-Za-z]*:* ) continue ;;   # http:, https:, mailto:, ...
      esac
      target="${target%%#*}"
      decoded=$(url_decode "$target")
      decoded="${decoded%/}"
      if [ -z "$decoded" ] || [ ! -e "$decoded" ]; then
        problems="${problems}${file} -> ${target}"$'\n'
      fi
    done < <(markdown_links "$file")
  done
  report_offenders "$check" "broken links" "${problems%$'\n'}"
}

# True when "<status> <path...>" is an allowed change versus the base.
is_allowed_change() {
  local status="$1" path="$2"
  case "$status" in
    R100) return 0 ;;
    D)
      [ "${path##*/}" = ".DS_Store" ] && return 0
      [ "${path##*/}" = ".gitignore" ] && [ "$path" != ".gitignore" ] && return 0
      return 1
      ;;
    M)
      [ "$path" = "README.md" ] || [ "$path" = ".gitignore" ]
      return
      ;;
    A)
      case "$path" in
        MIGRATION.md | docs/adr/* | scripts/*) return 0 ;;
      esac
      return 1
      ;;
  esac
  return 1
}

# Check 7: only pure renames, allowed deletions/modifications/additions vs base.
check_no_content_changes() {
  local check="no content changes vs $BASE_REF"
  if ! git rev-parse --verify --quiet "${BASE_REF}^{commit}" > /dev/null; then
    fail "$check" "base ref '$BASE_REF' not found"
    return
  fi
  local problems="" status path1 path2 diff_output
  diff_output=$(git -c core.quotepath=false diff --cached -M --name-status "$BASE_REF")
  while IFS=$'\t' read -r status path1 path2; do
    [ -z "$status" ] && continue
    if ! is_allowed_change "$status" "$path1"; then
      problems="${problems}${status} ${path1}${path2:+ -> $path2}"$'\n'
    fi
  done <<< "$diff_output"
  report_offenders "$check" "disallowed changes" "${problems%$'\n'}"
}

main() {
  check_forbidden_chars
  check_no_ds_store
  check_single_gitignore
  check_kebab_dirs
  check_migration_applied
  check_markdown_links
  check_no_content_changes
  if [ "$failures" -gt 0 ]; then
    echo "$failures check(s) failed"
    exit 1
  fi
  echo "all checks passed"
}

main
