#include <stdio.h>

int notaValida(double n) {
    return n >= 0 && n <= 10;
}

double atualizaMedia(double soma, int qtd) {
    return qtd == 0 ? 0 : soma / qtd;
}

int main() {
    double nota, soma = 0;
    int qtd = 0;

    do {
        printf("Digite uma nota (0-10) ou -1 para sair: ");
        scanf("%lf", &nota);

        if (nota == -1) break;

        if (notaValida(nota)) {
            soma += nota;
            qtd++;
        } else {
            printf("Nota invalida!\n");
        }
    } while (1);

    if (qtd == 0)
        printf("Nenhuma nota valida.\n");
    else
        printf("Media = %.2f\n", atualizaMedia(soma, qtd));

    return 0;
}
