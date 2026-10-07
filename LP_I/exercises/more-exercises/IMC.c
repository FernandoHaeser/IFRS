#include <stdio.h>

double imc(double peso, double altura) {
    return peso / (altura * altura);
}

int classeImc(double valor) {
    if (valor < 18.5) return 1;
    else if (valor < 25.0) return 2;
    else if (valor < 30.0) return 3;
    else return 4;
}

int main() {
    double peso, altura, valor;
    int classe;

    printf("Digite o peso (kg): ");
    scanf("%lf", &peso);
    printf("Digite a altura (m): ");
    scanf("%lf", &altura);

    valor = imc(peso, altura);
    classe = classeImc(valor);

    printf("IMC = %.2f -> ", valor);
    switch (classe) {
        case 1: printf("Abaixo do peso\n"); break;
        case 2: printf("Normal\n"); break;
        case 3: printf("Sobrepeso\n"); break;
        case 4: printf("Obesidade\n"); break;
    }

    return 0;
}
