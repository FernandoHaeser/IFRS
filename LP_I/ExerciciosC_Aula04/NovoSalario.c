/*
4 - Leia o código da função e o salário atual do funcionário. 
De acordo com a tabela abaixo, indique o novo salário.

Código  	Cargo 	 Aumento
1 	   Escriturário   30%
2 	    Secretário 	  25%
3         Caixa 	  20%
4 	     Gerente 	  10%
5 	     Diretor 	   0

Indique uma mensagem de erro se o código não existir.
*/

#include <stdio.h>
#include <string.h>

int main() {
    
    int code;
    float salary, plus, newSalary;
    char function[20];
    
    printf("Infome seu salario atual: R$");
    scanf("%f", &salary);
    
    printf("Informe seu cargo\n\n");
    printf("[1] Escrituario\n");
    printf("[2] Secretario\n");
    printf("[3] Caixa\n");
    printf("[4] Gerente\n");
    printf("[5] Diretor\n");
    printf("R: ");
    scanf("%d", &code);
    
    switch (code) {
        
        case 1:
            strcpy(function, "Escrituario");
            plus = salary * 30 / 100;
            newSalary = salary + plus;
            break;
        case 2:
            strcpy(function, "Secretario");
            plus = salary * 25/ 100;
            newSalary = salary + plus;
            break;
        case 3:
            strcpy(function, "Caixa");
            plus = salary * 20 / 100;
            newSalary = salary + plus;
            break;
        case 4:
            strcpy(function, "Gerente");
            plus = salary * 10 / 100;
            newSalary = salary + plus;
            break;
        case 5:
            strcpy(function, "Diretor");
            newSalary = salary; 
            break;
        default:
            printf("\nInforme uma opcao valida!\n");
        break;
        
    }
  
    printf("\nSeu cargo é %s, e seu novo salário é: R$%.2f", function, newSalary);
    
   return 0;
}
