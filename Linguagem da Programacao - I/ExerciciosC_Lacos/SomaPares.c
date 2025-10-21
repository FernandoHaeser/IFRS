#include <stdio.h>

int main() {
    int N, i, soma = 0;

    printf("Digite um valor (>=1): ");
    scanf("%d", &N);

    if (N < 1) {
        printf("Valor invalido!\n");
        return 0;
    }

    for (i = 2; i <= N; i += 2) {
        soma += i;
    }

    printf("Soma dos pares ate %d = %d\n", N, soma);
    return 0;
}
