#include <stdio.h>

int main() {
    int idade;

    do {
        printf("Digite a idade (0 a 120): ");
        scanf("%d", &idade);
    } while (idade < 0 || idade > 120);

    printf("Idade registrada.\n");
    return 0;
}
