#include <stdio.h>

int main()
{

	int regiao;

	printf("Para qual regiC#o deseja enviar?");
	scanf("%d", &regiao);

	switch (regiao) {
	case 0:
		printf("Enviar para: RegiC#o Sudeste (SP, RJ, ES, MG)");
		break;
	case 1:
		printf("Enviar para: RegiC#o Sudeste (SP, RJ, ES, MG)");
		break;
	case 2:
		printf("Enviar para: RegiC#o Sudeste (SP, RJ, ES, MG)");
		break;
	case 3:
		printf("Enviar para: RegiC#o Sudeste (SP, RJ, ES, MG)");
		break;
	case 4:
		printf("Enviar para: RegiC#o 4 (BA, SE)");
		break;
	case 5:
		printf("Enviar para: RegiC#o 5 (PE, AL, PB, RN)");
		break;
	case 6:
		printf("Enviar para: RegiC#o 6 (CE, PI, MA, PA, AP, AM, RR, AC)");
		break;
	case 7:
		printf("Enviar para: RegiC#o 7 (DF, GO, TO, MT, RO, MS)");
		break;
	case 8:
		printf("Enviar para: RegiC#o Sul (PR, SC, RS)");
		break;
	case 9:
		printf("Enviar para: RegiC#o Sul (PR, SC, RS)");
		break;

	default:
		printf("Opcao invalida!");
		break;
	}

	return 0;
}
