package LAB02.ListOfExercises.exercise3;

import java.util.Scanner;

public class Main {

    static void menu() {
        String opcoes = """
                \n[1] - Depositar
                [2] - Sacar
                [3] - Ver dados
                [4] - Sair
                    """;
        System.out.println(opcoes);
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        ContaBancaria conta = new ContaBancaria();

        boolean keepAlive = true;
        double value;

        System.out.print("\nDigite o seu nome: ");
        conta.titular = sc.nextLine();

        System.out.print("Digite o seu saldo: ");
        conta.saldo = sc.nextDouble();

        while (keepAlive) {

            menu();
            System.out.print("R: ");
            int option = sc.nextInt();

            switch (option) {
                case 1:
                    System.out.print("\nValor à depositar: R$");
                    value = sc.nextDouble();
                    conta.depositar(value);
                    break;
                case 2:
                    System.out.print("\nValor à sacar: R$");
                    value = sc.nextDouble();
                    conta.sacar(value);
                    break;
                case 3:
                    System.out.println(conta.toString());
                    break;
                case 4:
                    System.out.println("\nEncerrando...");
                    keepAlive = false;
                    break;
                default:
                    System.out.println("\nDigite uma opção válida!");
            }
        }
        sc.close();
    }
}
