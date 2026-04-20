package lista04.ex03.model;

public class PlanoEmpresarial extends Plano {

    private int quantidadeLicencas;

    public PlanoEmpresarial(String nomeCliente, double valorBase, int quantidadeLicencas) {
        super(nomeCliente, valorBase);
        this.quantidadeLicencas = quantidadeLicencas;
    }

    @Override
    public double calcularMensalidade() {
        double total = valorBase + (quantidadeLicencas * 18);
        if (quantidadeLicencas > 10) {
            total *= 0.88;
        }
        return total;
    }
}
