/******************************************************************************

3 - Escreva um programa que leia o nome e a idade do usuário e retorne
    uma mensagem indicando se o usuário é maior de idade ou não. 
    
    Vamos considerar 18 anos completos.

    Ex: "FULANO é maior de idade" ou "FULANO é Menor de idade" 

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char name[20];
    int age;
    
    printf("\n\nInforme seu nome por gentileza: ");
    gets(name);
    printf("Informe sua idade por gentileza: ");
    scanf("%d", &age);
    
    if(age > 18)
        printf("\n%s é maior de idade!", name);
    else
        printf("\n%s é menor de idade!", name);
        
    return 0;
    
    //Usamos %s para as Strings no Printf
}
