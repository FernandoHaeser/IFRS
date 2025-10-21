/*
 1 - Escreva um programa que leia 10 números inteiros. 
Escrevas os 10 números na ordem em que foram informados e depois os 10 números na ordem inversa 
(da posição 10 para a primeira). 
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int num[10];

    for (int i = 0; i < 10; i++) {
        printf("Please, inform a number: ");
        scanf("%d", &num[i]);
        system("cls || clear");
    }

    system("cls || clear");

    for (int i = 0; i < 10; i++) {
        printf(" %d ", num[i]);
    }

    printf("\n\n");

    for (int i = 9; i >= 0; i--) {
        printf(" %d ", num[i]);
    }
    
    return 0;
}