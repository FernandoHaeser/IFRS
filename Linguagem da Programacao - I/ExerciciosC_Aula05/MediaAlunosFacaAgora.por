programa
{
	funcao inicio()
	{
		inteiro alunoQntd, i = 0
		logico continuar = verdadeiro
		real media, mediaGeral, somaMedias, nota1, nota2, medias[200]
		caracter resp

		faca {
			escreva("De quantos alunos voce quer saber a media? ")
			leia(alunoQntd)

			somaMedias = 0.0
			i = 0

			enquanto (i < alunoQntd) {
				escreva("\nNota 1: ")
				leia(nota1)

				escreva("Nota 2: ")
				leia(nota2)

				// media do aluno
				media = (nota1 + nota2) / 2
				somaMedias += media
				medias[i] = media

				i++
				escreva("\n---------------------------------\n")
			}

			mediaGeral = somaMedias / alunoQntd

			i = 0
			enquanto (i < alunoQntd) {
				escreva("\nMedia aluno ", i + 1, ": ", medias[i])
				i++
			}

			escreva("\n\nMedia Geral: ", mediaGeral)

			escreva("\n\nDeseja continuar (s/n)? ")
			leia(resp)

			se (resp == 's' ou resp == 'S')
				continuar = verdadeiro
			senao
				continuar = falso

		} enquanto (continuar)
	}
}

/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 395; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */