/*
* Leia 03 (três) notas de um aluno, calcule sua média. 
* Caso a média seja menor que 7 ele será reprovado.
* Apresente a média calculada e a situação (aprovado ou reprovado).
*/

#include <stdio.h>

int main()
{
    int nota1, nota2, nota3;
    float media;
    _Bool continuar = 0;
    
    do {
        
    printf("\nInforme sua primeira nota: ");
    scanf("%d", &nota1);
    
    if (nota1 > 10) {
        printf("\nInforme uma nota valida por favor!");
        continue;
    }

    printf("\nInforme sua segundaa nota: ");
    scanf("%d", &nota2);
    
    if (nota1 > 10) {
        printf("\nInforme uma nota valida por favor!");
        continue;
    }
    
    printf("\nInforme sua terceira nota: ");
    scanf("%d", &nota3);
    
    if (nota1 > 10) {
        printf("\nInforme uma nota valida por favor!");
        continue;
    }
    
    continuar = 1;
    
    } while (!continuar);
    
    media = (nota1 + nota2 + nota3) / 3;
    
    if (media < 7)
        printf("\nVocê foi reprovado!");
    else
        printf("\nVocê foi aprovado!");
        
    return 0;
}
