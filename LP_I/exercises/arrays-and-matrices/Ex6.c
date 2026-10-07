/*

6- CAIXA ELETRÔNICO. Escrever um programa que lê um valor inteiro em reais e calcula qual o menor número possível de notas
de 100, 50, 20, 10, 5, 2 e 1 em que o valor lido pode ser entregue ao cliente. Escrever a relação de notas necessárias.
Utilize um vetor para armazenar o valor de cada tipo de nota. Notas = {100, 50, 20, 10, 5, 2, 1}

*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {

    const int notas[7] = {100, 50, 20, 10, 5, 2, 1};
    int valor_reais;
    _Bool Continuar = 0;

    printf("Qual valor voce deseja sacar? ");
    scanf("%d", &valor_reais);

    for (int i = 0; i < 7; i++) {
        int qntd = valor_reais / notas[i];
        if (qntd > 0)
            printf("\nNotas de %d: %d\n", notas[i], qntd);
        valor_reais %= notas[i];
    }
}
