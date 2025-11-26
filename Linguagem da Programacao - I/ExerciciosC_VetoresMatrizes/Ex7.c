/*
 7 - Faça um programa que carregue uma matriz 3x3 de números inteiros. Calcule:

 a - o maior número
 b - o menor número
 c - a média dos números
 d - a soma da primeira linha
 e - o produto (multiplicação) da diagonal principal
 f - a soma e o produto da diagonal secundária
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(NULL));
    int matriz[3][3];
    int maior_valor, menor_valor;
    int soma_numeros = 0, soma_linha1 = 0;
    int produto_diagonal = 1;
    int soma_diag_sec = 0, produto_diag_sec = 1;
    float media_numeros;

    // Preenche a matriz com números aleatórios
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matriz[i][j] = rand() % 100;
        }
    }

    // Processamento
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {

            if (i == 0 && j == 0) {
                maior_valor = matriz[i][j];
                menor_valor = matriz[i][j];
            }

            if (matriz[i][j] > maior_valor)
                maior_valor = matriz[i][j];

            if (matriz[i][j] < menor_valor)
                menor_valor = matriz[i][j];

            soma_numeros += matriz[i][j];

            if (i == 0)
                soma_linha1 += matriz[i][j];

            if (i == j)
                produto_diagonal *= matriz[i][j];

            if (i + j == 2) { // diagonal secundaria
                soma_diag_sec += matriz[i][j];
                produto_diag_sec *= matriz[i][j];
            }
        }
    }

    media_numeros = soma_numeros / 9.0;

    // Impressão da matriz
    printf("\nMatriz gerada:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Resultados
    printf("\nMaior valor: %d", maior_valor);
    printf("\nMenor valor: %d", menor_valor);
    printf("\nSoma de todos os números: %d", soma_numeros);
    printf("\nMédia dos números: %.2f", media_numeros);
    printf("\nProduto da diagonal principal: %d", produto_diagonal);
    printf("\nSoma da diagonal secundária: %d", soma_diag_sec);
    printf("\nProduto da diagonal secundária: %d", produto_diag_sec);
    printf("\nSoma da primeira linha: %d\n", soma_linha1);

    return 0;
}
