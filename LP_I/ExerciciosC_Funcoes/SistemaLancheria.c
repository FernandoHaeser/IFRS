#include <stdio.h>

float valor_item(int codigo, int qtd) {
    float preco;
    switch (codigo) {
        case 100: preco = 11.00; break;
        case 101: preco = 13.00; break;
        case 102: preco = 15.00; break;
        case 103: preco = 11.00; break;
        case 104: preco = 13.00; break;
        case 105: preco = 3.00; break;
        default:
            printf("Codigo invalido!\n");
            return 0;
    }
    return preco * qtd;
}

int main() {
    char opcao;
    int codigo, qtd;
    float total_pedido = 0, total_dia = 0;

    do {
        printf("\nMENU:\nA - Novo pedido\nB - Incluir item\nC - Fechar pedido\nD - Total do dia\nE - Sair\n");
        printf("Opcao: ");
        scanf(" %c", &opcao);

        switch (opcao) {
            case 'A': case 'a':
                total_pedido = 0;
                printf("Novo pedido iniciado.\n");
                break;

            case 'B': case 'b':
                printf("Digite o codigo e a quantidade: ");
                scanf("%d %d", &codigo, &qtd);
                total_pedido += valor_item(codigo, qtd);
                break;

            case 'C': case 'c':
                printf("Total do pedido: R$ %.2f\n", total_pedido);
                total_dia += total_pedido;
                total_pedido = 0;
                break;

            case 'D': case 'd':
                printf("Total do dia: R$ %.2f\n", total_dia);
                break;

            case 'E': case 'e':
                printf("Encerrando sistema.\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }
    } while (opcao != 'E' && opcao != 'e');

    return 0;
}
