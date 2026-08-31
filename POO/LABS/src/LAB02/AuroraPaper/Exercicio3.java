package LAB02.AuroraPaper;

import java.util.Scanner;

public class Exercicio3 {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int encerrar = 1;
        int vendasRegistradas = 0;
        double totalVendido = 0;

        while (encerrar != 0) {

            System.out.print("Valor da venda (0 para encerrar): ");
            double input = sc.nextInt();

            if (input == 0) {
                encerrar = 0;
                continue;
            }

            vendasRegistradas++;
            totalVendido += input;

        }

        sc.close();

        if (vendasRegistradas == 0) {
            System.out.println("\nNenhum dado fornecido! Encerrando...");
            System.exit(0);
        } else {
            double ticketMedio = totalVendido / vendasRegistradas;

            System.out.println("\nVendas registradas: " + vendasRegistradas);
            System.out.println("Total vendido: R$ " + totalVendido);
            System.out.println("Ticket médio: R$ " + ticketMedio);
        }
    }
}
