/******************************************************************************

1 - escreva um programa que leia o nome do usuário e 
informe quantos caracteres o nome ocupa (strlen). 

Informe a capacidade da variável com o comando sizeof.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char name[20];
    
    printf("Informe seu nome por gentileza: ");
    gets(name);
    
    printf("Seu nome ocupa %d espaços", strlen(name));
    printf("\nA variável nome, tem capacidade de %d espaços.", sizeof(name));
}