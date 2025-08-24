/******************************************************************************

6 – Escreva um programa que:
 - leia duas strings;
 - compare as duas: informe se as duas são iguais ou diferentes entre si;
 - indique a capacidade de cada variável string
 - informe o espaço usado pelo conteúdo em cada string.
 - Concatenar as duas strings. Antes de concatenar verifique se a string de 
 destino tem espaço suficiente para a concatenação, caso o espaço não seja suficiente, 
 escreva uma mensagem de erro

*******************************************************************************/
#include <stdio.h>
#include <string.h> //biblioteca para puxar as funcoes de Strings

int main()
{
    char string1[20];
    char string2[20];
    
    int tamanhoOriginalString1 = sizeof(string1); //sizeof = tamanhgo do vetor
    int tamanhoOriginalString2 = sizeof(string2);
    
    printf("Informe uma String: ");
    gets(string1); //funciona como o sc.nextLine()
    printf("\nInforme outra String: ");
    gets(string2);
    
    if (strcmp(string1, string2) == 0) //compara duas Strings
        printf("\nAs duas Strings são iguais!");
    else
        printf("\nAs Strings não são iguais!");
    
    int tamanhoString1 = strlen(string1); //Strlen serve para retornar o tamanho da String sem o /0
    int tamanhoString2 = strlen(string2);
    
    printf("\nA String 1 tem tamanho %d e a String 2 tem tamanho %d.", tamanhoString1, tamanhoString2);
    printf("\nA capacidade original da String1 e de %d e a da String2 %d.", tamanhoOriginalString1, tamanhoOriginalString2);
    
    if (strlen(string1) + strlen(string2) + 1 > sizeof(string1)) { //verificao de tamanho das duas Strings
        printf("\nErro! Nao ha espaco suficiente para concatenar!");
    } else {
        strcat(string1, string2);
        printf("\nConcatenado: %s", string1);
    }
    return 0;
}
