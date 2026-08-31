package LAB02.ListOfExercises.exercise4;

import java.util.Scanner;

public class Main {

    static void menu() {
        String menu = """
                \n[1] - Ligar PC
                [2] - Desligar PC
                [3] - Verificar Estado PC
                [4] - Listar Dados
                [5] - Sair""";
        System.out.println(menu);
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        Computador pc = new Computador();

        pc.marca = "Apple";
        pc.processador = "Apple M4";

        boolean continueLoop = true;

        while (continueLoop) {
            menu();
            System.out.print("R: ");
            int answer = sc.nextInt();

            switch (answer) {
                case 1:
                    pc.ligar();
                    break;
                case 2:
                    pc.desligar();
                    break;
                case 3:
                    System.out.println();
                    System.out.println(pc.verificarStatus());
                    break;
                case 4:
                    System.out.println(pc.toString());
                    break;
                case 5:
                    continueLoop = false;
                    System.out.println("\nEncerrando...");
                    break;
                default:
                    System.out.println("\nOpção inválida!");
            }
        }

        sc.close();
    }
}
