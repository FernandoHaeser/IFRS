// 2 - Escreva um programa que leia 10 números inteiros. Apresente a soma dos 10 números. 

#include <stdio.h>
#include <stdlib.h>

int main(){
    int num[10];
    int soma = 0;

    for (int i = 0; i <= 10; i++) {
        printf("Please inform a number: ");
        scanf("%d", &num[i]);
        soma += num[i];
        system("cls || clear");
    }

    system("cls || clear");

    printf("A soma dos numeros %d", soma);

    return 0;
}