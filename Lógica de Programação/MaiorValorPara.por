programa {
	
	funcao inicio() {

		inteiro value, maiorValor = 0
		
		para (inteiro i = 0; i < 50; i++) {

			escreva("Informe um valor: ")
			leia(value)

			se (i == 0)
				maiorValor = value
			senao se (value > maiorValor)
				maiorValor = value
		}

		escreva("Maior valor: ", maiorValor)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 305; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */