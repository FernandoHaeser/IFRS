/*
a) Peça ao usuário números inteiros positivos, deve parar de pedir números
quando o usuário digitar ‘0’ (zero) Nesta tarefa é obrigatório o uso correto de
uma estrutura de repetição (for, while ou do.. while);
b) Para cada número inteiro
positivo digitado pelo usuário, o programa deve mostrar os divisores dos valores
ímpares e a tabuada dos valores pares;
c) Quando o laço de repetição terminar (isso ocorrerá quando o usuário digitar ‘0’),
o programa deverá mostrar ao usuário a Média de todos dos valores ímpares
e o Maior valor par digitado pelo usuário: Desconsiderar o valor ‘0’ (zero) para
todos os itens.
*/

// Programa esta com A, B e C integrados.

#include <stdio.h>

int main() {
	
	// Declaração das variáveis
	int number,             // número digitado pelo usuário
	    impares = 0,        // contador de números ímpares
	    maiorValorPar = 0,  // guarda o maior valor par digitado
	    soma_impares = 0;   // acumula a soma dos números ímpares
	    
	float media_impares;    // média dos números ímpares
	
	// Estrutura de repetição do..while (executa pelo menos uma vez)
	do {
		// Entrada de dados
		printf("\nInforme um numero inteiro positivo: ");
		scanf("%d", &number);
		
		// Verifica se o número digitado é par
		if (number % 2 == 0) {
    		// Atualiza o maior valor par (desconsiderando zero no final)
    		if (maiorValorPar == 0) {
    			maiorValorPar = number;
    		} else if (number > maiorValorPar) {
    			maiorValorPar = number;
    		}
		}
		
		// Verifica se o número digitado é ímpar (positivo ou negativo)
		if (number % 2 == 1 || number % 2 == -1) {
			// Soma acumulada dos ímpares
			soma_impares += number;
			// Conta a quantidade de ímpares
			impares++;
			
			// Se o número for positivo e ímpar → mostra os divisores
			if (number > 0 && number % 2 == 1) {
				printf("\nDivisores dos impares\n\n");
				for (int i = 1; i <= number; i++) {
					if (number % i == 0)
						printf("%d \n", i); // imprime divisor
				}
			}
		}
		
		// Se o número for positivo e par → mostra a tabuada
		if (number > 0 && number % 2 == 0) {
			printf("Tabuada dos Pares\n");
			for (int i = 1; i <= 10; i++) {
				printf("\n %d x %d = %d \n", number , i, (number*i));
			}
		} 
	// Repete enquanto o número digitado for diferente de 0
	} while (number != 0);
	
	// Cálculo da média dos números ímpares
	media_impares = soma_impares / impares;
	
	// Exibe os resultados finais
	printf("\n\nA media dos numeros impares e: %.2f", media_impares);
	printf("\nMaior valor par: %d", maiorValorPar);
	
	return 0;
}