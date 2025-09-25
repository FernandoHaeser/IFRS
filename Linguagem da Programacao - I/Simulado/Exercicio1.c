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
	
	int number, impares = 0, maiorValorPar = 0, soma_impares = 0;
	float media_impares;
	
	do {
	
		printf("\nInforme um numero inteiro positivo: ");
		scanf("%d", &number);
		
		if (number % 2 == 0) {
    		if (maiorValorPar == 0) {
    			maiorValorPar = number;
    		} else if (number > maiorValorPar) {
    			maiorValorPar = number;
    		}
		}
		
		
		if (number % 2 == 1 || number % 2 == -1) {
			soma_impares += number;
			impares++;
			if (number > 0 && number % 2 == 1) {
				printf("\nDivisores dos impares\n\n");
				for (int i = 1; i <= number; i++) {
					if (number % i == 0)
						printf("%d \n", i);
				}
			}
		}
		
		if (number > 0 && number % 2 == 0) {
			printf("Tabuada dos Pares\n");
			for (int i = 1; i <= 10; i++) {
				printf("\n %d x %d = %d \n", number , i, (number*i));
			}
		} 
	} while (number != 0);
	
	media_impares = soma_impares / impares;
	
	printf("\n\nA media dos numeros impares e: %.2f", media_impares);
	printf("\nMaior valor par: %d", maiorValorPar);
	
	return 0;
}