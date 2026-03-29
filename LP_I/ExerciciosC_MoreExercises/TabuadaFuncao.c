#include <stdio.h>

void tabuada(int n) {
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}

int main() {
    int n;
    printf("Digite um numero (1 a 10): ");
    scanf("%d", &n);
    tabuada(n);
    return 0;
}
