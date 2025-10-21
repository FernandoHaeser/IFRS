#include <stdio.h>

int main() {
    int N, i;
    float nota, soma = 0, media;

    printf("Quantas notas? ");
    scanf("%d", &N);

    if (N < 1) {
        printf("Valor invalido!\n");
        return 0;
    }

    for (i = 1; i <= N; i++) {
        printf("Digite a nota %d (0 a 10): ", i);
        scanf("%f", &nota);
        soma += nota;
    }

    media = soma / N;

    printf("Media = %.2f\n", media);

    if (media >= 9) printf("Conceito: A\n");
    else if (media >= 7) printf("Conceito: B\n");
    else if (media >= 5) printf("Conceito: C\n");
    else printf("Conceito: D\n");

    return 0;
}
