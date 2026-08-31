package LAB02.AuroraPaper;

import java.util.Scanner;

public class Exercicio5 {

    static void menu() {
        String menu = """
                \n\n=== MENU ===
                [1] - Listar Estoque
                [2] - Dar entrada
                [3] - Dar baixa
                [4] - Valor Total do Estoque
                [5] - Listar produtos com estoque baixo
                [6] - Maior valor imobilizado
                [7] - Sair
                """;

        System.out.print(menu);
    }

    static double calcularValorTotal(int[] quantidades, double[] precos) {
        double valorTotal = 0;
        double valorPorEstoque;

        for (int i = 0; i < quantidades.length; i++) {
            valorPorEstoque = quantidades[i] * precos[i];
            valorTotal += valorPorEstoque;
        }

        return valorTotal;
    }

    static void listProducts(String[] products, int[] quantidades, double[] precos) {
        for (int i = 0; i < products.length; i++) {
            System.out.println("\nProduto " + (i + 1) + " - " + products[i]
                    + " | Quantidade: " + quantidades[i]
                    + " | Preço: R$" + precos[i]);
        }
    }

    static void listProductsWithLowStock(String[] products, int[] quantidades, double[] precos, int estoqueBaixo) {
        for (int i = 0; i < products.length; i++) {
            if (quantidades[i] < estoqueBaixo) {
                System.out.println("\n" + products[i] + ": " + quantidades[i]);
            }
        }
    }

    static void highestFixedAssetValue(String[] products, int[] quantidades, double[] precos) {

        int highestFixedAssetIndex = 0;
        double highestPrice = 0;
        double recentPrice;

        for (int i = 0; i < products.length; i++) {

            recentPrice = quantidades[i] * precos[i];

            if (i == 0) {
                highestPrice = recentPrice;
                highestFixedAssetIndex = i;
            }

            if (recentPrice > highestPrice) {
                highestPrice = recentPrice;
                highestFixedAssetIndex = i;
            }
        }

        System.out.println("\n=== Maior valor imobilizado ===\n"
                + products[highestFixedAssetIndex] + ": R$" + Math.round(highestPrice));
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        final int estoqueBaixo = 10;

        String[] produtos = { "Caderno", "Caneta", "Mochila", "Lapis", "Borracha" };
        int[] quantidades = { 30, 120, 8, 200, 45 };
        double[] precos = { 24.90, 3.50, 189.90, 1.80, 2.20 };

        boolean continuar = true;
        int productOption;
        int qtdProductOption;

        while (continuar) {

            menu();
            System.out.print("R: ");
            int option = sc.nextInt();

            switch (option) {

                case 1:
                    listProducts(produtos, quantidades, precos);
                    break;

                case 2:
                    do {
                        System.out.print("\nNumero do produto (1 a 5): ");
                        productOption = sc.nextInt();

                        if (productOption < 1 || productOption > 5)
                            System.out.println("\nINFORME UMA OPÇÃO VÁLIDA!");
                        else
                            continue;

                    } while (productOption < 1 || productOption > 5);

                    productOption--;

                    System.out.print("Quantidade: ");
                    qtdProductOption = sc.nextInt();

                    quantidades[(productOption)] += qtdProductOption;

                    System.out.println("Entrada registrada.\n"
                            + produtos[productOption] + ": " + quantidades[productOption]);

                    break;

                case 3:
                    do {

                        System.out.print("\nNumero do produto (1 a 5): ");
                        productOption = sc.nextInt();

                        if (productOption < 1 || productOption > 5)
                            System.out.println("\nINFORME UMA OPÇÃO VÁLIDA!");
                        else
                            continue;

                    } while (productOption < 1 || productOption > 5);

                    productOption--;

                    System.out.print("Quantidade: ");
                    qtdProductOption = sc.nextInt();

                    if (qtdProductOption > quantidades[productOption])
                        System.out.println("\nValor informado é maior que quantidade disponível!");
                    else
                        quantidades[(productOption)] -= qtdProductOption;

                    System.out.println("Baixa registrada.\n"
                            + produtos[productOption] + ": " + quantidades[productOption]);

                    break;
                case 4:
                    System.out.println("\nValor total do estoque: R$" + calcularValorTotal(quantidades, precos));
                    break;
                case 5:
                    listProductsWithLowStock(produtos, quantidades, precos, estoqueBaixo);
                    break;
                case 6:
                    highestFixedAssetValue(produtos, quantidades, precos);
                    break;
                case 7:
                    System.out.println("\n\nSaindo...");
                    continuar = false;
                    break;
                default:
                    System.out.println("\nOpção inválida! Digite uma das opções disponíveis...");
            }
        }
        sc.close();
    }
}
