package lista04.ex03.model;

public class PlanoFamiliar extends Plano {

    private int quantidadePessoas;

    public PlanoFamiliar(String nomeCliente, double valorBase, int quantidadePessoas) {
        super(nomeCliente, valorBase);
        this.quantidadePessoas = quantidadePessoas;
    }

    @Override
    public double calcularMensalidade() {
        double total = valorBase + (quantidadePessoas - 1) * 25;
        if (quantidadePessoas >= 4) {
            total *= 0.90;
        }
        return total;
    }
}
