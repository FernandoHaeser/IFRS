/******************************************************************************

4 - Faça um programa que leia as notas de 2 provas e um trabalho e o numero de faltas. 
Calcule a média aritmética. E indique o conceito: 

A para (8.0 a 10),
B para (7.0 a 7.9),
C para (6.0 a 6.9),
D para (0.0 a 5.9)
E para reprovado por faltas. Maior ou igual a 5.
Escreva "Reprovado" ou "Aprovado".

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    float media, nota1, nota2;
    char notaFinal, aprovacao[10];
    int faltas;
    
    printf("Informe sua primeira nota: ");
    scanf("%f", &nota1);
    
    printf("Informe sua segunda nota: ");
    scanf("%f", &nota2);
    
    printf("Informe o número de faltas: ");
    scanf("%d", &faltas);
    
    media = (nota1 + nota2) / 2;
    
    if (media <= 10 && media >= 8)
        notaFinal = 'A';
    else if (media <= 7.9 && media >= 7)
        notaFinal = 'B';
    else if (media <=6.9 && media >= 6)
        notaFinal = 'C';
    else
        notaFinal = 'D';
        
    if (faltas >= 5)
        strcpy(aprovacao, "Reprovado");
    else
        strcpy(aprovacao, "Aprovado");
        
        
    printf("\n\nO conceito do aluno foi %c, com média de%2.f ele teve %d faltas, logo está %s.", notaFinal, media, faltas, aprovacao);  
    
    return 0;
}
