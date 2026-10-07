/*
Em uma eleição presidencial há três candidatos. Os votos são registrados por meio de códigos:

Código  Candidato
1       Zezinho
2       Huguinho
3       Luizinho
4       Voto em Branco
outros números  Voto Nulo
    

Escreva um programa que:

    Leia votos (códigos) até que seja digitado o valor 0, o que encerra a votação;
    votos com códigos inválidos (diferentes de 0 a 4), devem considerado como nulos;
    Ao final, exiba:
        Total de votos para cada candidato;
        Total de votos nulos e em branco;
        Nome do candidato vencedor (em caso de empate, indique que houve empate).
*/

#include <stdio.h>

int main(){
    int voto, votosZezinho = 0, votosHuguinho = 0, votosLuizinho = 0, votosBranco = 0, votosNulo = 0;

    printf("=====================================\n");
    printf("Códigos dos candidatos:\n");
    printf("1 - Zezinho\n");
    printf("2 - Huguinho\n");
    printf("3 - Luizinho\n");
    printf("4 - Voto em Branco\n");
    printf("=====================================\n");

    do {
        printf("Digite o código do seu voto (0 para encerrar): ");
        scanf("%d", &voto);

        switch (voto) {
            case 1:
                votosZezinho++;
                break;
            case 2:
                votosHuguinho++;
                break;
            case 3:
                votosLuizinho++;
                break;
            case 4:
                votosBranco++;
                break;
            case 0:
                // Encerra a votação
                break;
            default:
                votosNulo++;
                break;
        }
    } while (voto != 0);

    printf("\nResultado da Eleição:\n");
    printf("Zezinho: %d votos\n", votosZezinho);
    printf("Huguinho: %d votos\n", votosHuguinho);
    printf("Luizinho: %d votos\n", votosLuizinho);
    printf("Votos em Branco: %d\n", votosBranco);
    printf("Votos Nulos: %d\n", votosNulo);

    // Determinar o vencedor
    if (votosZezinho > votosHuguinho && votosZezinho > votosLuizinho) {
        printf("Vencedor: Zezinho\n");
    } else if (votosHuguinho > votosZezinho && votosHuguinho > votosLuizinho) {
        printf("Vencedor: Huguinho\n");
    } else if (votosLuizinho > votosZezinho && votosLuizinho > votosHuguinho) {
        printf("Vencedor: Luizinho\n");
    } else {
        printf("Houve empate entre os candidatos.\n");
    }

    return 0;
}