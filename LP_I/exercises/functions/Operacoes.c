#include <stdio.h>

float soma(float a, float b) { return a + b; }
float multiplica(float a, float b) { return a * b; }
float divide(float a, float b) {
    if (b == 0) {
        printf("Erro: divisao por zero!\n");
        return 0;
    }
    return a / b;
}
float subtrai(float a, float b) { return a - b; }

int main() {
    float x, y;
    char opcao;

    printf("Digite dois numeros: ");
    scanf("%f %f", &x, &y);

    printf("Escolha uma opcao:\n");
    printf("A - Somar\nB - Multiplicar\nC - Dividir\nD - Subtrair\n");
    printf("Opcao: ");
    scanf(" %c", &opcao);

    switch (opcao) {
        case 'A': case 'a': printf("Resultado = %.2f\n", soma(x, y)); break;
        case 'B': case 'b': printf("Resultado = %.2f\n", multiplica(x, y)); break;
        case 'C': case 'c': printf("Resultado = %.2f\n", divide(x, y)); break;
        case 'D': case 'd': printf("Resultado = %.2f\n", subtrai(x, y)); break;
        default: printf("Opcao invalida!\n");
    }

    return 0;
}
