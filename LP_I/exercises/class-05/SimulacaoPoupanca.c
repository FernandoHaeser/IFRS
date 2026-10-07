/*
Simulador de poupança
Um valor de R$100,00 é depositado todo mês em uma poupança que rende 0,5% ao mês.
Escreva um programa que calcule e mostre o valor acumulado mês a mês durante 24 meses (2 anos).
Use um laço de repetição. Não é necessário arredondar ou decompor o valor.
Saldo mes = Saldo Anterior + Deposito + (Saldo Anterior) * Juros/100
Ex:
MES 1: 100,00
MES 2: 200,50 (R$0,50 de juros + 100 de Deposito)
MES 3: 301,5025 (1,0025 de juros + 100 de Deposito)
***Não é necessário decompor o resultado.
MES 24: R$2543,20
*/

#include <stdio.h>

int main() {

    float deposito = 100.0;
    float rendimento = 0.5;
    float saldo = 0.0;

    for (int mes = 1; mes <= 24; mes++) {
        saldo = saldo + deposito + (saldo * rendimento / 100);
        printf("MES %d: R$%.2f\n", mes, saldo);
    }
    return 0;
}
