// Reescreva o exercício 3 sem usar variáveis globais.
// Você vai precisar passar o vetor como parâmetro, nos códigos que usam função;

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

// se 1 usa um vetor ja preenchido com as infos, se 0 permite o user adicionar as infos que deseja.
#define TEST_MODE 1

typedef struct
{
    char nome[50];
    long numeroMatricula;
    float notas[4];
    int faltas;
} Aluno;

void showMenu()
{
    printf("\n=== MENU ===\n"
           "\n[1] Listar Alunos"
           "\n[2] Editar Alunos"
           "\n[3] Sair\n\n");
}

float mediaAluno(int index, Aluno listaAlunos[])
{
    float somaNotas = 0;

    for (int i = 0; i < 4; i++)
    {
        somaNotas += listaAlunos[index].notas[i];
    }

    return somaNotas / 4;
}

bool situacaoAluno(int index, Aluno listaAlunos[])
{
    float media = mediaAluno(index, listaAlunos);
    int faltas = listaAlunos[index].faltas;
    bool aprovado = (media >= 7 && faltas < 10) ? true : false;
    return aprovado;
}

void lerInfosAluno(int index, Aluno listaAlunos[])
{

    char aprovado[10] = "Aprovado";
    char reprovado[10] = "Reprovado";

    printf("\n=============================\n");
    printf("Dados do Aluno na posicao %d:\n", index + 1);
    printf("Nome: %s\n", listaAlunos[index].nome);

    for (int i = 0; i < 4; i++)
    {
        printf("Nota %d: %.2f\n", (i + 1), listaAlunos[index].notas[i]);
    }

    printf("Matrícula: %ld\n", listaAlunos[index].numeroMatricula);
    printf("Quantidade de faltas: %d\n", listaAlunos[index].faltas);
    printf("Situação Aluno: %s\n", (situacaoAluno(index, listaAlunos)) ? aprovado : reprovado);

    printf("=============================\n");

    printf("\n\nAperte ENTER para voltar...");
    getchar();
    getchar();
}

void criarEstudante(int index, Aluno listaAlunos[])
{

    system("clear || cls");

    printf("\n--- Cadastrando Aluno %d ---\n", index + 1);

    printf("Nome: ");
    scanf(" %[^\n]", listaAlunos[index].nome);

    for (int i = 0; i < 4; i++)
    {
        do
        {
            printf("Nota %d: ", (i + 1));
            scanf("%f", &listaAlunos[index].notas[i]);

            if (listaAlunos[index].notas[i] > 10 || listaAlunos[index].notas[i] < 0)
                printf("\nNota inválida!\n\n");

        } while (listaAlunos[index].notas[i] > 10 || listaAlunos[index].notas[i] < 0);
    }

    do
    {
        printf("Faltas do Estudante: ");
        scanf(" %d", &listaAlunos[index].faltas);

        if (listaAlunos[index].faltas < 0)
            printf("\nNúmero inválido de faltas!\n\n");

    } while (listaAlunos[index].faltas < 0);

    // define numero random pra matricula
    listaAlunos[index].numeroMatricula = rand();
}

void editarNota(int index, Aluno listaAlunos[])
{
    int answer;
    char defaultMessage[20] = "\n\nInforme a nota: ";

    printf("\nQual nota deseja alterar? ");
    for (int i = 0; i < 4; i++)
    {
        printf("\n[%d] Nota %d (%.2f)", (i + 1), (i + 1), listaAlunos[index].notas[i]);
    }

    printf("\nR: ");
    scanf(" %d", &answer);

    switch (answer)
    {
    case 1:
        printf("%s", defaultMessage);
        scanf(" %f", &listaAlunos[index].notas[answer - 1]);
        break;
    case 2:
        printf("%s", defaultMessage);
        scanf(" %f", &listaAlunos[index].notas[answer - 1]);
        break;
    case 3:
        printf("%s", defaultMessage);
        scanf(" %f", &listaAlunos[index].notas[answer - 1]);
        break;
    case 4:
        printf("%s", defaultMessage);
        scanf(" %f", &listaAlunos[index].notas[answer - 1]);
        break;
    default:
        printf("\n\nOpcao invalida!\n\n");
    }
    printf("\n\nAperte ENTER para voltar...");
    getchar();
    getchar();
}

void editarEstudante(int index, Aluno listaAlunos[])
{

    system("clear || cls");

    int answer;

    printf("\n=== Informação que deseja editar ===\n"
           "\n[1] Nome"
           "\n[2] Notas"
           "\n[3] Voltar");
    printf("\n\nR: ");
    scanf(" %d", &answer);

    switch (answer)
    {
    case 1:
        printf("\n\nInforme o nome que deseja colocar novo: ");
        scanf(" %s", listaAlunos[index].nome);
        printf("\n\nNome editado!\n");
        printf("\n\nAperte ENTER para voltar...");
        getchar();
        getchar();
        break;
    case 2:
        editarNota(index, listaAlunos);
        break;
    case 3:
        printf("\n\nVoltando...\n\n");
        break;
    default:
        printf("\n\nOpcao invalida!\n\n");
    }
}

void carregarDadosTeste(Aluno listaAlunos[])
{
    listaAlunos[0] = (Aluno){
        "Joao Silva",
        10001,
        {8.0, 7.5, 9.0, 8.5},
        3};

    listaAlunos[1] = (Aluno){
        "Maria Santos",
        10002,
        {5.0, 6.0, 4.5, 5.5},
        2};

    listaAlunos[2] = (Aluno){
        "Pedro Oliveira",
        10003,
        {9.0, 8.5, 9.5, 10.0},
        12};

    listaAlunos[3] = (Aluno){
        "Ana Costa",
        10004,
        {7.0, 7.0, 7.5, 8.0},
        5};

    listaAlunos[4] = (Aluno){
        "Carlos Souza",
        10005,
        {6.0, 5.5, 6.0, 6.5},
        7};
}

int main()
{
    Aluno listaAlunos[5];
    int answer;
    bool keep = true;
    int choice;

#if TEST_MODE

    carregarDadosTeste(listaAlunos);

#else

    for (int i = 0; i < 5; i++)
    {
        criarEstudante(i, listaAlunos);
    }

#endif

    while (keep)
    {
        system("clear || cls");
        showMenu();
        printf("R: ");
        scanf(" %d", &answer);

        printf("=========");

        switch (answer)
        {
        case 1:
            printf("\n\nQual estudante deseja listar (1,2,3...)? ");
            scanf(" %d", &choice);
            lerInfosAluno(choice - 1, listaAlunos);
            break;
        case 2:
            printf("\n\nQual estudante deseja editar (1,2,3...)? ");
            scanf(" %d", &choice);
            editarEstudante(choice - 1, listaAlunos);
            break;
        case 3:
            printf("\n\nAdiossss...");
            return 0;
        default:
            printf("\n\nOpção inválida!\n");
        }
    }
    return 0;
}