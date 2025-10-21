#include <stdio.h>

int main() {
    int i, num, positivos = 0, negativos = 0, zeros = 0;

    for (i = 1; i <= 10; i++) {
        printf("Digite o %dº numero: ", i);
        scanf("%d", &num);

        if (num > 0) positivos++;
        else if (num < 0) negativos++;
        else zeros++;
    }

    printf("Positivos: %d\nNegativos: %d\nZeros: %d\n", positivos, negativos, zeros);
    return 0;
}
