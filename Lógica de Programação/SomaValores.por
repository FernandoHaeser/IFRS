programa
{
	
	funcao inicio()
	{
		inteiro valor, somaValores = 0, i = 0
		
		enquanto ( i < 20 ) {
			escreva("Informe o ", (i+1), " valor: ")
			leia(valor)

			somaValores += valor
			
			i++
		}

		limpa()

		escreva("A soma dos valores e: ", somaValores)
	}
}
