# ADR 0001 — Layout do repositório

- Status: aceito
- Data: 2026-10-07

## Contexto

O repositório reúne exercícios e projetos de seis disciplinas (C, Java, HTML/JS, Portugol). Antes desta mudança havia:

- nomes de pasta em estilos mistos (`Exercicios`, `ExerciciosC_Aula01`, `SImulado2`, `JogoDaVelha-C`) e em pt-BR/en-US misturados;
- arquivos com espaço, `&` e `...` no nome (ex.: `Programa faca...enquanto.por`), que quebram links Markdown e scripts;
- vários `.gitignore` aninhados (`POO/`, `POO/LABS/`, `ED_I/exercises/`) e uma linha `.exe` que não ignorava nada (bug: faltava o `*`);
- `.DS_Store` e artefatos de build (`*.dSYM`) versionados;
- README com links para pastas que já não existem.

Restrições: mover só com `git mv` (histórico preservado) e não editar conteúdo de código.

## Decisão

1. **Códigos de disciplina mantidos**: `CPW_I`, `CPW_II`, `ED_I`, `LDP`, `LP_I`, `POO`. Já são consistentes (UPPER_SNAKE); renomear só geraria churn e links quebrados.
2. **Subpastas em kebab-case en-US** (`^[a-z0-9]+(-[a-z0-9]+)*$`) para tudo que for renomeado ou criado, agrupadas por tipo: `exercises/`, `projects/`, `mock-exams/` (ex.: `LP_I/exercises/class-01`, `LP_I/mock-exams/mock-exam-2`).
3. **Nomes de arquivo mantidos**, exceto caracteres ilegais (espaço, `&`, `...`), removidos mantendo PascalCase; `&` vira `E` (`PositivosENegativos.por`).
4. **Congelados (nunca renomeados)**: tudo em `POO/LABS/` (a declaração `package` Java precisa casar com a pasta, ex.: `package LAB03.exercicioPratico;`, e não editamos código), `*.dSYM/`, `.vscode/`, pastas `exerciseN` e arquivos soltos como `ED_I/exercises/ex1.c`.
5. **Artefatos versionados mantidos**: `*.dSYM` não são apagados (regra: nenhum conteúdo removido). Novos artefatos passam a ser ignorados.
6. **Um único `.gitignore` na raiz**, com as regras dos três aninhados fundidas. Os `.DS_Store` versionados e os 3 `.gitignore` aninhados são removidos.

Regras de ignore relevantes: `*.exe` (corrige o bug), `out/` (antes `out/*`), `/POO/LABS/bin/`, `/POO/.metadata/`, `.orch/`, e o bloco de `ED_I/exercises` que ignora binários C sem extensão (`/ED_I/exercises/**` + reinclusão de diretórios e de arquivos com ponto).

## Alternativas consideradas

- **Renomear códigos de disciplina para nomes en-US** (`web-pages-1`, ...): descartado; ganho estético pequeno, churn alto e perda de referência ao nome usado no curso.
- **Renomear `POO/LABS/*`**: descartado; quebraria `package` Java sem poder editar código.
- **Manter `.gitignore` aninhados**: descartado; regras espalhadas, difíceis de auditar e já com divergência.
- **Apagar dSYM e `bin/` agora**: descartado; viola "nenhum conteúdo apagado".

## Consequências

Positivas:
- Padrão único e verificável por script (`scripts/check-layout.sh`); links Markdown sem `%20`.
- Histórico preservado (renomeações detectadas como `R100`).
- Regras de ignore em um só lugar.

Trade-offs e riscos:
- Convivem dois estilos: códigos UPPER_SNAKE nas disciplinas e kebab-case dentro delas; `POO/LABS` e `exerciseN` continuam fora do padrão por decisão explícita.
- Nomes de arquivo continuam em pt-BR (só os ilegais mudam); inconsistência aceita para não tocar em mais caminhos.
- Ignorar não destrava arquivos já versionados: dSYM seguem rastreados e continuam gerando ruído em diffs.
- O bloco `/ED_I/exercises/**` ignora qualquer arquivo sem ponto nessa árvore (ex.: um `Makefile` ou `README` sem extensão) e exige `git add -f`. Como as pastas `.vscode/` e `*.dSYM/` também estão ignoradas, arquivos novos ali precisam de `-f`.
- Links externos antigos para os caminhos anteriores quebram; `MIGRATION.md` mapeia antigo -> novo.
- Ordem dos movimentos importa em FS case-insensitive (macOS): renomear só caixa exige dois passos.

## Escala / modos de falha

Carga: um autor, algumas centenas de arquivos; sem gargalo. Falhas realistas: renomeação em um passo no macOS sem efeito; link relativo esquecido no README (coberto pelo check 6 do script); regra de ignore escondendo arquivo novo legítimo (ver acima).

## Follow-ups (dependem de aprovação do usuário)

- `git rm --cached` em `*.dSYM/` para destrackear sem apagar do disco.
- Decidir se `POO/LABS` migra para kebab-case junto com pacotes Java (exige editar código; fora do escopo atual).
- Avaliar renomear arquivos pt-BR restantes para en-US.
