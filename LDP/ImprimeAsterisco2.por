programa
{

/*
Desenvolva um algoritmo que leia um número informado pelo usuário e desenhe o seguinte padrão na tela.
Ex: Número = 5
     *****
     ****
     ***
     **
     *
 */
	
	funcao inicio()
	{
		inteiro n
		
		escreva("Informe um numero: ")
		leia(n)

		para (inteiro i = n; i >=1; i--) {
			para (inteiro j = 1; j <= i; j++) {
				escreva("*")
			}
			escreva("\n")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 223; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */