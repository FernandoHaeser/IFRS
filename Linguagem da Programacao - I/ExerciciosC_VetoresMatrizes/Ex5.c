/*

5 - Faça um programa que recebe a nota de 10 alunos e armazene as notas em um vetor. Calcule:

a - a média da classe

b - a quantidade de alunos aprovados (média para aprovação:7)

c - a quantidade de alunos reprovados.

*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    float notas[10];
    float soma_notas = 0;
    float media_classe;
    int alunos_aprovados = 0;
    int alunos_reprovados = 0;

    for (int i = 0; i < 10; i++) {
        system("cls || clear");
        printf("Informe a nota do %dº aluno: ", (i+1));
        scanf("%f", &notas[i]);
        soma_notas += notas[i];
        if (notas[i] < 7) {
            alunos_reprovados++;
        } else {
            alunos_aprovados++;
        }
    }

    media_classe = soma_notas / 10;

    system("cls || clear");

    printf("\n\nTotal alunos aprovados: %d", alunos_aprovados);
    printf("\nTotal alunos reprovados: %d", alunos_reprovados);
    printf("\nMedia da classe: %.2f", media_classe);

}
