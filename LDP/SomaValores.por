programa
{
	
	funcao inicio()
	{
		inteiro valor, somaValores = 0, i = 0
		
		enquanto ( i < 20 ) {
			escreva("Informe o ", (i+1), " valor: ")
			leia(valor)

			somaValores += valor
			
			i++
		}

		limpa()

		escreva("A soma dos valores e: ", somaValores)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 272; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */