package lista04.ex02.model;

public class Eletronico extends Produto {

    public Eletronico(String nome, Double precoBase) {
        super(nome, precoBase);
    }

    @Override
    public double calcularPrecoFinal() {
        return (precoBase - (precoBase * 5 / 100)) + 20;
    }

    @Override
    public String exibirResumo() {
        return "O produto " + nome +
                " tem um preço base de R$ " + precoBase +
                ", e com desconto você irá pagar: " + calcularPrecoFinal();
    }
}
