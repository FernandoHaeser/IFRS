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
    
    printf("\n\nInforme seu nome por gentileza: ");
    gets(name);
    
    printf("\nSeu nome ocupa %zu espaços", strlen(name));
    printf("\nA variável nome, tem capacidade de %zu espaços.", sizeof(name));
    
    //zu, usado para size_t, retorna como se fosse o Int.
}
