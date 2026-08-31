package LAB02.AuroraPaper;

public class Exercicio1 {
    public static void main(String[] args) {

        String nomeProduto = "Caderno universitário";
        int qtdCadernosUniversitarios = 30;
        double precoCadernoUniversitario = 24.90;
        double valorFrete = 12.50;
        int qtdSuportadaPorCaixa = 12;

        double subtotal = qtdCadernosUniversitarios * precoCadernoUniversitario;
        double total = subtotal + valorFrete;

        int caixasCheias = qtdCadernosUniversitarios / qtdSuportadaPorCaixa;

        int unidadesSoltas = qtdCadernosUniversitarios - (qtdSuportadaPorCaixa * caixasCheias);

        System.out.println("Produto: " + nomeProduto);
        System.out.println("Quantidade: " + qtdCadernosUniversitarios + " unidades");
        System.out.println("Subtotal: R$ " + subtotal);
        System.out.println("Frete: R$ " + valorFrete);
        System.out.println("Total: R$ " + total);
        System.out.println("Caixas cheias: " + caixasCheias);
        System.out.println("Unidades soltas: " + unidadesSoltas);

        /*
         * Saída esperada:
         * Produto: Caderno universitario
         * Quantidade: 30 unidades
         * Subtotal: R$ 747,00
         * Frete: R$ 12,50
         * Total: R$ 759,50
         * Caixas cheias: 2
         * Unidades soltas: 6
         */
    }
}
