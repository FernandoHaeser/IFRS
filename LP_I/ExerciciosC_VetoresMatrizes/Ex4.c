// 4 - Faça um programa que carregue automaticamente 2 vetores. O primeiro com 10 elementos numéricos e o segundo com 10 caracteres. 
// Imprima o conteúdo destes vetores intercalados. Ex:
// 1a2b3c4d5e...
// Dica: char c[10]; for(i=0;i<10<i++) c[i]=65+i;

#include <stdio.h>

int main() {

    int numbers[10] = {1,2,3,4,5,6,7,8,9,10};
    char caracteres[10] = {'a', '1', 'c', '2','e','3','g','4','i','5'};

    // imprime numbers
    for (int i = 0; i < 10; i++) {
        printf("%d", numbers[i]);
    }

    // pula linha
    printf("\n\n");

    // imprime caracteres
    for (int i = 0; i < 10; i++) {
        printf("%c", caracteres[i]);
    }

}