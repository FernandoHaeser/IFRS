package lista04.ex02.model;

public class Alimento extends Produto {

    int diasParaVencimento;

    public Alimento(String nome, Double precoBase, int diasParaVencimento) {
        super(nome, precoBase);
        this.diasParaVencimento = diasParaVencimento;
    }

    @Override
    public double calcularPrecoFinal() {
        if (diasParaVencimento >= 0 && diasParaVencimento <= 3)
            return precoBase - (precoBase * 30 / 100);
        else
            return precoBase - (precoBase * 8 / 100);
    }

    @Override
    public String exibirResumo() {
        return "O produto " + nome +
                " tem um preço base de R$ " + precoBase +
                ", e com desconto você irá pagar: " + calcularPrecoFinal();
    }
}
