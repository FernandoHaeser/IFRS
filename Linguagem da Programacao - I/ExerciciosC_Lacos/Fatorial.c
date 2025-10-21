#include <stdio.h>

int main() {
    int n, i = 1;
    long long fat = 1;

    printf("Digite um numero (0 a 12): ");
    scanf("%d", &n);

    if (n < 0 || n > 12) {
        printf("Valor invalido!\n");
        return 0;
    }

    while (i <= n) {
        fat *= i;
        i++;
    }

    printf("%d! = %lld\n", n, fat);
    return 0;
}
