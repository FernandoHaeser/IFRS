#include <stdio.h>

int ehPar(int n) {
    return n % 2 == 0;
}

int main() {
    int n, pares = 0, impares = 0;

    do {
        printf("Digite um numero (0 para sair): ");
        scanf("%d", &n);

        if (n != 0) {
            if (ehPar(n)) {
                printf("%d é par\n", n);
                pares++;
            } else {
                printf("%d é impar\n", n);
                impares++;
            }
        }
    } while (n != 0);

    printf("\nTotal pares: %d\nTotal impares: %d\n", pares, impares);
    return 0;
}
