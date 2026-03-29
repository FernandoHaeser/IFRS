// 3 - Escreva um programa que leia 10 números reais. Apresente o resultado da  multiplicação destes. 

#include <stdio.h>
#include <stdlib.h>

int main() {

    float numbers[10];
    float total_multiplicacao = 1;

    for (int i = 0; i < 10; i++) {
        system("cls || clear");
        printf("Informe o primeiro number: ");
        scanf ("%f", &numbers[i]);
        total_multiplicacao *= numbers[i];
    }

    printf("Total multiplicacao numeros: %f", total_multiplicacao);

}
