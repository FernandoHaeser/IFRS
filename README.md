# 🎓 IFRS — Repositório de Estudos

Repositório pessoal com **códigos, anotações e materiais de estudo** do curso de **Sistemas de Informação** no **IFRS** (Instituto Federal do Rio Grande do Sul). O conteúdo é organizado por disciplina e acompanha a evolução ao longo do curso.

---

## 📌 Objetivos

- Registrar a evolução dos estudos
- Consolidar exercícios e projetos acadêmicos
- Facilitar revisão e reutilização de materiais

---

## 📂 Estrutura atual do repositório

- [CPW_I/](CPW_I/) — Construção de Páginas Web I
	- [exercises/](CPW_I/exercises/)
		- [index.html](CPW_I/exercises/index.html)
	- [projects/](CPW_I/projects/)
		- [curriculum-vitae/](CPW_I/projects/curriculum-vitae/)
			- [index.html](CPW_I/projects/curriculum-vitae/index.html)
- [CPW_II/](CPW_II/) — Construção de Páginas Web II
	- [exercises/](CPW_II/exercises/)
		- [ajax/](CPW_II/exercises/ajax/)
			- [exercise1/](CPW_II/exercises/ajax/exercise1/)
			- [exercise2/](CPW_II/exercises/ajax/exercise2/)
			- [exercise3/](CPW_II/exercises/ajax/exercise3/)
			- [exercise4/](CPW_II/exercises/ajax/exercise4/)
			- [exercise5/](CPW_II/exercises/ajax/exercise5/)
- [ED_I/](ED_I/) — Estruturas de Dados I
	- [exercises/](ED_I/exercises/)
		- [pointers/](ED_I/exercises/pointers/)
			- [practice/](ED_I/exercises/pointers/practice/)
		- [records/](ED_I/exercises/records/)
			- [exercise1/](ED_I/exercises/records/exercise1/)
			- [exercise2/](ED_I/exercises/records/exercise2/)
			- [exercise3/](ED_I/exercises/records/exercise3/)
			- [exercise4/](ED_I/exercises/records/exercise4/)
			- [exercise5/](ED_I/exercises/records/exercise5/)
- [LDP/](LDP/) — Lógica de Programação (Portugol)
	- [exercises/](LDP/exercises/)
- [LP_I/](LP_I/) — Linguagem de Programação I (C)
	- [exercises/](LP_I/exercises/)
		- [class-01/](LP_I/exercises/class-01/)
		- [class-02/](LP_I/exercises/class-02/)
		- [class-03/](LP_I/exercises/class-03/)
		- [class-04/](LP_I/exercises/class-04/)
		- [class-05/](LP_I/exercises/class-05/)
		- [functions/](LP_I/exercises/functions/)
		- [loops/](LP_I/exercises/loops/)
		- [more-exercises/](LP_I/exercises/more-exercises/)
		- [arrays-and-matrices/](LP_I/exercises/arrays-and-matrices/)
		- [challenge/](LP_I/exercises/challenge/)
	- [projects/](LP_I/projects/)
		- [tic-tac-toe/](LP_I/projects/tic-tac-toe/)
	- [mock-exams/](LP_I/mock-exams/)
		- [mock-exam-1/](LP_I/mock-exams/mock-exam-1/)
		- [mock-exam-2/](LP_I/mock-exams/mock-exam-2/)
- [POO/](POO/) — Programação Orientada a Objetos (Java)
	- [LABS/](POO/LABS/)
		- [src/](POO/LABS/src/)
			- [LAB01/](POO/LABS/src/LAB01/)
			- [LAB02/](POO/LABS/src/LAB02/)
			- [LAB03/](POO/LABS/src/LAB03/)
			- [LAB04/](POO/LABS/src/LAB04/)
			- [LAB05/](POO/LABS/src/LAB05/)
			- [POLIMORFISMO/](POO/LABS/src/POLIMORFISMO/)

> Se você adicionar novos materiais, mantenha a organização por disciplina para facilitar a navegação.

---

## 📏 Convenções

- Pastas de disciplina mantêm o código (`CPW_I`, `CPW_II`, `ED_I`, `LDP`, `LP_I`, `POO`).
- Dentro de cada disciplina, pastas novas ou renomeadas usam **kebab-case em en-US** e são agrupadas por tipo: `exercises/`, `projects/`, `mock-exams/`.
- Nomes de arquivos de código são mantidos, só sem caracteres ilegais (espaço, `&`, `...`).
- `POO/LABS/` é **congelado**: os `package` do Java espelham os nomes das pastas e o código não pode ser editado.
- Também congelados: `*.dSYM/`, `.vscode/` e pastas `exerciseN`.

Histórico da reorganização: [MIGRATION.md](MIGRATION.md). Decisões e motivos: [docs/adr/0001-repo-layout.md](docs/adr/0001-repo-layout.md).

---

## ✅ Verificação

Na raiz do repositório:

```bash
bash scripts/check-layout.sh
```

O script só lê (nunca altera arquivos), imprime `OK: <check>` ou `FAIL: <check>: <detalhe>` e sai com código 1 se algum check falhar.

---

## 🧠 Tecnologias e linguagens

- C
- Java
- HTML, CSS e JavaScript (com AJAX)
- Portugol (Pseudolinguagem)
- Outras linguagens serão adicionadas conforme o curso avança

---

## 🤝 Contribuições

Este repositório é pessoal, mas sugestões e melhorias são bem-vindas. Sinta-se à vontade para abrir uma issue ou pull request.

---

> 📚 *"A prática constante é o caminho do progresso."*
