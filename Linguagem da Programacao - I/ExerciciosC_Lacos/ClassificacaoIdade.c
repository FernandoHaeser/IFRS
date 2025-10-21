#include <stdio.h>

int main() {
    int N, i, idade;
    int crianca = 0, adolescente = 0, adulto = 0, idoso = 0;

    printf("Quantas idades deseja informar? ");
    scanf("%d", &N);

    if (N < 1) {
        printf("Valor invalido!\n");
        return 0;
    }

    for (i = 1; i <= N; i++) {
        printf("Digite a idade %d: ", i);
        scanf("%d", &idade);

        if (idade < 12) crianca++;
        else if (idade < 18) adolescente++;
        else if (idade < 60) adulto++;
        else idoso++;
    }

    printf("Criancas: %d\nAdolescentes: %d\nAdultos: %d\nIdosos: %d\n",
           crianca, adolescente, adulto, idoso);
    return 0;
}
