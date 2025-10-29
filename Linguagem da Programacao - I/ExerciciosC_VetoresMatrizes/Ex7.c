/*
 7 - Faça um programa que carregue uma matriz 3x3 de números inteiros. Calcule:

 a - o maior número
 b - o menor número
 c - a média dos números
 d - a soma da primeira linha
 e - o produto (multiplicação) da diagonal principal
*/

#include <stdio.h>
#include <stdlib.h> // para uso do srand
#include <time.h> // para uso do time(NULL)

int main() {

    srand(time(NULL));   // Inicializacao do rand()
    int matriz[3][3];
    int maior_valor, menor_valor, soma_numeros = 0, produto_diagonal = 1, soma_linha1 = 0;
    float media_numeros;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matriz[i][j] = rand() % 100; // Define numeros aleatorios para a matriz de 0 a 99
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == 0 && j == 0) { // Inicializa variavies com valor atual
                maior_valor = matriz[i][j];
                menor_valor = matriz[i][j];
            }

            if (matriz[i][j] > maior_valor)
                maior_valor = matriz[i][j];

            if (matriz[i][j] < menor_valor)
                menor_valor = matriz[i][j];

            soma_numeros += matriz[i][j];

            if (i == 0) { //Primeira linha inteira possui i = 0
                soma_linha1 += matriz[i][j];
            }

            if (i == j) // Na diagonal, os indices i e j tem o mesmo valor
                produto_diagonal *= matriz[i][j];
        }
    }

    media_numeros = soma_numeros / 9.0; // 9.0 para evitar truncamento

    // Saida gerada pelo GPT
    printf("\nMatriz gerada:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nMaior valor: %d", maior_valor);
    printf("\nMenor valor: %d", menor_valor);
    printf("\nSoma de todos os números: %d", soma_numeros);
    printf("\nMédia dos números: %.2f", media_numeros);
    printf("\nProduto da diagonal principal: %d", produto_diagonal);
    printf("\nSoma da primeira linha: %d\n", soma_linha1);

}

// Fernando Augusto Haeser - Oct, 29 / 2025 | 09h17m
