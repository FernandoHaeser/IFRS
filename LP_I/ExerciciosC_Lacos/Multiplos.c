#include <stdio.h>

int main() {
    int A, B, K, i, inicio, fim;

    printf("Digite A, B e K: ");
    scanf("%d %d %d", &A, &B, &K);

    if (K <= 0) {
        printf("K deve ser > 0\n");
        return 0;
    }

    inicio = (A < B) ? A : B;
    fim = (A > B) ? A : B;

    for (i = inicio; i <= fim; i++) {
        if (i % K == 0)
            printf("%d ", i);
    }

    printf("\n");
    return 0;
}
