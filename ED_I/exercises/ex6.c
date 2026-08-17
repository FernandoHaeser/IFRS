#include <stdio.h>

#define N 5
#define N_NOTAS 4
#define MEDIA_MINIMA 6.0f
#define MAX_FALTAS   15

typedef struct {
    char nome[100];
    int matricula;
    float notas[N_NOTAS];
    int faltas;
} Aluno;

void ler_aluno(Aluno alunos[], int idx) {
    int j;
    printf("\n--- Aluno %d ---\n", idx + 1);
    printf("Nome: ");
    scanf(" %[^\n]", alunos[idx].nome);
    printf("Matricula: ");
    scanf("%d", &alunos[idx].matricula);
    for (j = 0; j < N_NOTAS; j++) {
        printf("Nota %d: ", j + 1);
        scanf("%f", &alunos[idx].notas[j]);
    }
    printf("Faltas: ");
    scanf("%d", &alunos[idx].faltas);
}

void escrever_aluno(Aluno alunos[], int idx) {
    int j;
    printf("\n=== Aluno %d ===\n", idx + 1);
    printf("Nome      : %s\n", alunos[idx].nome);
    printf("Matricula : %d\n", alunos[idx].matricula);
    for (j = 0; j < N_NOTAS; j++)
        printf("Nota %d    : %.2f\n", j + 1, alunos[idx].notas[j]);
    printf("Faltas    : %d\n", alunos[idx].faltas);
}

float media_aluno(Aluno alunos[], int idx) {
    int j;
    float soma = 0;
    for (j = 0; j < N_NOTAS; j++)
        soma += alunos[idx].notas[j];
    return soma / N_NOTAS;
}

void situacao_aluno(Aluno alunos[], int idx) {
    float media = media_aluno(alunos, idx);
    printf("Media     : %.2f\n", media);
    if (alunos[idx].faltas > MAX_FALTAS)
        printf("Situacao  : REPROVADO por faltas\n");
    else if (media >= MEDIA_MINIMA)
        printf("Situacao  : APROVADO\n");
    else
        printf("Situacao  : REPROVADO por nota\n");
}

int main() {
    Aluno alunos[N];
    int i;

    for (i = 0; i < N; i++)
        ler_aluno(alunos, i);

    printf("\n========== BOLETIM ==========\n");
    for (i = 0; i < N; i++) {
        escrever_aluno(alunos, i);
        situacao_aluno(alunos, i);
    }

    return 0;
}
