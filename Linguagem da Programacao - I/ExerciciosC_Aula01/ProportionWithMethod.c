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
* Após calcular a proporção da pessoa, basta multiplicar pelo valor da conta, que resultará no valor a ser pago pela pessoa. : )
*/

#include <stdio.h>

float calc (float rent, float salary, float salary2) {
    float divisionPrice, proportion;
    proportion = salary / (salary + salary2);
	divisionPrice = rent * proportion;
	return divisionPrice;
}

int main()
{
	float salary1, salary2, proportion1, proportion2, rent;
	
	printf("Informe o salario da primeira pessoa: R$");
	scanf("%f", &salary1);
	
	printf("Informe o salario da segunda pessoa: R$");
	scanf("%f", &salary2);
	
	printf("Informe o valor do Aluguel: R$");
	scanf("%f", &rent);
	
	proportion1 = calc(rent, salary1, salary2);
    proportion2 = calc(rent, salary2, salary1);
	
	printf("\nA primeira pessoa deve pagar R$%.2f e a segunda pessoa deve pagar R$%.2f", proportion1, proportion2);
	
	return 0;
	
}
