package lista02.calculadorageometria;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        Retangulo retangulo = new Retangulo();

        System.out.print("Informe a base do retângulo: ");
        double base = sc.nextDouble();

        System.out.print("Informe a altura do retângulo: ");
        double altura = sc.nextDouble();

        double area = retangulo.calcularArea(base, altura);
        double perimetro = retangulo.calcularPerimetro(base, altura);

        System.out.println("\nA área é: " + area
                + " e o perímetro " + perimetro);

        sc.close();
    }
}
