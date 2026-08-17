#include <stdio.h>

#define N 5

typedef struct {
    char nome[100];
    char tel_emergencia[20];
    int idade;
    char contato_emergencia[100];
} Aluno;

void ler_aluno(Aluno alunos[], int idx) {
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

void escrever_aluno(Aluno alunos[], int idx) {
    printf("\n=== Aluno %d ===\n", idx + 1);
    printf("Nome               : %s\n", alunos[idx].nome);
    printf("Idade              : %d anos\n", alunos[idx].idade);
    printf("Contato emergencia : %s\n", alunos[idx].contato_emergencia);
    printf("Tel. emergencia    : %s\n", alunos[idx].tel_emergencia);
}

int main() {
    Aluno alunos[N];
    int i;

    for (i = 0; i < N; i++)
        ler_aluno(alunos, i);

    printf("\n========== DADOS DOS ALUNOS ==========\n");
    for (i = 0; i < N; i++)
        escrever_aluno(alunos, i);

    return 0;
}
