// Escreva um algoritmo que leia 3 números inteiros e mostre o maior deles.

#include <stdio.h>

int main() 
{
    int n1, n2, n3;
    
    printf("Informe o valor de 3 núnmeros");
    printf("\nNúmero 1: ");
    scanf("%d", &n1);
    printf("\nNúmero 2: ");
    scanf("%d", &n2);
    printf("\nNúmero 3: ");
    scanf("%d", &n3);
    
    if (n1 > n2 && n1 > n3)
        printf("\n%d é o maior número!", n1);
    else if (n2 > n1 && n2 > n3)
        printf("\n%d é o maior número!", n2);
    else
        printf("\n%d é o maior número!", n3);
        
    return 0;
}
