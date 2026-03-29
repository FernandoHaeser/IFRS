/******************************************************************************

5 - O cardápio de uma lancheria é o seguinte:
Código do lanche | Especificação   | Preço unitário
100              | Cachorro quente | 5.00
101              | Bauru simples   | 6.00
102              | Bauru c/ovo     | 8.00
103              | Hamburger       | 5.00
104              | Cheeseburger    | 7.50
105              | Refrigerante    | 2.00

Escrever um programa que leia o código do item pedido, a quantidade e calcule o
valor a ser pago por aquele lanche.

Considere que a cada execução somente será calculado um item.

Ao final escreva um resumo do pedido:
Ex
" Pedido: 5 unidade(s) de Cachorro Quente"
"Total R$25,00"

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    int codigoLanche, quantLanche;
    float valorLanche, totalLanche;
    char lanche[50];

    //tabela da lancheria gerada pelo gpt, apenas para o programa ficar melhor visualmente.
    printf("==============================================\n");
    printf("%-15s | %-18s | %-10s\n", "Código", "Especificação", "Preço");
    printf("==============================================\n");

    printf("%-15d | %-18s | %-10.2f\n", 100, "Cachorro quente", 5.00);
    printf("%-15d | %-18s | %-10.2f\n", 101, "Bauru simples",   6.00);
    printf("%-15d | %-18s | %-10.2f\n", 102, "Bauru c/ovo",    8.00);
    printf("%-15d | %-18s | %-10.2f\n", 103, "Hamburger",      5.00);
    printf("%-15d | %-18s | %-10.2f\n", 104, "Cheeseburger",   7.50);
    printf("%-15d | %-18s | %-10.2f\n", 105, "Refrigerante",   2.00);

    printf("==============================================\n");
    
    printf("Informe o código do produto que deseja comprar: ");
    scanf("%d", &codigoLanche);
    
    if (codigoLanche < 100  || codigoLanche > 105) { //atribuicao de valores a todas opcoes.
        printf("Digite um numero valido por favor!");
        return 1;
    } else {
        switch (codigoLanche) {
            case 100:
                strcpy(lanche, "Cachorro quente");
                valorLanche = 5;
            case 101: 
                strcpy(lanche, "Bauru Simples");
                valorLanche = 6;
            case 102:
                strcpy(lanche, "Bauru c/ovo");
                valorLanche = 8;
            case 103: 
                strcpy(lanche, "Hamburguer");
                valorLanche = 5;
                break;
            case 104: 
                strcpy(lanche, "Cheeseburguer");
                valorLanche = 7.50;
                break;
            case 105:
                strcpy(lanche, "Refrigerante");
                valorLanche = 2;
                break;
        } 
        
        printf("\nVocê escolheu o lanche %s, e ele custa R$%.2f", lanche, valorLanche);
        printf("\nVocê deseja quantas quantidades desse produto? ");
        scanf("%d", &quantLanche);
        
        totalLanche = valorLanche * quantLanche; //calcula total do pedido
        
        printf("\nPedido: %d unidade(s) de %s \n", quantLanche, lanche);
        printf("Total: R$%.2f", totalLanche);
    } 
    return 0;
}
