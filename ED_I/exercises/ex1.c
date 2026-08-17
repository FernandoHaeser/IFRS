#include <stdio.h>

typedef struct {
    char nome[100];
    char tel_fixo[20];
    char celular[20];
    char endereco[200];
    char aniversario[20];
} Contato;

int main() {
    Contato agenda[3];
    int i, num;

    for (i = 0; i < 3; i++) {
        printf("\n--- Contato %d ---\n", i + 1);
        printf("Nome: ");
        scanf(" %[^\n]", agenda[i].nome);
        printf("Telefone fixo: ");
        scanf(" %[^\n]", agenda[i].tel_fixo);
        printf("Celular: ");
        scanf(" %[^\n]", agenda[i].celular);
        printf("Endereco: ");
        scanf(" %[^\n]", agenda[i].endereco);
        printf("Aniversario (DD/MM/AAAA): ");
        scanf(" %[^\n]", agenda[i].aniversario);
    }

    while (1) {
        printf("\nDigite o numero do contato que deseja ver (1-3): ");
        scanf("%d", &num);

        if (num < 1 || num > 3) {
            printf("Numero fora do intervalo. Encerrando.\n");
            break;
        }

        i = num - 1;
        printf("\n=== Contato %d ===\n", num);
        printf("Nome       : %s\n", agenda[i].nome);
        printf("Tel. fixo  : %s\n", agenda[i].tel_fixo);
        printf("Celular    : %s\n", agenda[i].celular);
        printf("Endereco   : %s\n", agenda[i].endereco);
        printf("Aniversario: %s\n", agenda[i].aniversario);
    }

    return 0;
}
