#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));   // Inicialização do rand()

    int armazem[5][4];  // Matriz para os 4 armazéns e os 4 produtos (5x4)
    int somaArmazem[4] = {0};  // Soma de itens por armazém (linha)
    int somaProduto[4] = {0};  // Soma de itens por produto (coluna)
    int custo[4];  // Preço unitário dos produtos
    int maior_estoque_produto2 = -1, menor_estoque_produto4 = 101;  // Variáveis para o maior/menor estoque
    int armazem_maior_produto2 = -1, armazem_menor_produto4 = -1;  // Armazéns com maior/menor estoque

    // Preenchendo a matriz com os estoques aleatórios para os 4 armazéns e 4 produtos
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            armazem[i][j] = rand() % 100;  // Estoque entre 0 e 99
        }
    }

    // Preenchendo a última linha (índice 4) com o custo dos produtos
    for (int i = 0; i < 4; i++) {
        custo[i] = rand() % 50 + 1;  // Preço entre 1 e 50
    }

    // Exibindo a matriz de estoques e custos
    printf("Matriz de Estoques (4 armazéns, 4 produtos):\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", armazem[i][j]);
        }
        printf("\n");
    }

    printf("\nCustos dos Produtos: ");
    for (int i = 0; i < 4; i++) {
        printf("%d ", custo[i]);
    }
    printf("\n\n");

    // Calculando a quantidade de itens armazenados em cada armazém (soma das linhas)
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            somaArmazem[i] += armazem[i][j];
            somaProduto[j] += armazem[i][j];
        }
    }

    // Calculando o maior estoque do produto 2 (índice 1)
    for (int i = 0; i < 4; i++) {
        if (armazem[i][1] > maior_estoque_produto2) {
            maior_estoque_produto2 = armazem[i][1];
            armazem_maior_produto2 = i;
        }
    }

    // Calculando o menor estoque do produto 4 (índice 3)
    for (int i = 0; i < 4; i++) {
        if (armazem[i][3] < menor_estoque_produto4) {
            menor_estoque_produto4 = armazem[i][3];
            armazem_menor_produto4 = i;
        }
    }

    // Calculando o custo total de cada produto
    int custoTotalProduto[4] = {0};  // Custo total por produto
    for (int i = 0; i < 4; i++) {
        custoTotalProduto[i] = somaProduto[i] * custo[i];
    }

    // Calculando o custo total de cada armazém
    int custoTotalArmazem[4] = {0};  // Custo total por armazém
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            custoTotalArmazem[i] += armazem[i][j] * custo[j];
        }
    }

    // Imprimindo os resultados
    printf("\nQuantidade de itens armazenados em cada armazém:\n");
    for (int i = 0; i < 4; i++) {
        printf("Armazém %d: %d itens\n", i + 1, somaArmazem[i]);
    }

    printf("\nArmazém com maior estoque do produto 2 (índice 1): Armazém %d\n", armazem_maior_produto2 + 1);
    printf("Quantidade no produto 2: %d\n", maior_estoque_produto2);

    printf("\nArmazém com menor estoque do produto 4 (índice 3): Armazém %d\n", armazem_menor_produto4 + 1);
    printf("Quantidade no produto 4: %d\n", menor_estoque_produto4);

    printf("\nCusto total de cada produto:\n");
    for (int i = 0; i < 4; i++) {
        printf("Produto %d: %d\n", i + 1, custoTotalProduto[i]);
    }

    printf("\nCusto total de cada armazém:\n");
    for (int i = 0; i < 4; i++) {
        printf("Armazém %d: %d\n", i + 1, custoTotalArmazem[i]);
    }

    return 0;
}
