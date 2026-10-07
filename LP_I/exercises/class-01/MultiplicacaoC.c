// Exercício 2
// Enunciado: Escreva um programa que lê três numeros e imprima o resultado da multiplicação.

#include <stdio.h>

int main()
{
	int n1, n2, n3, mult;
	
	printf("Escreva o primeiro número: ");
	scanf("%d", &n1);
	
	printf("Escreva o segundo número: ");
	scanf("%d", &n2);
	
	printf("Escreva o terceiro número: ");
	scanf("%d", &n3);
	
	mult = n1 * n2 * n3;
	
	printf("A multiplicação dos 3 números é: %d", mult);
	
	return 0;
}
