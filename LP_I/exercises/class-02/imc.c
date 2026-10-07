/*
* Calcule o IMC. 
* De acordo com (b), o IMC=peso em kilos dividido pela altura (em metros) ao quadrado.
* (a)aude.com/obesidade/calcule-o-seu-peso-ideal-e-imc/
* (b)https://www.programasaudefacil.com.br/calculadora-de-imc
* Leia a altura (em metros) e o peso em kilos de uma pessoa, calcule o IMC e 
* indique a situação de acordo com a tabela em (a). 
*
* (Abaixo do peso, peso ideal, sobrepeso, obesidade I, II, III)
*
*/

#include <stdio.h>

int main()
{
    
    float peso, altura, imc;
    
    printf("Informe sua altura (em metros): ");
    scanf("%f", &altura);
    printf("Informe seu peso (em Kg): ");
    scanf("%f", &peso);
    
        if (peso <= 0 || altura <= 0) {
        printf("Valores inválidos. Peso e altura devem ser maiores que zero.\n");
        return 1;
    }

    imc = peso / (altura * altura);

    printf("\nSeu IMC é: %.2f\n", imc);

    if (imc < 16)
        printf("Classificação: Baixo peso muito grave\n");
    else if (imc >= 16 && imc <= 16.99)
        printf("Classificação: Baixo peso grave\n");
    else if (imc >= 17 && imc <= 18.49)
        printf("Classificação: Baixo peso\n");
    else if (imc >= 18.50 && imc <= 24.99)
        printf("Classificação: Peso normal\n");
    else if (imc >= 25 && imc <= 29.99)
        printf("Classificação: Sobrepeso\n");
    else if (imc >= 30 && imc <= 34.99)
        printf("Classificação: Obesidade grau I\n");
    else if (imc >= 35 && imc <= 39.99)
        printf("Classificação: Obesidade grau II\n");
    else
        printf("Classificação: Obesidade grau III (obesidade mórbida)\n");

    return 0;
}
