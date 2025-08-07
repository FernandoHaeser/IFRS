// Exercício 7
/*
* A Joalheria Silva está fazendo aniversário e resolveu premiar o primeiro cliente do dia devolvendo a ele o valor da compra em dobro. 
* Faça um programa que leia o preço unitário do produto adquirido pelo cliente, a quantidade e calcule o total gasto pelo cliente. 
* Mostre o total e calcule o prêmio. Mostre o valor do prêmio (total da compra multiplicado por 2)
*/

#include <stdio.h>

int main() 
{
	
	float price, award, totalPrice;
	int unit;
	
	printf("Informe o preco do produto: R$");
	scanf("%f", &price);
	
	printf("Informe a quantidade do produto adquirida: ");
	scanf("%d", &unit);
	
	totalPrice = price * unit;
	award = totalPrice * 2;
	
	printf("\nO cliente gastou: R$%.2f e recebeu um premio de R$%.2f", totalPrice, award);
	
	return 0;
}
