// Exercício 3
// Enunciado: Escreva um programa que leia 3 notas, calcule a média simples e escreva na tela;

#include <stdio.h>

int main()
{
	float n1, n2, n3, media;
	
	printf("Escreva a primeira nota: ");
	scanf("%f", &n1);
	
	printf("Escreva a segunda nota: ");
	scanf("%f", &n2);
	
	printf("Escreva a terceira nota: ");
	scanf("%f", &n3);
	
	media = (n1 + n2 + n3) / 3;
	
	printf("\nA media das 3 notas é: %.2f", media);
	
	return 0;
}
