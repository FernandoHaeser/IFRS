/*
* Faça um programa que leia a média do aluno e seu numero de faltas. 
* se as faltas forem maior ou igual a 5, escreva 'reprovado por faltas'. 
* Se a média for menor que 7, foi reprovado por média.
* Senão, escreva 'Parabéns! você foi aprovado'.
*/

#include <stdio.h>

int main()
{
    int nota1, nota2, faltas;
    float media;
    
    // Nota 1
    do {
        printf("\nInforme sua primeira nota: ");
        scanf("%d", &nota1);
        if (nota1 < 0 || nota1 > 10)
            printf("Nota inválida! Digite entre 0 e 10.\n");
    } while (nota1 < 0 || nota1 > 10);

    // Nota 2
    do {
        printf("\nInforme sua segunda nota: ");
        scanf("%d", &nota2);
        if (nota2 < 0 || nota2 > 10)
            printf("Nota inválida! Digite entre 0 e 10.\n");
    } while (nota2 < 0 || nota2 > 10);
    
    printf("\nInforme seu número de faltas: ");
    scanf("%d", &faltas);
    
    media = nota1 + nota2 / 2;
    
    if (faltas >= 5 && media < 7)
        printf("\nVocê foi reprovado por faltas e por média!");
    else if (faltas >= 5)
        printf("\nVocê foi reprovado por faltas!");    
    else if (media < 7)
        printf("\nVocê foi reprovado por média!");
    else
        printf("\nVocê foi aprovado!");
    
    return 0;
}
