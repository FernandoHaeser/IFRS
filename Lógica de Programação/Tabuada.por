programa
{
	
	funcao inicio()
	{
		inteiro n, i = 1

		escreva("Tabuada do numero N ate N (NxN)\n\n")
		
		escreva("Informe o valor n: ")
		leia(n)

		enquanto ( i <= n ) {
			escreva(i, " x ", n, " = ", (i*n), "\n")
			i++ 
		}
	}
}
