package LAB02.AuroraPaper;

import java.util.Scanner;

public class Exercicio6 {

    // calcula quanto faltou pra bater a meta
    static double faltouPraMeta(double venda, double meta) {
        if (venda > meta) {
            return 0;
        } else {
            return meta - venda;
        }
    }

    // calcula comissão
    static double calcularComissao(double venda, double meta) {
        if (venda < meta)
            return (venda * 0.03);
        else if (venda > meta && venda < (meta * 1.5))
            return (venda * 0.05);
        else
            return (venda * 0.07);
    }

    // metódo que retorna se o valor da venda está abaixo, atingido ou acima da meta
    static String definirSituacao(double venda, double meta) {
        if (venda < meta)
            return "Abaixo";
        else if (venda > meta && venda < (meta * 1.5))
            return "Atingiu";
        else
            return "Superou";
    }

    // soma todas vendas
    static double somar(double[] valores) {
        double somaTotal = 0;

        for (double valor : valores) {
            somaTotal += valor;
        }

        return somaTotal;
    }

    // retorna o indice da maior venda (ex: 0, 2, 5, 9)
    static int indiceDoMaior(double[] valores) {
        int maiorIndice = 0;
        double maiorValor = 0;

        for (int i = 0; i < valores.length; i++) {
            if (i == 0) {
                maiorIndice = i;
                maiorValor = valores[i];
            }

            if (valores[i] > maiorValor) {
                maiorIndice = i;
                maiorValor = valores[i];
            }
        }
        return maiorIndice;
    }

    // retorna a quantidade de vendedores que bateram a meta
    static int bateramMeta(double[] vendas, double meta) {
        int bateramMeta = 0;
        for (double venda : vendas) {
            if (venda > meta)
                bateramMeta++;
            else
                continue;
        }
        return bateramMeta;
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        String[] vendedores = { "Ana", "Bruno", "Carla", "Diego", "Elisa" };
        double[] vendas = { 12500.00, 8300.50, 15750.00, 6200.00, 9980.25 };
        double metaMes = -1;

        while (metaMes < 0) {
            System.out.print("\nDefina a meta do mês: ");
            metaMes = sc.nextDouble();

            if (metaMes < 0) {
                System.out.println("\nA meta precisa ser maior que zero.");
                continue;
            }
        }

        double totalVendido = somar(vendas);
        double mediaPorVendedor = totalVendido / vendedores.length;
        int melhorVendedor = indiceDoMaior(vendas);
        int numeroDeVendedores = vendedores.length;
        int bateramMeta = bateramMeta(vendas, metaMes);

        System.out.println("\nMeta do mes: R$ " + String.format("%.2f", metaMes));

        // pula linha
        System.out.println();

        System.out.println("Vendedor |  Vendas     | Comissão   | Faltou p/ Meta  | Situação");
        for (int i = 0; i < vendedores.length; i++) {
            System.out.printf(
                    "%-8s | R$ %8.2f | R$ %7.2f | R$ %12.2f | %s%n",
                    vendedores[i],
                    vendas[i],
                    calcularComissao(vendas[i], metaMes),
                    faltouPraMeta(vendas[i], metaMes),
                    definirSituacao(vendas[i], metaMes));
        }

        System.out.println("\nTotal vendido: R$ " + String.format("%.2f", totalVendido));
        System.out.println("Media por vendedor: R$ " + String.format("%.2f", mediaPorVendedor));
        System.out.println("Bateram a meta: " + bateramMeta + " de " + numeroDeVendedores);
        System.out.println("Melhor vendedor: " + vendedores[melhorVendedor]);

        sc.close();
    }
}
