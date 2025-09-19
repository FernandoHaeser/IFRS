programa
{

/*
Desenvolva um algoritmo que leia dois valores inteiros distintos. Caso os números informados sejam iguais, solicite um novo número até que sejam diferentes.

Identifique qual é o menor e qual é o maior valor. Em seguida:

    Mostre todos os números entre o menor e o maior, incluindo os valores informados, em ordem crescente (na mesma linha, separados por espaço).

    Depois, mostre os mesmos números em ordem decrescente (em outra linha, também separados por espaço).
*/

	funcao inicio()
	{
		inteiro n1, n2, menor, maior

		escreva("Informe o primeiro numero: ")
		leia(n1)

		escreva("Informe o segundo numero: ")
		leia(n2)

		// Se forem iguais, pedir até que sejam diferentes
		enquanto (n1 == n2) {
			escreva("\nOs numeros devem ser diferentes!")
			escreva("\nInforme novamente o segundo numero: ")
			leia(n2)
		}

		// Descobrir quem é menor e quem é maior
		se (n1 < n2) {
			menor = n1
			maior = n2
		} senao {
			menor = n2
			maior = n1
		}

		// Crescente
		para (inteiro i = menor; i <= maior; i++) {
			escreva(i, " ")
		}
		escreva("\n")

		// Decrescente
		para (inteiro i = maior; i >= menor; i--) {
			escreva(i, " ")
		}
		escreva("\n")
	}
}

/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 1186; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */