programa
{
	funcao inicio()
	{
		inteiro hab, filhos, i = 0, totalFilhos = 0
		real salary = 1.0, somaSalarios = 0.0, maiorSalario = 0.0, mediaSalarios, mediaFilhos
		
		escreva("Informe o numero de habitantes: ")
		leia(hab)

		enquanto (i < hab e salary > 0.0) {
			limpa()
			
			escreva("Numero de filhos: ")
			leia(filhos)

			totalFilhos += filhos

			escreva("Salario: R$")
			leia(salary)

			se (salary < 0) {
				limpa()
				salary = 0.0
			 	escreva("Fim do programa!\n\n")
			} senao {
			i++
			 somaSalarios += salary
			 	se (maiorSalario == 0)
					maiorSalario = salary
				se (salary > maiorSalario)
					maiorSalario = salary
			}
		}

		se (salary != 0.0) {

		limpa()
		
		mediaSalarios = somaSalarios / hab
		mediaFilhos = totalFilhos / hab

		escreva("\n\nMedia salario pop: R$", mediaSalarios)
		escreva("\nMedia filhos pop: ", mediaFilhos)
		escreva("\nnMaior salario: R$", maiorSalario)
		
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 733; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */