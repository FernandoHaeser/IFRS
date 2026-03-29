/*
Escreva um programa que imprima a letra da música “Elefantes incomodam muita gente” utilizando apenas laços while e do while. Não é permitido usar for.
Após a impressão da música, o programa deve contar e exibir a quantidade de vezes que aparecem as palavras "incomoda" e "incomodam".

Letra completa da música:

1 elefante incomoda muita gente
2 elefantes incomodam, incomodam muito mais
3 elefantes incomodam muita gente
4 elefantes incomodam, incomodam, incomodam, incomodam muito mais
5 elefantes incomodam muita gente
6 elefantes incomodam, incomodam, incomodam, incomodam, incomodam, incomodam muito mais
7 elefantes incomodam muita gente
8 elefantes incomodam, incomodam, incomodam, incomodam, incomodam, incomodam, incomodam, incomodam muito mais
9 elefantes incomodam muita 
10 elefantes incomodam, incomodam, incomodam, incomodam, incomodam, incomodam, incomodam, incomodam, incomodam, incomodam muito mais

10 elefantes incomodam muita gente
9 elefantes incomodam, incomodam, incomodam, incomodam, incomodam, incomodam, incomodam, incomodam, incomodam muito menos
8 elefantes incomodam muita gente
7 elefantes incomodam, incomodam, incomodam, incomodam, incomodam, incomodam muito menos
6 elefantes incomodam muita gente
5 elefantes incomodam, incomodam, incomodam, incomodam, incomodam, muito menos
4 elefantes incomodam muita gente
3 elefantes incomodam, incomodam, incomodam muito menos
2 elefantes incomodam muita gente
1 elefante incomoda muito menos
    

Ao final da execução, o programa deve imprimir:
Quantidade total de ocorrências das palavras “incomoda” e “incomodam”
*/

#include <stdio.h>

int main() {
    int i = 1, j, incomodaCount = 0, incomodamCount = 0;

    // Primeira parte da música (1 a 10)
    while (i <= 10) {
        printf("%d elefante%s incomoda%s muita gente\n", i, (i > 1) ? "s" : "", (i > 1) ? "m" : "");
        if (i > 1) {
            printf("%d elefante%s incomoda%s", i, "s", "m");
            for (j = 1; j < i; j++) {
                printf(", incomoda%s", "m");
            }
            printf(" muito mais\n");
        }
        if (i == 1) {
            incomodaCount++;
        } else {
            incomodamCount++;
            incomodamCount += (i - 1);
        }
        i++;
    }

    // Segunda parte da música (10 a 1)
    i = 10;
    do {
        printf("%d elefante%s incomoda%s muita gente\n", i, (i > 1) ? "s" : "", (i > 1) ? "m" : "");
        if (i > 1) {
            printf("%d elefante%s incomoda%s", i, "s", "m");
            for (j = 1; j < i; j++) {
                printf(", incomoda%s", "m");
            }
            printf(" muito menos\n");
        }
        if (i == 1) {
            incomodaCount++;
        } else {
            incomodamCount++;
            incomodamCount += (i - 1);
        }
        i--;
    } while (i >= 1);

    // Exibir contagem final
    printf("\nTotal de ocorrências:\n");
    printf("incomoda: %d\n", incomodaCount);
    printf("incomodam: %d\n", incomodamCount);

    return 0;
}
