#include <stdio.h>

int mdc(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int mmc(int a, int b) {
    return (a * b) / mdc(a, b);
}

int main() {
    int a, b;
    do {
        printf("Digite dois numeros (>0): ");
        scanf("%d %d", &a, &b);
        if (a > 0 && b > 0)
            printf("MDC = %d, MMC = %d\n", mdc(a, b), mmc(a, b));
    } while (a > 0 && b > 0);

    printf("Encerrado.\n");
    return 0;
}
