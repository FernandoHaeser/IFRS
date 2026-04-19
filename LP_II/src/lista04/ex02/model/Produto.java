package lista04.ex02.model;

public class Produto {

    public String nome;
    public double precoBase;

    public Produto(String nome, double precoBase) {
        this.nome = nome;
        this.precoBase = precoBase;
    }

    public double calcularPrecoFinal() {
        return precoBase;
    }

    public String exibirResumo() {
        return "O produto " + nome + " tem um preço base de R$ " + precoBase;
    }
}
