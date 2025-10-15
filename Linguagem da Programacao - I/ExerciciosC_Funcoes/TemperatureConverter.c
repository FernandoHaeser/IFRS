/******************************************************************************

Menu de conversões de temperatura (laço + condicional+ funções)
Exiba o menu:
1 - Celsius para Fahrenheit
2 - Fahrenheit para Celsius
3 - Celsius para Kelvin
0 - Sair
Enquanto a opção for diferente de 0, leia o valor da temperatura, chame a função
adequada e imprima o resultado. Trate opções inválidas.

Sugestões: double c2f(double c);, double f2c(double f);, double c2k(double c);
Pesquise as fórmulas de conversã

*******************************************************************************/

#include <stdio.h>
#include <math.h>

float celsiusToFahrenheit(float celsius) {
    return (celsius*1.8) + 32;
}

float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) / 1.8;
}

float celsiusToKelvin(float celsius) {
    return celsius + 273.15;
}



int main() {
    
    int choice;
    
    printf("Escolha uma opção\n");
    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Fahrenheit para Celsius\n");
    printf("3 - Celsius para Kelvin\n");
    printf("0 - Sair\n\n");
    printf("R: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: 
            float celsius;
            printf("\n\nInforme a temperatura em Celcius: ");
            scanf("%f", &celsius);
            printf("\nSua temperatura em Fahrenheit é de: %.2f", celsiusToFahrenheit(celsius));
            break;
        case 2:
            float fahrenheit;
            printf("\n\nInforme a temperatura em Fahrenheit: ");
            scanf("%f", &celsius);
            printf("\nSua temperatura em Fahrenheit é de: %.2f", fahrenheitToCelsius(fahrenheit));
            break;
        case 3:
            printf("\n\nInforme a temperatura em Celcius: ");
            scanf("%f", &celsius);
            printf("\nSua temperatura em Kelvin é de: %.2f", celsiusToKelvin(celsius));
            break;
        case 0:
            printf("\n\nSaindo...........");
            return 0;
        default:
            printf("\n\nOpção inválida! Rode novamente o algoritmo!");
    }
    return 0;
}
