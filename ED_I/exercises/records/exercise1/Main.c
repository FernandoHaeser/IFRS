/*
Exercício 1

Sua empresa o contratou para desenvolver uma agenda para uma pessoa solitária que tem apenas o telefone da mãe e um amigo.
Esta agenda deve ter capacidade para armazenar o nome, telefone fixo, celular,  endereço e aniversário.
A agenda deve ser capaz de inserir os dados de todos os contatos (máx 3: A mãe, o amigo e ele mesmo)
Após a inserção de todos os contatos deve perguntar ao usuário o número do contato que ele quer visualizar, caso o número esteja fora do intervalo (1 a 3), o programa termina, caso contrário o programa escreve na tela os dados e pergunta novamente.
Este programa nao precisa ter funções além da principal
*/

#include <stdio.h>
#include <stdbool.h>

typedef struct Contato
{
    char nome[50];
    char telefoneFixo[15];
    char celular[15];
    char endereco[50];
    char aniversario[12];
} Contato;

typedef struct Agenda
{
    struct Contato contatos[3];
} Agenda;

void showContact(struct Agenda agenda, int indice)
{
    printf(
        "Nome: %s\n"
        "Telefone Fixo: %s\n"
        "Celular: %s\n"
        "Endereco: %s\n"
        "Aniversario: %s\n",

        agenda.contatos[indice].nome,
        agenda.contatos[indice].telefoneFixo,
        agenda.contatos[indice].celular,
        agenda.contatos[indice].endereco,
        agenda.contatos[indice].aniversario);
}

int main()
{

    bool keep = true;
    int choice;

    // inicializei as variaveis diretamente pra facilitar testes.
    Contato Mae = {
        "Maria",
        "5133334444",
        "51999998888",
        "Rua das Flores, 100",
        "15/03/1970"};

    Contato Pai = {
        "Joao",
        "5133335555",
        "51988887777",
        "Rua das Flores, 100",
        "20/07/1968"};

    Contato Irmao = {
        "Carlos",
        "5144446666",
        "51977776666",
        "Av. Brasil, 250",
        "10/11/2002"};

    Agenda agenda = {
        Mae, Pai, Irmao};

    while (keep)
    {
        printf("\nQual número de contato deseja visualizar?\n1, 2 ou 3? ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            showContact(agenda, 0);
            break;

        case 2:
            showContact(agenda, 1);
            break;

        case 3:
            showContact(agenda, 2);
            break;

        default:
            keep = false;
            printf("\nEncerrando...");
            return 0;
        }
    }

    return 0;
}