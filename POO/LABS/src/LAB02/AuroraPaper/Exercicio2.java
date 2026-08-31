package LAB02.AuroraPaper;

import java.util.Scanner;

public class Exercicio2 {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        double valorFinal;
        double valorDesconto;
        int descontoAplicado;

        System.out.print("Informe o valor da sua compra: ");
        double valorCompra = sc.nextDouble();

        if (valorCompra < 50) {
            descontoAplicado = 0;
            valorFinal = valorCompra * (descontoAplicado + 1);
            valorDesconto = valorCompra - valorFinal;
        } else if (valorCompra > 50 && valorCompra < 150) {
            descontoAplicado = 5;
            valorFinal = valorCompra * (descontoAplicado / 100.0);
            valorDesconto = valorCompra - valorFinal;
        } else if (valorCompra > 150 && valorCompra < 300) {
            descontoAplicado = 10;
            valorDesconto = valorCompra * (descontoAplicado / 100.0);
            valorFinal = valorCompra - valorDesconto;
        } else {
            descontoAplicado = 15;
            valorFinal = valorCompra * (descontoAplicado / 100.0);
            valorDesconto = valorCompra - valorFinal;
        }

        System.out.println("\nValor da compra: R$ " + valorCompra);
        System.out.println("Desconto aplicado: " + descontoAplicado + "%");
        System.out.println("Valor do desconto: R$ " + valorDesconto);
        System.out.println("Valor final: R$ " + valorFinal);

        /*
         * Saída esperada
         * Valor da compra: 180,00
         * Desconto aplicado: 10%
         * Valor do desconto: R$ 18,00
         * Valor final: R$ 162,00
         * Escrever quatro if independentes em vez de uma cadeia encadeada faz mais de
         * uma faixa ser aplicada, e o desconto acaba sempre em 15%.
         */

        sc.close();
    }
}
