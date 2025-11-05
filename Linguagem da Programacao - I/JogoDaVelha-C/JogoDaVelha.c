#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h> // For sleep function

void exibir_tabuleiro(int tabuleiro[3][3])
{
    system("clear"); // Clear screen
    printf("\n=== JOGO DA VELHA ===\n\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (tabuleiro[i][j] == 0)
                printf("     ");
            else if (tabuleiro[i][j] == 1)
                printf("  X  ");
            else
                printf("  O  ");
            if (j < 2)
                printf("|");
        }
        printf("\n");
        if (i < 2)
            printf("------------------\n");
    }
    printf("\n");
}

int verificar_vitoria(int tabuleiro[3][3])
{
    // Check rows and columns
    for (int i = 0; i < 3; i++)
    {
        if (tabuleiro[i][0] == tabuleiro[i][1] && tabuleiro[i][1] == tabuleiro[i][2] && tabuleiro[i][0] != 0)
            return tabuleiro[i][0];
        if (tabuleiro[0][i] == tabuleiro[1][i] && tabuleiro[1][i] == tabuleiro[2][i] && tabuleiro[0][i] != 0)
            return tabuleiro[0][i];
    }

    // Check diagonals
    if (tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][2] && tabuleiro[0][0] != 0)
        return tabuleiro[0][0];
    if (tabuleiro[0][2] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][0] && tabuleiro[0][2] != 0)
        return tabuleiro[0][2];

    return 0;
}

int fazer_jogada(int jogador_atual, int tabuleiro[3][3])
{
    int linha, coluna;

    printf("\nJogador %d (%c), sua vez!\n", jogador_atual, (jogador_atual == 1) ? 'X' : 'O');

    do
    {
        printf("Digite a linha (1-3): ");
        scanf("%d", &linha);
        printf("Digite a coluna (1-3): ");
        scanf("%d", &coluna);

        linha--; // Convert to 0-based index
        coluna--;

        if (linha < 0 || linha > 2 || coluna < 0 || coluna > 2)
        {
            printf("\nPosição inválida! Tente novamente.\n");
            sleep(1);
            continue;
        }

        if (tabuleiro[linha][coluna] != 0)
        {
            printf("\nPosição já ocupada! Tente novamente.\n");
            sleep(1);
            continue;
        }

        break;
    } while (1);

    tabuleiro[linha][coluna] = jogador_atual;
    return 1;
}

int main()
{
    int tabuleiro[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
    int jogador_atual = 1; // Player 1 starts
    int jogadas = 0;
    int vencedor;

    system("clear");
    printf("=== JOGO DA VELHA ===\n\n");
    printf("Jogador 1: X\nJogador 2: O\n");
    sleep(2);

    while (1)
    {
        exibir_tabuleiro(tabuleiro);

        if (fazer_jogada(jogador_atual, tabuleiro))
        {
            jogadas++;

            vencedor = verificar_vitoria(tabuleiro);
            if (vencedor)
            {
                exibir_tabuleiro(tabuleiro);
                printf("\nJogador %d venceu!\n", vencedor);
                break;
            }

            if (jogadas == 9)
            {
                exibir_tabuleiro(tabuleiro);
                printf("\nEmpate!\n");
                break;
            }

            jogador_atual = (jogador_atual == 1) ? 2 : 1;
        }
    }

    printf("\nFim do jogo!\n");
    return 0;
}