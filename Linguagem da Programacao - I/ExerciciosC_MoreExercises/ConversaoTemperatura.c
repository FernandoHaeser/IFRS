#include <stdio.h>

double c2f(double c) { return c * 9 / 5 + 32; }
double f2c(double f) { return (f - 32) * 5 / 9; }
double c2k(double c) { return c + 273.15; }

int main() {
    int op;
    double temp;

    do {
        printf("\n1 - Celsius -> Fahrenheit\n");
        printf("2 - Fahrenheit -> Celsius\n");
        printf("3 - Celsius -> Kelvin\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &op);

        if (op == 0) break;

        printf("Digite a temperatura: ");
        scanf("%lf", &temp);

        switch (op) {
            case 1: printf("Resultado: %.2f F\n", c2f(temp)); break;
            case 2: printf("Resultado: %.2f C\n", f2c(temp)); break;
            case 3: printf("Resultado: %.2f K\n", c2k(temp)); break;
            default: printf("Opcao invalida!\n");
        }
    } while (op != 0);

    return 0;
}
