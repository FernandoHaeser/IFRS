/*
*Escreva um programa que, dada a idade de um nadador, classifique-o em uma das seguintes categorias:
*infantil A = 5 - 7 anos
*infantil B = 8-10 anos
*juvenil A = 11-13 anos
*juvenil B = 14-17 anos
*adulto = 18 anos ou mais
*/

#include <stdio.h>

int main() 
{
    int age;
   
    printf("\nInforme sua idade: ");
    scanf("%d", &age);
    
    if (age < 5) {
        printf("\nSua idade não se adequa a nenhuma das categorias!\n");
        return 1;
        //continue; -> Caso tivesse um loop
    }
    
    if (age >= 5 && age <= 7)
        printf("\nVocê está na categoria: Infantil A");
    if (age >= 8 && age <= 10)
        printf("\nVocê está na categoria: Infantil B");
    if (age >= 11 && age <= 13)
        printf("\nVocê está na categoria: Juvenil A");
    if (age >= 14 && age <= 17)
        printf("\nVocê está na categoria: Juvenil B");
    if (age > 18)
        printf("\nVocê está na categoria: Adulto(a)");
}
