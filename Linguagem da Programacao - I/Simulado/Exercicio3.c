/*
Questão 3: - Em uma eleição existem 4 candidatos à vereador e 3 candidatos à
prefeitura. O programa deve realizar a leitura do voto para vereador e para
prefeito.

Autor: Fernando Augusto
*/

#include <stdio.h>

int main() {

    // Inicializacao de variaveis que vao ser utilizadas no codigo
    int voto_vereador, voto_prefeito;
    int total_nulos_vereador = 0, total_nulos_prefeito = 0;
    int total_brancos_vereador = 0, total_brancos_prefeito = 0;
    int votos_candidato_vereadorA = 0, votos_candidato_vereadorB = 0;
    int votos_candidato_vereadorC = 0, votos_candidato_vereadorD = 0;
    int votos_candidato_prefeitoX = 0, votos_candidato_prefeitoY = 0;
    int votos_candidato_prefeitoZ = 0;

    //Inicio laco de repeticao para adquirir os 7 votos
    for (int i = 0; i < 7; i++) {
        
        printf("Informe seu voto para Vereador\n\n");
        printf("-> 66666 para candidato A\n"); 
        printf("-> 77777 para candidato B\n");
        printf("-> 88888 para candidato C\n"); 
        printf("-> 99999 para candidato D\n");
        printf("-> 111 para BRANCO\n");
        printf("-> QUALQUER NUMERO diferente para NULO\n");
        printf("R: ");
        scanf("%d", &voto_vereador);

        //Switch para atribuicao de fotos para vereador, poderia ser usado if-else
        switch (voto_vereador) {
            case 66666: votos_candidato_vereadorA++; break;
            case 77777: votos_candidato_vereadorB++; break;
            case 88888: votos_candidato_vereadorC++; break;
            case 99999: votos_candidato_vereadorD++; break;
            case 111:   total_brancos_vereador++; break;
            default:    total_nulos_vereador++; 
        }

        printf("\nInforme seu voto para Prefeito\n\n");
        printf("-> 99 para candidato X\n"); 
        printf("-> 88 para candidato Y\n");
        printf("-> 77 para candidato Z\n"); 
        printf("-> 111 para BRANCO\n");
        printf("-> QUALQUER NUMERO diferente para NULO\n");
        printf("R: ");
        scanf("%d", &voto_prefeito);

         //Switch para atribuicao de fotos para prefeito, poderia ser usado if-else
        switch (voto_prefeito) {
            case 99:  votos_candidato_prefeitoX++; break;
            case 88:  votos_candidato_prefeitoY++; break;
            case 77:  votos_candidato_prefeitoZ++; break;
            case 111: total_brancos_prefeito++; break;
            default:  total_nulos_prefeito++; 
        }

        printf("\n\n");
    }
    
    //Calculo total de votos vereador
    int total_votos_vereador = votos_candidato_vereadorA + votos_candidato_vereadorB + 
                               votos_candidato_vereadorC + votos_candidato_vereadorD;

    //Calculo total de votos prefeito                           
    int total_votos_prefeito = votos_candidato_prefeitoX + votos_candidato_prefeitoY + 
                               votos_candidato_prefeitoZ;


    // SAIDAS                           
    printf("====== RESULTADO VEREADOR ======\n\n");
    printf("Candidato A: %d | %.2f%%\n", votos_candidato_vereadorA, (total_votos_vereador ? (votos_candidato_vereadorA * 100.0 / total_votos_vereador) : 0));
    printf("Candidato B: %d | %.2f%%\n", votos_candidato_vereadorB, (total_votos_vereador ? (votos_candidato_vereadorB * 100.0 / total_votos_vereador) : 0));
    printf("Candidato C: %d | %.2f%%\n", votos_candidato_vereadorC, (total_votos_vereador ? (votos_candidato_vereadorC * 100.0 / total_votos_vereador) : 0));
    printf("Candidato D: %d | %.2f%%\n", votos_candidato_vereadorD, (total_votos_vereador ? (votos_candidato_vereadorD * 100.0 / total_votos_vereador) : 0));
    printf("Votos em branco: %d\n", total_brancos_vereador);
    printf("Votos nulos: %d\n\n\n", total_nulos_vereador);

    printf("====== RESULTADO PREFEITO ======\n\n");
    printf("Candidato X: %d | %.2f%%\n", votos_candidato_prefeitoX, (total_votos_prefeito ? (votos_candidato_prefeitoX * 100.0 / total_votos_prefeito) : 0));
    printf("Candidato Y: %d | %.2f%%\n", votos_candidato_prefeitoY, (total_votos_prefeito ? (votos_candidato_prefeitoY * 100.0 / total_votos_prefeito) : 0));
    printf("Candidato Z: %d | %.2f%%\n", votos_candidato_prefeitoZ, (total_votos_prefeito ? (votos_candidato_prefeitoZ * 100.0 / total_votos_prefeito) : 0));
    printf("Votos em branco: %d\n", total_brancos_prefeito);
    printf("Votos nulos: %d\n\n\n", total_nulos_prefeito);

    printf("Programador: Fernando Augusto\n"); // eu hehe

    return 0;
}
