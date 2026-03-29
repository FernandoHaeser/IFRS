// Pares com FOR
// Escreva um programa que imprima os números pares de 1 a 20, em ordem crescente, utilizando o comando for.

#include <stdio.h>

int main() {

  for (int i = 1; i <= 20; i++) {

      if (i % 2 == 0) {
        printf("%d \n", i);
      }
  }
}
