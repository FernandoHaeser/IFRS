#include <stdio.h>

int ehPrimo(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return 0;
    return 1;
}

int main() {
    int N;
    printf("Digite N (>=2): ");
    scanf("%d", &N);

    for (int i = 2; i <= N; i++) {
        if (ehPrimo(i))
            printf("%d - primo\n", i);
        else
            printf("%d - nao primo\n", i);
    }
    return 0;
}
