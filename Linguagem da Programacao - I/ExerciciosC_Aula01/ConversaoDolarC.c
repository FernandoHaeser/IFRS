// Exercício 5
/*
* Enunciado: Desenvolva um programa que faça a conversão de um valor lido em reais para um valor em dólares. 
* O usuário deve informar a quantidade em reais e a cotação do dólar no dia.
*/

#include <stdio.h>

int main()
{
	float valorReal, cotacaoDolar, conversao;
	
	printf("Digite um valor em real: R$");
	scanf("%f", &valorReal);
	
	printf("Digite a cotação do dolar no dia de hoje: U$D");
	scanf("%f", &cotacaoDolar);
	
	conversao = valorReal / cotacaoDolar;
	
	printf("\nO seu valor em dólar é: U$D%.2f", conversao);
	
	return 0;
}
