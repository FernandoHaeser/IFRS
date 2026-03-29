#include <stdio.h>

int main() {

	char operation;
	int n1, n2, result;

	printf("Deseja realizar qual conta? ( + , - , * , /): ");
	scanf("%c", &operation);

	printf("Informe o primeiro numero: ");
	scanf("%d", &n1);

	printf("Informe o segundo numero: ");
	scanf("%d", &n2);

	switch (operation) {
	case '+':
		printf("\nSeu resultado e: %d", n1 + n2);
		break;
	case '-':
		printf("\nSeu resultado e: %d", n1 - n2);
		break;
	case '/':
		printf("\nSeu resultado e: %d", n1 / n2);
        break;
	case '*':
		printf("\nSeu resultado e: %d", n1 * n2);
        break;
	default:
		printf("\nVoce inseriu uma opcao invalida!");
		break;
	}
}
