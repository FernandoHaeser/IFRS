package lista04.ex02.model;

public class Livro extends Produto {

    public Livro(String nome, Double precoBase) {
        super(nome, precoBase);
    }

    @Override
    public double calcularPrecoFinal() {
        return precoBase - (precoBase * 10 / 100);
    }

    @Override
    public String exibirResumo() {
        return "O produto " + nome +
                " tem um preço base de R$ " + precoBase +
                ", e com desconto você irá pagar: " + calcularPrecoFinal();
    }

}
