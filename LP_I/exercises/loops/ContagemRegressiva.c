#include <stdio.h>

int main() {
    int m;

    printf("Digite um valor positivo: ");
    scanf("%d", &m);

    if (m <= 0) {
        printf("Valor invalido!\n");
        return 0;
    }

    while (m >= 1) {
        printf("%d\n", m);
        m--;
    }

    printf("Lancamento!\n");
    return 0;
}
