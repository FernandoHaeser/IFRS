programa
{
	inclua biblioteca Matematica --> mat
	
	funcao inicio()
	{
		real nota1, nota2, media, alunoMedia[40], mediaGeral = 0.0
		cadeia nome, sobrenome
		inteiro i = 0
		
		cadeia alunoNome[40], alunoSobrenome[40]
		
		enquanto (i < 2) {
			escreva("\n\nInforme seu nome: ")
			leia(nome)
			alunoNome[i] = nome
			
			escreva("Informe seu sobrenome: ")
			leia(sobrenome)
			alunoSobrenome[i] = sobrenome

			escreva("Informe sua primeira nota: ")
			leia(nota1)

		     enquanto (nota1 > 10 ou nota1 < 0) {

				se (nota1 > 10 ou nota1 < 10) 
					escreva("\nInforme uma nota valida!")
		     
				escreva("\n\nInforme sua primeira nota: ")
				leia(nota1)
	
		     }
		     
			escreva("Informe sua segunda nota: ")
			leia(nota2)

		     enquanto (nota2 > 10 ou nota2 < 0) {

				se (nota2 > 10 ou nota2 < 10) 
					escreva("\nInforme uma nota valida!")		
		   
				escreva("\n\nInforme sua segunda nota: ")
				leia(nota2)
	
		     }

			media = (nota1 + nota2) / 2

			mediaGeral += media

			alunoMedia[i] = media

			i++
		}

		i = 0

		limpa()

		enquanto (i < 2) {
			escreva("\n\nAluno(a): ", alunoNome[i], " ", alunoSobrenome[i])
			escreva("\nMedia do aluno: ", mat.arredondar(alunoMedia[i], 2))

			se (alunoMedia[i] >= 7)
				escreva("\nO aluno esta: Aprovado!")
			senao
				escreva("\nO aluno esta: Reprovado!")
		
			i++
		}
			
		mediaGeral /= 2

		escreva("\n\nMedia geral da turma: ", mediaGeral, "\n\n")
	}
}
