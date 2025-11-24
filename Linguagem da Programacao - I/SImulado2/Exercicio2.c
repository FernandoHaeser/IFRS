#include <stdio.h>

int maior_valor_impar(int v[]) {
    int maior = -999999;

    for (int i = 0; i < 7; i++) {
        if (v[i] % 2 != 0 && v[i] > maior) {
            maior = v[i];
        }
    }

    return maior;
}

int menor_valor_par(int v[]) {
    int menor = 999999;

    for (int i = 0; i < 7; i++) {
        if (v[i] % 2 == 0 && v[i] < menor) {
            menor = v[i];
        }
    }

    return menor;
}

int media_inteira(int v[]) {
    int soma = 0;

    for (int i = 0; i < 7; i++) {
        soma += v[i];
    }

    return soma / 7;  // média inteira
}

int main () {

    int v[7];

    for (int i = 0; i < 7; i++) {
        printf("Informe o valor %d: ", i+1);
        scanf("%d", &v[i]);
    }

    printf("\nMaior valor ímpar: %d", maior_valor_impar(v));
    printf("\nMenor valor par: %d", menor_valor_par(v));
    printf("\nMédia inteira: %d\n", media_inteira(v));

    return 0;
}
