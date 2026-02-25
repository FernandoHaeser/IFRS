/*

Crie um programa que solicite a base e a altura de um retângulo, calcule e exiba a sua área total.
Exemplo: Se base = 5.0 e altura = 10.0, a saída deve ser "Área: 50.0".

Fernando Augusto Haeser - 24/02/2026 | 22h16m

 */

package Lista01;

import java.util.Scanner;

public class AreaRetangulo {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        // entradas
        System.out.print("Informe a base do retângulo: ");
        double base = sc.nextDouble();

        System.out.print("Informe a altura do retângulo: ");
        double altura = sc.nextDouble();

        double area = base * altura;

        // saida
        System.out.printf("\nSua área é de: %.2f", area);

        sc.close();
    }
}
