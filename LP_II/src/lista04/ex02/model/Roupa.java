package lista04.ex02.model;

public class Roupa extends Produto {

    public int quantidadePecas;

    public Roupa(String nome, Double precoBase, int quantidadePecas) {
        super(nome, precoBase);
        this.quantidadePecas = quantidadePecas;
    }

    @Override
    public double calcularPrecoFinal() {
        if (quantidadePecas >= 1 && quantidadePecas <= 2)
            return (precoBase - (precoBase * 5 / 100));
        else if (quantidadePecas >= 3)
            return (precoBase - (precoBase * 15 / 100));
        else
            return 0;
    }

    @Override
    public String exibirResumo() {
        return "O produto " + nome +
                " tem um preço base de R$ " + precoBase +
                ", e com desconto você irá pagar: " + calcularPrecoFinal();
    }
}
