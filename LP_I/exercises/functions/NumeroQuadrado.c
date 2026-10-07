#include <stdio.h>

float quadrado(float n) {
    return n * n;
}

int main() {
    float num;
    printf("Digite um numero: ");
    scanf("%f", &num);

    printf("O quadrado de %.2f = %.2f\n", num, quadrado(num));
    return 0;
}
