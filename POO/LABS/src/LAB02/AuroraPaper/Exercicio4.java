package LAB02.AuroraPaper;

import java.util.Scanner;

public class Exercicio4 {

    static void mostrarMenu() {
        String menu = """
                \n=== Caixa da Papelaria ===
                [1] - Registrar venda
                [2] - Ver resumo do caixa
                [3] - Encerrar o caixa
                """;

        System.out.println(menu);
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        boolean continuar = true;
        double maiorVenda = 0, menorVenda = 0, totalEmCaixa = 0, ticketMedio = 0;
        int vendasRegistradas = 0;

        while (continuar) {

            if (vendasRegistradas != 0)
                ticketMedio = totalEmCaixa / vendasRegistradas;

            mostrarMenu();
            System.out.print("R: ");
            int option = sc.nextInt();

            switch (option) {
                case 1:
                    System.out.print("\nValor da venda: ");
                    double valorVenda = sc.nextDouble();

                    if (vendasRegistradas == 0) {
                        maiorVenda = valorVenda;
                        menorVenda = valorVenda;
                    }

                    if (valorVenda > maiorVenda) {
                        maiorVenda = valorVenda;
                    }
                    if (valorVenda < menorVenda) {
                        menorVenda = valorVenda;
                    }

                    vendasRegistradas++;
                    totalEmCaixa += valorVenda;

                    System.out.println("Venda registrada!");

                    break;
                case 2:
                    System.out.println("\nTotal de vendas: " + vendasRegistradas);
                    System.out.println("Ticket médio: " + ticketMedio);
                    System.out.println("Maior venda: " + maiorVenda);

                    break;
                case 3:
                    continuar = false;
                    continue;
                default:
                    System.out.println("\nValor inserido não é válido!");
                    break;
            }
        }

        sc.close();

        if (vendasRegistradas == 0) {
            System.out.println("\nNenhum venda registrada! Encerrando...");
        } else {
            System.out.println("\nFechamento do caixa:");
            System.out.println("Vendas registradas: " + vendasRegistradas);
            System.out.println("Total em caixa: R$ " + totalEmCaixa);
            System.out.println("Ticket médio: R$ " + ticketMedio);
            System.out.println("Maior venda: R$ " + maiorVenda);
            System.out.println("Menor venda: R$ " + menorVenda);
        }
    }
}
