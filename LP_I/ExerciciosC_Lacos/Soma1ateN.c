#include <stdio.h>

int main() {
    int N, i, soma = 0;

    printf("Digite um valor (>=1): ");
    scanf("%d", &N);

    if (N < 1) {
        printf("Valor invalido!\n");
        return 0;
    }

    for (i = 1; i <= N; i++) {
        soma += i;
    }

    printf("Soma de 1 ate %d = %d\n", N, soma);
    return 0;
}
