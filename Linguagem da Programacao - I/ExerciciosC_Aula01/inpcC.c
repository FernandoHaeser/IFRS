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
	
	printf("Valor do INPC (em %%): ");
	scanf("%f", &inpc);
	
	printf("Indice de produtividae: ");
	scanf("%f", &indexProductivity);
	
	increase = (salary*0.75*inpc)/100 + (salary * indexProductivity)/100;
	salary = salary + increase;
	
	printf("\nO funcionário %d vai receber um aumento de R$%.2f, logo seu novo salario sera de: R$%.2f", employeeNumber, increase, salary);
	
	return 0;
}
