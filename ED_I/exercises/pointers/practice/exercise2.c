#include <stdio.h>

float mediaPointers(int *p1, int *p2, int *p3, int *p4)
{
    return (*p1 + *p2 + *p3 + *p4) / 4.0;
}

int main()
{

    int a = 10, b = 20, c = 30, d = 40;

    float mediaValores = mediaPointers(&a, &b, &c, &d);

    printf("Média dos quatro ponteiros: %.2f", mediaValores);

    return 0;
}