#include <stdio.h>

int main()
{
    int nota1, nota2, nota3, nota4;
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

    // Nota 3
    do {
        printf("\nInforme sua terceira nota: ");
        scanf("%d", &nota3);
        if (nota3 < 0 || nota3 > 10)
            printf("Nota inválida! Digite entre 0 e 10.\n");
    } while (nota3 < 0 || nota3 > 10);

    // Nota 4
    do {
        printf("\nInforme sua quarta nota: ");
        scanf("%d", &nota4);
        if (nota4 < 0 || nota4 > 10)
            printf("Nota inválida! Digite entre 0 e 10.\n");
    } while (nota4 < 0 || nota4 > 10);
    
    // Corrige a média: soma tudo antes de dividir
    media = (nota1*1 + nota2*2 + nota3*3 + nota4*4) / 10.0;
    
    if (media < 7)
        printf("\nVocê foi reprovado! Média = %.2f", media);
    else
        printf("\nVocê foi aprovado! Média = %.2f", media);
        
    return 0;
}
