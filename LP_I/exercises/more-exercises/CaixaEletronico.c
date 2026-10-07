#include <stdio.h>

void imprimeNotas(int valor) {
    int notas[] = {100, 50, 20, 10, 5, 2, 1};
    int qtd;

    for (int i = 0; i < 7; i++) {
        qtd = valor / notas[i];
        if (qtd > 0)
            printf("%d nota(s) de %d\n", qtd, notas[i]);
        valor %= notas[i];
    }
}

int main() {
    int valor;
    printf("Digite o valor em reais: ");
    scanf("%d", &valor);
    imprimeNotas(valor);
    return 0;
}
