/*
Questão 3: - Em uma eleição existem 4 candidatos à vereador e 3 candidatos à
prefeitura. O programa deve realizar a leitura do voto para vereador e para
prefeito.

Os votos são informados através de códigos.
Os dados utilizados para a contagem dos votos obedecem à seguinte codificação:
Para vereador os códigos são: 

-66666 para candidato A; 
-77777 para candidato B;
-88888 para candidato C; 
-99999 para candidato D;

Para prefeito os códigos são: 

-99 para candidato X;
-88 para Candidato Y; 
-77 para candidato Z;
-111 = voto em branco (para ambas as votações);
-Outro valor: Voto Nulo;

Elabore um algoritmo que realize a leitura de ambos os votos (vereador e depois
para prefeito) leia os códigos do candidato que receberá o voto. 

O programa deverá ler 7 votos (7 para vereador e 7 para prefeito) alternadamente.

Calcule e escreva:
-total de votos para cada candidato e seu respectivo percentual de votos sobre os votos válidos*; (em cada uma das duas eleições)
-total de votos nulos; (em cada uma das duas eleições)
-total de votos em branco; (em cada uma das duas eleições) Votos válidos são todos os votos 
- nulos.

Lembre-se: os votos em branco e nulos podem ser diferentes nas duas eleições.

Nota: o Programa deve conter comentários e o nome do autor.
Ao FINAL deve ser exibido o nome do programador.
*/

#include <stdio.h>

int main() {

    int voto_vereador, voto_prefeito, total_nulos_vereador = 0, total_nulos_prefeito = 0, total_brancos_vereador = 0, total_brancos_prefeito = 0;
    int votos_candidato_vereadorA, votos_candidato_vereadorB, votos_candidato_vereadorC, votos_candidato_vereadorD, votos_candidato_prefeitoX, votos_candidato_prefeitoY, votos_candidato_prefeitoZ;

    for (int i = 0; i < 7; i++) {
        
        printf("Informe seu voto para Vereador\n\n");
        printf("-> 66666 para candidato A\n"); 
        printf("-> 77777 para candidato B\n");
        printf("-> 88888 para candidato C\n"); 
        printf("-> 99999 para candidato D\n");
        printf("-> 111 para candidato BRANCO\n");
        printf("-> QUALQUER NUMERO para candidato NULO\n");
        printf("R: ");
        scanf("%d", &voto_vereador);

        switch (voto_vereador) {
            case 66666: 
                votos_candidato_vereadorA++;
                break;
            case 77777: 
                votos_candidato_vereadorB++;
                break;
            case 88888: 
                votos_candidato_vereadorC++;
                break;
            case 99999: 
                votos_candidato_vereadorD++;
                break;
            case 111:
                total_brancos_vereador++;
                break;
            default:
                total_nulos_vereador++; 
        }

        printf("Informe seu voto para Prefeito\n\n");
        printf("-> 99 para candidato X\n"); 
        printf("-> 88 para candidato Y\n");
        printf("-> 77 para candidato Z\n"); 
        printf("-> 111 para candidato BRANCO\n");
        printf("-> QUALQUER NUMERO para candidato NULO\n");
        printf("R: ");
        scanf("%d", &voto_prefeito);

        switch (voto_prefeito) {
            case 99: 
                votos_candidato_prefeitoX++;
                break;
            case 88: 
                votos_candidato_prefeitoY++;
                break;
            case 77: 
                votos_candidato_prefeitoZ++;
                break;
            case 111:
                total_brancos_prefeito++;
                break;
            default:
                total_nulos_prefeito++; 
        }
    }
    
    int total_votos_vereador = votos_candidato_vereadorA + votos_candidato_vereadorB + votos_candidato_vereadorC + votos_candidato_vereadorD;
    int total_votos_prefeito = votos_candidato_prefeitoX + votos_candidato_prefeitoY + votos_candidato_prefeitoZ;

    printf("VOTOS PARA VEREADOR\n\n");
    printf("Vereador A: %d | %.2d \n", votos_candidato_vereadorA, (votos_candidato_vereadorA*100/total_votos_vereador));
    printf("Vereador B: %d | %.2d \n", votos_candidato_vereadorB, (votos_candidato_vereadorA*100/total_votos_vereador));
    printf("Vereador C: %d | %.2d \n", votos_candidato_vereadorC, (votos_candidato_vereadorA*100/total_votos_vereador));
    printf("Vereador D: %d | %.2d \n", votos_candidato_vereadorD, (votos_candidato_vereadorA*100/total_votos_vereador));
    printf("Votos nulos para vereador: %d | %.2d \n", total_nulos_vereador, (votos_candidato_vereadorA*100/total_votos_vereador));
    printf("Votos em branco para vereador: %d | %.2d \n\n\n", total_brancos_vereador, (votos_candidato_vereadorA*100/total_votos_vereador));

    printf("VOTOS PARA PREFEITO\n\n");
    printf("Vereador X: %d | %.2d \n", votos_candidato_prefeitoX, (votos_candidato_prefeitoX*100/total_votos_prefeito));
    printf("Vereador Y: %d | %.2d \n", votos_candidato_prefeitoY, (votos_candidato_prefeitoY*100/total_votos_prefeito));
    printf("Vereador Z: %d | %.2d \n", votos_candidato_prefeitoZ, (votos_candidato_prefeitoZ*100/total_votos_prefeito));
    printf("Votos nulos para prefeito: %d | %.2d \n", total_nulos_prefeito);
    printf("Votos em branco para prefeito: %d | %.2d \n", total_nulos_prefeito);

    return 0;
}