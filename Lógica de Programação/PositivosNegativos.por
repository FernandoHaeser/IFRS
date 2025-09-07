programa
{
	
	funcao inicio()
	{
		real a
		inteiro plus = 0, less = 0, zero = 0, i = 0

		enquanto ( i < 10 ) {
			escreva("Digite um número: ")
			leia(a)

			se (a > 0)
				plus++
			senao se (a < 0)
				less++
			senao
				zero++

			i++
		}

		escreva("\n\nPositivos: ", plus)
		escreva("\nNegativos: ", less)
		escreva("\nZeros: ", zero)
	}
}
