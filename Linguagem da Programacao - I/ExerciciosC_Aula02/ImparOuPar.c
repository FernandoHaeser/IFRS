/*
* Faça um programa que leia um nº inteiro e mostre uma mensagem indicando se 
* este número é par ou ímpar, e se é positivo ou negativo. Ex: 'O número 2 é
* par e é positivo'.
*/

#include <stdio.h>

int main() {
    
    int num;
    
    printf("Informe um numero para saber se ele é par ou ímpar: ");
    scanf("%d", &num);
    
    if (num % 2 == 0)
        printf("\nSeu número é par!");
    else
        printf("\nSeu número é ímpar!");

    return 0; 
}
