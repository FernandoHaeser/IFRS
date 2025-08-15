#include <stdio.h>
#include <stdlib.h>

int decim(int n) {
    int i = 1,a; //i inicializado a 1
    int octal = 0; //octal inicializado a 0

    if(n<=7) {
        octal=n;
    }
    else {
        while(n>=8) {
            a=n%8;
            n=n/8;
            octal = octal + a * i; //calculo do octal
            i *= 10; //aumento do fator de base 10
        }
        n=n%8;
        octal = octal + n * i; //mesmo calculo aqui
    }

    return octal;
}


int main() {

    int n, octal;
    
    printf("Digite o numero para converter em octal");
    scanf("%d", &n);
    
    octal = decim(n);
    
    printf("%d",octal);
    
    //Conversor Binario
    /*
    int num;
    int bin[8];
    int aux;

    printf("Digite o número (base decimal) para ser convertido: ");
    scanf("%d", &num);

    for (aux = 7; aux >= 0; aux--) {
        if (num % 2 == 0) {
            bin[aux] = 0;
            num = num / 2;
        }
        else {
            bin[aux] = 1;
            num = num / 2;
        }
    }

    for (aux = 0; aux <= 7; aux++) {
        printf("%d", bin[aux]);
    }

    return 0;
    */
}
