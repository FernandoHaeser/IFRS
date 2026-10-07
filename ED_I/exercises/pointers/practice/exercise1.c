#include <stdio.h>

int main() {

    int a = 1, b = 2, c = 3, d = 4;

    printf("Valor A: %d\nEndereço de A: %p\n\n", a, &a);
    printf("Valor B: %d\nEndereço de B: %p\n\n", b, &b);
    printf("Valor C: %d\nEndereço de C: %p\n\n", c, &c);
    printf("Valor D: %d\nEndereço de D: %p\n\n", d, &d);

    return 0;
}