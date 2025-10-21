#include <stdio.h>

void portugues(char turno) {
    switch (turno) {
        case 'm': printf("BOM DIA\n"); break;
        case 't': printf("BOA TARDE\n"); break;
        case 'n': printf("BOA NOITE\n"); break;
        default: printf("Turno invalido\n");
    }
}

void ingles(char turno) {
    switch (turno) {
        case 'm': printf("GOOD MORNING\n"); break;
        case 't': printf("GOOD AFTERNOON\n"); break;
        case 'n': printf("GOOD EVENING\n"); break;
        default: printf("Invalid time of day\n");
    }
}

void espanhol(char turno) {
    switch (turno) {
        case 'm': printf("BUENOS DIAS\n"); break;
        case 't': printf("BUENAS TARDES\n"); break;
        case 'n': printf("BUENAS NOCHES\n"); break;
        default: printf("Turno invalido\n");
    }
}

void italiano(char turno) {
    switch (turno) {
        case 'm': printf("BUONGIORNO\n"); break;
        case 't': printf("BUON POMERIGGIO\n"); break;
        case 'n': printf("BUONA SERA\n"); break;
        default: printf("Turno invalido\n");
    }
}

void alemao(char turno) {
    switch (turno) {
        case 'm': printf("GUTEN MORGEN\n"); break;
        case 't': printf("GUTEN TAG\n"); break;
        case 'n': printf("GUTEN ABEND\n"); break;
        default: printf("Ungueltige Eingabe\n");
    }
}

int main() {
    int lingua;
    char turno;

    do {
        printf("\nLinguas: 1-Portugues  2-Ingles  3-Espanhol  4-Italiano  5-Alemao  0-Sair\n");
        printf("Escolha a lingua: ");
        scanf("%d", &lingua);

        if (lingua == 0) break;

        printf("Digite o turno (m/t/n): ");
        scanf(" %c", &turno);

        switch (lingua) {
            case 1: portugues(turno); break;
            case 2: ingles(turno); break;
            case 3: espanhol(turno); break;
            case 4: italiano(turno); break;
            case 5: alemao(turno); break;
            default: printf("Lingua invalida!\n");
        }
    } while (lingua != 0);

    printf("Programa encerrado.\n");
    return 0;
}
