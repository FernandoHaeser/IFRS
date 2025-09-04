programa
{
	
	funcao inicio()
	{
		real a
		inteiro plus = 0, less = 0, i = 0

		enquanto ( i < 50 ) {
			escreva("Digite um número: ")
			leia(a)

			se (a < 0)
				plus++
			senao
				less++
		}

		escreva("\n\nPositivos: ", plus)
		escreva("\nNegativos: ", less)
	}
}
