#include <stdio.h>

int main() {
    int n, i;

    printf("Digite um numero de 1 a 10: ");
    scanf("%d", &n);

    if (n < 1 || n > 10) {
        printf("Valor invalido!\n");
    } else {
        for (i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", n, i, n * i);
        }
    }

    return 0;
}
