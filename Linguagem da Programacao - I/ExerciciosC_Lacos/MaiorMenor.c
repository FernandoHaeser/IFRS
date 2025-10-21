#include <stdio.h>

int main() {
    int num, maior, menor, flag = 0;

    do {
        printf("Digite um numero (0 para sair): ");
        scanf("%d", &num);

        if (num != 0) {
            if (flag == 0) {
                maior = menor = num;
                flag = 1;
            } else {
                if (num > maior) maior = num;
                if (num < menor) menor = num;
            }
        }
    } while (num != 0);

    if (flag == 1)
        printf("Maior = %d, Menor = %d\n", maior, menor);
    else
        printf("Nenhum numero valido informado.\n");

    return 0;
}
