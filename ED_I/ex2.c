#include <stdio.h>

#define N 5

typedef struct {
    char nome[100];
    char tel_emergencia[20];
    int idade;
    char contato_emergencia[100];
} Aluno;

Aluno alunos[N];

void ler_aluno(int idx) {
    printf("\n--- Aluno %d ---\n", idx + 1);
    printf("Nome: ");
    scanf(" %[^\n]", alunos[idx].nome);
    printf("Idade: ");
    scanf("%d", &alunos[idx].idade);
    printf("Contato de emergencia: ");
    scanf(" %[^\n]", alunos[idx].contato_emergencia);
    printf("Telefone de emergencia: ");
    scanf(" %[^\n]", alunos[idx].tel_emergencia);
}

void escrever_aluno(int idx) {
    printf("\n=== Aluno %d ===\n", idx + 1);
    printf("Nome               : %s\n", alunos[idx].nome);
    printf("Idade              : %d anos\n", alunos[idx].idade);
    printf("Contato emergencia : %s\n", alunos[idx].contato_emergencia);
    printf("Tel. emergencia    : %s\n", alunos[idx].tel_emergencia);
}

int main() {
    int i;

    for (i = 0; i < N; i++)
        ler_aluno(i);

    printf("\n========== DADOS DOS ALUNOS ==========\n");
    for (i = 0; i < N; i++)
        escrever_aluno(i);

    return 0;
}
