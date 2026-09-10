// Reescreva o exercício 2 sem usar variáveis globais.
// Você vai precisar passar o vetor como parâmetro, nos códigos que usam função;

#include <stdio.h>

typedef struct
{
    char name[50];
    char emergencyPhone[15];
    int idade;
    char emergencyContact[50];
} Aluno;

void readStudentInfos(int index, Aluno listaAlunos[])
{
    printf("\n=============================\n");
    printf("Dados do Aluno na posicao %d:\n", index + 1);
    printf("Nome: %s\n", listaAlunos[index].name);
    printf("Idade: %d\n", listaAlunos[index].idade);
    printf("Contato de Emergencia: %s\n", listaAlunos[index].emergencyContact);
    printf("Telefone de Emergencia: %s\n", listaAlunos[index].emergencyPhone);
    printf("=============================\n");
}

void createStudent(int index, Aluno listaAlunos[])
{
    printf("\n--- Cadastrando o Aluno %d ---\n", index + 1);

    printf("Digite o nome do aluno: ");
    scanf(" %[^\n]", listaAlunos[index].name);

    printf("Digite a idade do aluno: ");
    scanf("%d", &listaAlunos[index].idade);

    printf("Digite o nome do contato de emergencia: ");
    scanf(" %[^\n]", listaAlunos[index].emergencyContact);

    printf("Digite o telefone de emergencia: ");
    scanf(" %[^\n]", listaAlunos[index].emergencyPhone);
}

int main()
{
    Aluno aluno;
    Aluno listaAlunos[5];

    for (int i = 0; i < 5; i++)
    {
        createStudent(i, listaAlunos);
    }

    printf("\n\n--- IMPRIMINDO DADOS DOS ALUNOS ---\n");
    for (int i = 0; i < 5; i++)
    {
        readStudentInfos(i, listaAlunos);
    }

    return 0;
}