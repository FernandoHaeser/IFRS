package lista02.contabancaria;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        ContaBancaria conta = new ContaBancaria();

        double valor;
        String opcoes = """
                [1] - Depositar
                [2] - Sacar
                [3] - Verificar saldo
                [4] - Sair
                """;

        System.out.print("Informe seu nome de titular da conta: ");
        conta.titular = sc.nextLine();

        while (true) {

            System.out.print("\nSeja bem-vindo " + conta.titular + "!\n"
                    + opcoes + "\nR: ");
            int resposta = sc.nextInt();

            switch (resposta) {
                case 1:
                    System.out.print("\nValor que deseja depositar? R$");
                    valor = sc.nextDouble();
                    conta.depositar(valor);
                    System.out.println("\nDepósito realizado com sucesso!");
                    break;
                case 2:
                    System.out.print("\nValor que deseja sacar? R$");
                    valor = sc.nextDouble();
                    conta.sacar(valor);
                    break;
                case 3:
                    System.out.println("Seu saldo atual é de: R$" + conta.saldo);
                    break;
                case 4:
                    System.out.println("\nADEUS!");
                    System.exit(0);
                    break;
                default:
                    System.out.println("\nOpção inválida!\n");
            }
            sc.close();
        }
    }
}
