# 🔀 Migração de caminhos

Mapa de reorganização do repositório: cada linha abaixo mostra onde um caminho estava e onde ele está agora. As linhas são aplicadas de cima para baixo (linhas posteriores usam caminhos já renomeados por linhas anteriores). O histórico foi preservado com `git mv`. Veja a motivação em [docs/adr/0001-repo-layout.md](docs/adr/0001-repo-layout.md).

| Caminho antigo | Caminho novo |
|---|---|
| `CPW_I/CurriculumVitae` | `CPW_I/projects/curriculum-vitae` |
| `CPW_I/Exercicios` | `CPW_I/exercises` |
| `CPW_II/AJAX` | `CPW_II/exercises/ajax` |
| `ED_I/exercises/Pointers` | `ED_I/exercises/pointers` |
| `ED_I/exercises/pointers/atividadePratica` | `ED_I/exercises/pointers/practice` |
| `ED_I/exercises/Registros` | `ED_I/exercises/records` |
| `LDP/exercises/Positivos&Negativos.por` | `LDP/exercises/PositivosENegativos.por` |
| `LDP/exercises/Programa enquanto.por` | `LDP/exercises/ProgramaEnquanto.por` |
| `LDP/exercises/Programa faca...enquanto.por` | `LDP/exercises/ProgramaFacaEnquanto.por` |
| `LP_I/ExerciciosC_Aula01` | `LP_I/exercises/class-01` |
| `LP_I/ExerciciosC_Aula02` | `LP_I/exercises/class-02` |
| `LP_I/ExerciciosC_Aula03` | `LP_I/exercises/class-03` |
| `LP_I/ExerciciosC_Aula04` | `LP_I/exercises/class-04` |
| `LP_I/ExerciciosC_Aula05` | `LP_I/exercises/class-05` |
| `LP_I/ExerciciosC_Funcoes` | `LP_I/exercises/functions` |
| `LP_I/ExerciciosC_Lacos` | `LP_I/exercises/loops` |
| `LP_I/ExerciciosC_MoreExercises` | `LP_I/exercises/more-exercises` |
| `LP_I/ExerciciosC_VetoresMatrizes` | `LP_I/exercises/arrays-and-matrices` |
| `LP_I/Challenge` | `LP_I/exercises/challenge` |
| `LP_I/exercises/class-02/Media&Aprovacao.c` | `LP_I/exercises/class-02/MediaEAprovacao.c` |
| `LP_I/exercises/class-03/Aprovado&Reprovado.c` | `LP_I/exercises/class-03/AprovadoEReprovado.c` |
| `LP_I/JogoDaVelha-C` | `LP_I/projects/tic-tac-toe` |
| `LP_I/Simulado` | `LP_I/mock-exams/mock-exam-1` |
| `LP_I/SImulado2` | `LP_I/mock-exams/mock-exam-2` |

## Removidos

Arquivos `.DS_Store` rastreados (lixo do macOS, agora ignorados):

- `.DS_Store`
- `ED_I/.DS_Store`
- `ED_I/exercises/.DS_Store`
- `POO/.DS_Store`
- `POO/LABS/.DS_Store`
- `POO/LABS/src/.DS_Store`
- `POO/LABS/src/LAB02/.DS_Store`

Arquivos `.gitignore` aninhados (regras mescladas no `.gitignore` da raiz):

- `POO/.gitignore`
- `POO/LABS/.gitignore`
- `ED_I/exercises/.gitignore`

## Pendências (follow-up)

Artefatos de build ainda estão rastreados e **não** foram removidos, pois nenhum conteúdo é apagado nesta migração: pastas `*.dSYM` (em `ED_I`). As novas regras do `.gitignore` impedem novos artefatos, mas não desrastreiam os existentes. Remover com `git rm --cached` fica para uma etapa futura.
