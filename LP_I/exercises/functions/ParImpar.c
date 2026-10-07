#include <stdio.h>

int ehPar(int number) {
    return number % 2 == 0;  // retorna 1 se par, 0 se ímpar
}

int main() {
    int n;

    do {
        printf("Informe um numero (0 para sair): ");
        scanf("%d", &n);

        if (n != 0)  // só mostra se não for 0
            printf("%s!\n", ehPar(n) ? "Par" : "Impar");

    } while (n != 0);

    printf("Programa Finalizado\n");
    return 0;
}
