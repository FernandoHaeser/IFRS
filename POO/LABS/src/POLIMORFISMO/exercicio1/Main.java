package POLIMORFISMO.exercicio1;

import POLIMORFISMO.exercicio1.models.*;

public class Main {
    public static void main(String[] args) {

        double precoBase = 220;
        Ingresso[] vendas = new Ingresso[4];

        vendas[0] = new Inteira("Larissa", precoBase);
        vendas[1] = new Meia("Bruno", precoBase);
        vendas[2] = new Vip("Camila", precoBase);
        vendas[3] = new Camarote("Fernando", precoBase);

        double total = 0;

        for (int i = 0; i < vendas.length; i++) {
            double preco = vendas[i].calcularPreco();
            System.out.printf("%s pagou R$ %.2f%n", vendas[i].getComprador(), preco);
            total = total + preco;
        }
        System.out.printf("\nTotal arrecadado: R$ %.2f%n", total);
    }
}
