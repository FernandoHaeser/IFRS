#include <stdio.h>

void percorrer_matriz(int matriz[4][4], int valor);
float media_coluna(int matriz[4][4], int j);
float media_matriz(int matriz[4][4]);
int soma_diviseis_por_tres(int matriz[4][4]);

int main() {

    int matriz[4][4];
    int valor = 4;

    // saida matriz
    percorrer_matriz(matriz, valor);

    printf("\n\nMedia de cada coluna:\n");
    printf("Coluna 1: %.2f\n", media_coluna(matriz, 0));
    printf("Coluna 2: %.2f\n", media_coluna(matriz, 1));
    printf("Coluna 3: %.2f\n", media_coluna(matriz, 2));
    printf("Coluna 4: %.2f\n\n", media_coluna(matriz, 3));

    // media da matriz toda
    printf("Media da Matriz: %.2f\n\n", media_matriz(matriz));

    // soma dos nuumeros divisiveis por 5
    printf("Media dos numeros divisiveis por cinco: %.2lf\n", soma_diviseis_por_tres(matriz));

    return 0;
}

// Preenche a matriz com múltiplos de 4
void percorrer_matriz(int matriz[4][4], int valor) {
    printf("\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            matriz[i][j] = valor;
            printf("%d\t", matriz[i][j]);
            valor += 4;
        }
        printf("\n");
    }
}

// Média de cada coluna
float media_coluna(int matriz[4][4], int j) {
    int soma = 0;

    for (int i = 0; i < 4; i++) {
        soma += matriz[i][j];
    }

    return soma / 4.0;
}

// Média da matriz toda
float media_matriz(int matriz[4][4]) {
    int soma = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            soma += matriz[i][j];
        }
    }

    return soma / 16.0;
}

// Soma dos números divisíveis por 5
int soma_diviseis_por_tres(int matriz[4][4]) {
    int soma = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matriz[i][j] % 5 == 0) {
                soma += matriz[i][j];
            }
        }
    }

    return soma;
}
