#include <stdio.h>

int *maiorValor(int *p1, int *p2, int *p3)
{
    if (*p1 > *p2 && *p1 > *p3)
        return p1;

    if (*p2 > *p1 && *p2 > *p3)
        return p2;

    return p3;
}

int main()
{
    int a = 10;
    int b = 50;
    int c = 30;

    int *maiorEndereco = maiorEnderecoValor(&a, &b, &c);

    printf("Maior valor: %d\n", *maiorEndereco);
    printf("Endereço de maior valor: %p\n", (void *)maiorEndereco);

    return 0;
}
