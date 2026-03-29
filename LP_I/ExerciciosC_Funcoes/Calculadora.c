#include <stdio.h>

// Funções básicas
float soma(float a, float b) { return a + b; }
float subtrai(float a, float b) { return a - b; }
float multiplica(float a, float b) { return a * b; }
float divide(float a, float b) {
    if (b == 0) {
        printf("Erro: divisao por zero!\n");
        return 0;
    }
    return a / b;
}

// Fatorial
long long fatorial(int n) {
    if (n < 0) return 0;
    long long fat = 1;
    for (int i = 1; i <= n; i++) fat *= i;
    return fat;
}

// Potência
float potencia(float base, int exp) {
    float resultado = 1;
    for (int i = 0; i < exp; i++) resultado *= base;
    return resultado;
}

int main() {
    char opcao;
    float a, b;
    int n, e;

    do {
        printf("\n--- CALCULADORA 2 ---\n");
        printf("a - Soma\nb - Subtracao\nc - Divisao\nd - Multiplicacao\ne - Fatorial\nf - Potencia\ng - Sair\n");
        printf("Escolha: ");
        scanf(" %c", &opcao);

        switch (opcao) {
            case 'a':
                printf("Digite dois numeros: ");
                scanf("%f %f", &a, &b);
                printf("Resultado = %.2f\n", soma(a, b));
                break;

            case 'b':
                printf("Digite dois numeros: ");
                scanf("%f %f", &a, &b);
                printf("Resultado = %.2f\n", subtrai(a, b));
                break;

            case 'c':
                printf("Digite base e divisor: ");
                scanf("%f %f", &a, &b);
                printf("Resultado = %.2f\n", divide(a, b));
                break;

            case 'd':
                printf("Digite base e multiplicador: ");
                scanf("%f %f", &a, &b);
                printf("Resultado = %.2f\n", multiplica(a, b));
                break;

            case 'e':
                printf("Digite um numero inteiro: ");
                scanf("%d", &n);
                printf("%d! = %lld\n", n, fatorial(n));
                break;

            case 'f':
                printf("Digite base e expoente: ");
                scanf("%f %d", &a, &e);
                printf("Resultado = %.2f\n", potencia(a, e));
                break;

            case 'g':
                printf("Encerrando...\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }
    } while (opcao != 'g');

    return 0;
}
