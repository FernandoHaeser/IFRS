/*
Exercício 2. Uma pré escola tem 5 alunos, crie uma estrutura que armazena nome, telefone de emergencia, idade, contato de emergência;
Crie um vetor com 5 dessas estruturas
Crie uma função para ler as informações de UM aluno; chame a função 5 vezes.
Crie uma função que recebe como parâmetro o índice do aluno e escreva todos os dados na tela de maneira organizada.
As funções acima recebem o índice do aluno como parâmetro e alteram o array global que contém os alunos.
*/

#include <stdio.h>

typedef struct
{
    char name[50];
    char emergencyPhone[15];
    int idade;
    char emergencyContact[50];
} Aluno;

Aluno listaAlunos[5];

void readStudentInfos(int index)
{
    printf("\n=============================\n");
    printf("Dados do Aluno na posicao %d:\n", index + 1);
    printf("Nome: %s\n", listaAlunos[index].name);
    printf("Idade: %d\n", listaAlunos[index].idade);
    printf("Contato de Emergencia: %s\n", listaAlunos[index].emergencyContact);
    printf("Telefone de Emergencia: %s\n", listaAlunos[index].emergencyPhone);
    printf("=============================\n");
}

void createStudent(int index)
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

    for (int i = 0; i < 5; i++)
    {
        createStudent(i);
    }

    printf("\n\n--- IMPRIMINDO DADOS DOS ALUNOS ---\n");
    for (int i = 0; i < 5; i++)
    {
        readStudentInfos(i);
    }

    return 0;
}