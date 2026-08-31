package LAB02.ListOfExercises.exercise5;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        Retangulo retangulo = new Retangulo();

        System.out.print("Informa a base do retangulo: ");
        retangulo.base = sc.nextDouble();

        System.out.print("Informa a altura do retangulo: ");
        retangulo.altura = sc.nextDouble();

        System.out.println(retangulo.toString());

        sc.close();
    }
}
