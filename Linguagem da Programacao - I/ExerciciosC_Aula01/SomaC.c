// Exercício 1
// Enunciado: Escreva um programa que lê dois numeros e imprima o resultado da soma dos dois numeros.

#include <stdio.h>

int main() 
{
	int n1, n2, soma;
	
	printf("Escreva o primeiro número: ");	
	scanf("%d", &n1);
	
	printf("Escreva o segundo número: ");	
	scanf("%d", &n2);
	
	soma = n1 + n2;
	
	printf("\nA soma dos números é: %d", soma);
	
	return 0;
}
