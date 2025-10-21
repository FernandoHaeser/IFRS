#include <stdio.h>

int main() {
    int opcao;
    float a, b;

    do {
        printf("\nMENU ARITMETICO\n");
        printf("1 - Soma\n");
        printf("2 - Subtracao\n");
        printf("3 - Multiplicacao\n");
        printf("4 - Divisao\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        if (opcao == 0) break;

        printf("Digite dois numeros: ");
        scanf("%f %f", &a, &b);

        switch (opcao) {
            case 1:
                printf("Resultado: %.2f\n", a + b);
                break;
            case 2:
                printf("Resultado: %.2f\n", a - b);
                break;
            case 3:
                printf("Resultado: %.2f\n", a * b);
                break;
            case 4:
                if (b == 0)
                    printf("Erro: divisao por zero!\n");
                else
                    printf("Resultado: %.2f\n", a / b);
                break;
            default:
                printf("Opcao invalida!\n");
        }

    } while (opcao != 0);

    printf("Programa encerrado.\n");
    return 0;
}
