#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int compara(int alvo, int palpite) {
    if (palpite < alvo) return -1;
    if (palpite > alvo) return 1;
    return 0;
}

int main() {
    int alvo, palpite, tentativas = 0;
    srand(time(NULL));
    alvo = rand() % 100 + 1;

    do {
        printf("Digite seu palpite (1 a 100): ");
        scanf("%d", &palpite);
        tentativas++;

        int r = compara(alvo, palpite);
        if (r == 0)
            printf("Acertou em %d tentativas!\n", tentativas);
        else if (r < 0)
            printf("Maior...\n");
        else
            printf("Menor...\n");

    } while (palpite != alvo);

    return 0;
}
