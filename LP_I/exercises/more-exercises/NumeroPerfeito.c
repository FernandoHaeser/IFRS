#include <stdio.h>

int somaDivisoresProprios(int n) {
    int soma = 0;
    for (int i = 1; i < n; i++)
        if (n % i == 0) soma += i;
    return soma;
}

int main() {
    int N;
    printf("Digite N (>=2): ");
    scanf("%d", &N);

    for (int i = 2; i <= N; i++) {
        int soma = somaDivisoresProprios(i);
        if (soma == i)
            printf("%d - perfeito\n", i);
        else
            printf("%d - nao perfeito\n", i);
    }

    return 0;
}
