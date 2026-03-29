/*
Menor e maior entre três (IF/ELSE + funções)
Leia três números e exiba o menor e o maior, calculados por funções separadas.
Sugestões: int menor3(int a,int b,int c); e int maior3(int a,int b,int c);
*/


#include <stdio.h>


int maiorNumero(int a, int b, int c) {
    if (a > b && a > c)
        return a;
    else if (b > a && b > c)
        return b;
    else
        return c;
}

int menorNumero(int a, int b, int c) {
    if (a < b && a < c)
        return a;
    else if (b < a && b < c)
        return b;
    else
        return c;
}



int main(){

    int valores[3];

    for(int i = 0; i < 3; i++) {
        printf("Informe o %d valor: ", (i+1));
        scanf("%d", &valores[i]);
    }

    printf("\n\nMaior numero e o %d\n", maiorNumero(valores[0], valores[1], valores[2]));
    printf("Menor numero e o %d", menorNumero(valores[0], valores[1], valores[2]));

    return 0;

}