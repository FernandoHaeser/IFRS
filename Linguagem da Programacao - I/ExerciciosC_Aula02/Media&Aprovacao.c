#include <stdio.h>

int main()
{
    int nota1, nota2, nota3;
    float media;
    
    // Nota 1
    do {
        printf("\nInforme sua primeira nota: ");
        scanf("%d", &nota1);
        if (nota1 < 0 || nota1 > 10)
            printf("Nota inválida! Digite um valor entre 0 e 10.\n");
    } while (nota1 < 0 || nota1 > 10);

    // Nota 2
    do {
        printf("\nInforme sua segunda nota: ");
        scanf("%d", &nota2);
        if (nota2 < 0 || nota2 > 10)
            printf("Nota inválida! Digite um valor entre 0 e 10.\n");
    } while (nota2 < 0 || nota2 > 10);

    // Nota 3
    do {
        printf("\nInforme sua terceira nota: ");
        scanf("%d", &nota3);
        if (nota3 < 0 || nota3 > 10)
            printf("Nota inválida! Digite um valor entre 0 e 10.\n");
    } while (nota3 < 0 || nota3 > 10);

    // Corrigindo para divisão real
    media = (nota1 + nota2 + nota3) / 3.0;
    
    printf("\nMédia final: %.2f", media);

    if (media < 7)
        printf("\nVocê foi reprovado!");
    else
        printf("\nVocê foi aprovado!");
        
    return 0;
}
