/*
Sistema de lancheria
Uma lancheria possui o seguinte cardápio:

Código   Produto             Preço
100      Cachorro Quente     11,00
101      Bauru Simples       13,00
102      Bauru com Ovo       15,00
103      Hamburger           11,00
104      Cheeseburger        13,00
105      Refrigerante         3,00
    

Escreva um programa que:

    Leia repetidamente o código do item e a quantidade desejada;
    Calcule o valor parcial do item e acumule o total a pagar;
    Encerre a leitura quando for digitado um código fora do intervalo entre 100 e 105;
    Ao final, mostre o valor total do pedido.
*/

#include <stdio.h>

int main () {

    int codigoLanche, quantLanche;
    float valorLanche, totalLanche = 0.0;
    
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

    do {
        printf("Informe o código do lanche: ");
        scanf("%d", &codigoLanche);
        
        if (codigoLanche >= 100 && codigoLanche <= 105) {
            printf("Informe a quantidade: ");
            scanf("%d", &quantLanche);

            switch (codigoLanche) {
                case 100:
                    valorLanche = 5.00 * quantLanche;
                    break;
                case 101:
                    valorLanche = 6.00 * quantLanche;
                    break;
                case 102:
                    valorLanche = 8.00 * quantLanche;
                    break;
                case 103:
                    valorLanche = 5.00 * quantLanche;
                    break;
                case 104:
                    valorLanche = 7.50 * quantLanche;
                    break;
                case 105:
                    valorLanche = 2.00 * quantLanche;
                    break;
            }
            
            totalLanche += valorLanche;
            
        } else {
            printf("Código inválido! Encerrando o pedido.\n");
        }

    } while (codigoLanche >= 100 && codigoLanche <= 105);

    printf("Total a pagar: R$ %.2f\n", totalLanche);

}