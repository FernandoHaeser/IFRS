/******************************************************************************

2 - escreva um programa que cria uma string, peça para o usuário digitar uma palavra. 

se a palavra digitada for "senha secreta", escreva a mensagem: "senha correta", senão escreva "senha incorreta". 
usar strcmp para comparar. combinar com sentença if/else 

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char senha[20];
    
    printf("\n\nInforme a senha por gentileza: ");
    gets(senha);
    
    if(strcmp(senha, "senha secreta") == 0)
        printf("\nSenha correta!");
    else
        printf("\nSenha incorreta!");
        
    return 0;
    
    //O strcmp(string1,string2), se for 0 o retorno, sao iguais, se nao, diferentes.
}
