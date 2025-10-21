#include <stdio.h>

float soma(float a, float b, float c) {
    return a + b + c;
}

float produto(float a, float b, float c) {
    return a * b * c;
}

int main() {
    float n1, n2, n3;

    printf("Digite tres numeros: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    printf("Soma = %.2f\n", soma(n1, n2, n3));
    printf("Produto = %.2f\n", produto(n1, n2, n3));

    return 0;
}
