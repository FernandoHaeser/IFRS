/*
Música dos Elefantes (se balançando)
Escreva um programa que imprima a letra da música “Elefantes se balançavam” até o número informado pelo usuário.
Use um laço de repetição (for, while ou do while).

O padrão da música deve seguir:

1 elefante se balançava numa teia de aranha,
Mas como a teia não se arrebentou,
Foi chamar outro elefante.

2 elefantes se balançavam numa teia de aranha,
Mas como a teia não se arrebentou,
Foram chamar outro elefante.

..

N elefantes se balançavam numa teia de aranha,
Mas como a teia não se arrebentou,
Todos foram para o chão!
    

Regras:
Use o singular para 1 elefante e o plural para os demais.
No último verso, troque a última linha por: “Todos foram para o chão!”
*/

#include <stdio.h>

int main() {

    int numElefantes;

    printf("Digite o número de elefantes: ");
    scanf("%d", &numElefantes);

    for (int i = 1; i <= numElefantes; i++) {
        if (i == 1) {
            printf("%d elefante se balançava numa teia de aranha,\n", i);
            printf("Mas como a teia não se arrebentou,\n");
            printf("Foi chamar outro elefante.\n\n");
        } else if (i == numElefantes) {
            printf("%d elefantes se balançavam numa teia de aranha,\n", i);
            printf("Mas como a teia não se arrebentou,\n");
            printf("Todos foram para o chão!\n");
        } else {
            printf("%d elefantes se balançavam numa teia de aranha,\n", i);
            printf("Mas como a teia não se arrebentou,\n");
            printf("Foram chamar outro elefante.\n\n");
        }
    }

    return 0;
}
