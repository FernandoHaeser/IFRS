#include <stdio.h>

int menor3(int a, int b, int c) {
    int menor = a;
    if (b < menor) menor = b;
    if (c < menor) menor = c;
    return menor;
}

int maior3(int a, int b, int c) {
    int maior = a;
    if (b > maior) maior = b;
    if (c > maior) maior = c;
    return maior;
}

int main() {
    int a, b, c;
    printf("Digite tres numeros: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("Menor = %d\n", menor3(a, b, c));
    printf("Maior = %d\n", maior3(a, b, c));
    return 0;
}
