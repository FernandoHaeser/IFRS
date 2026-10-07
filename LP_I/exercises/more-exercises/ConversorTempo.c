#include <stdio.h>

void imprimeHMS(int totalSeg) {
    int h = totalSeg / 3600;
    int m = (totalSeg % 3600) / 60;
    int s = totalSeg % 60;

    printf("%02d:%02d:%02d\n", h, m, s);
}

int main() {
    int segundos;
    printf("Digite o total de segundos: ");
    scanf("%d", &segundos);
    imprimeHMS(segundos);
    return 0;
}
