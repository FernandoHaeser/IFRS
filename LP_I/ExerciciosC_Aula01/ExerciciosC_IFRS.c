//Exercícios C

/*	
	Nome: Fernando Augusto Haeser
	Descrição: Exercícios IFRS, Linguagem da Programação - I
*/

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

// Exercício 4
// Enunciado: Escreva um programa que leia 4 notas: a primeira com peso 1, a segunda com peso 2, a terceira com peso 3, a quarta com peso 4. Leia as 4 notas e cacule a média e escreva na tela.
// Media = (N1*1+N2*2+N3*3+N4*4)/(1+2+3+4) 

#include <stdio.h>

int main()
{

	float n1, n2, n3, n4, media;
	
	printf("Escreva a primeira nota: ");
	scanf("%f", &n1);
	
	printf("Escreva a segunda nota: ");
	scanf("%f", &n2);
	
	printf("Escreva a terceira nota: ");
	scanf("%f", &n3);
	
	printf("Escreva a quarta nota: ");
	scanf("%f", &n4);
	
	media = (n1*1+n2*2+n3*3+n4*4)/(1+2+3+4);
	
	printf("A média ponderada das quatro notas é: %.2f", media);
	
	return 0;
}

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

// Exercício 6
/*
* Desenvolva um programa que faça a conversão de um valor lido em dólares para um valor em reias. 
* O usuário deve informar a quantidade em dólares e a cotação do dólar no dia.
*/

#include <stdio.h>

int main()
{
	float valorReal, cotacaoDolar, conversao;
	
	printf("Digite um valor em doláres: U$");
	scanf("%f", &valorReal);
	
	printf("Digite a cotação do dolar no dia de hoje: U$D");
	scanf("%f", &cotacaoDolar);
	
	conversao = valorReal * cotacaoDolar;
	
	printf("\nO seu valor em reais é: R$%.2f", conversao);
	
	return 0;
}

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


// Exercício 8
/*
* Equidade: Léia e Luke são irmãos e dividem um apartamento alugado. 
* O salário de Luke é R$2.000,00 o salário de Léia é de R$4.000,00. 
* O valor do aluguel é de R$1.000,00. 
* Para que a divisão do valor tenha equidade, Luke deve pagar 1/3 e Léia deve pagar 2/3. 
* Para calcular essa proporção, basta dividir o salário de cada um pela soma dos salários.
*
* Proporção Luke será de 2000/6000 = 1/3
* Proporção Léia será de 4000/6000 = 2/3
*
* Valor a pagar no aluguel: Luke R$333,33 Léia=R$666,67
* 
* Escreva um programa que, leia o salário de 2 pessoas e o valor da conta a ser dividida. Apresente quanto cada um deve pagar em uma divisão com equidade.
*
* Após calcular a proporção da pessoa, basta multiplicar pelo valor da conta, que resultará no valor a ser pago pela pessoa.
*/

#include <stdio.h>

int main()
{
	
	int rent = 1000;
	float salary1, salary2, proportion1, proportion2, divisionPrice1, divisionPrice2;
	
	printf("Informe o salario da primeira pessoa: R$");
	scanf("%f", &salary1);
	
	printf("Informe o salario da segunda pessoa: R$");
	scanf("%f", &salary2);
	
	proportion1 = salary1 / (salary1 + salary2);
	proportion2 = salary2 / (salary1 + salary2);
	
	divisionPrice1 = rent * proportion1;
	divisionPrice2 = rent * proportion2;
	
	printf("\nA primeira pessoa deve pagar R$%.2f e a segunda pessoa deve pagar R$%.2f", divisionPrice1, divisionPrice2);
	
	return 0;
	
}

// Exercício 9
/*
* Considerando que o aumento dos funcionários é de 75% do INPC e mais um percentual de produtividade discutido com a empresa. 
* Construir um programa que lê:
*
* -> Número do funcionário
* -> Seu salário atual, 
* -> Valor do INPC 
* -> Indice de produtividade 
*
* E escreve o número do funcionário, seu aumento e o valor de seu novo salário.
*
* Aumento=Salario*0.75*INPC/100  + Salario*IndiceProdutividade/100
* Salario Novo = Salario + Aumento  
*/

#include <stdio.h>

int main() 
{
	int employeeNumber;
	float salary, inpc, indexProductivity, increase;
	
	printf("Numero do funcionário: ");
	scanf("%d", &employeeNumber);
	
	printf("Salario atual do mesmo: R$");
	scanf("%f", &salary);
	
	printf("Valor do INPC: ");
	scanf("%f", &inpc);
	
	printf("Indice de produtividae: ");
	scanf("%f", &indexProductivity);
	
	increase = (salary*0,75*inpc)/100 + (salary * indexProductivity)/100;
	salary = salary + increase;
	
	printf("\nO funcionário %d vai receber um aumento de R$%.2f, logo seu novo salario sera de: R$%.2f", employeeNumber, increase, salary);
	
	return 0;
}
