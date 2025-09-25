/*
Questão 2: Cálculo de Investimento: 
O usuário deve informar:
i) o percentual de rendimento mensal de uma aplicação;
ii) o valor mensal de depósito;
iii) Meta a ser atingida (Valor objetivo).
Calcular em quantos meses a meta será atingida
*/

#include <stdio.h>

int main() {

    int meses = 0;
    float rendimento_mensal, deposito_mensal, valor_meta, rendimento = 0;

    printf("Informe o valor em percentual do rendimento da aplicacao(%%): ");
    scanf("%f", &rendimento_mensal);

    printf("Informe o valor do deposito mensal: R$");
    scanf("%f", &deposito_mensal);

    printf("Informe o valor da meta que deseja alcancar: R$");
    scanf("%f", &valor_meta);

    rendimento_mensal /= 100; // transforma em decimal

    while (rendimento < valor_meta) {
        rendimento = rendimento * (1 + rendimento_mensal) + deposito_mensal;
        meses++;
    }

    printf("\nA quantidade de meses que voce vai alcancar sua meta e de: %d meses", meses);
    printf("\n\n\nDesenvolvedor: Fernando A. Haeser - WoW");
    return 0;
    
}