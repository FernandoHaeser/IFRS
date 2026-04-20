package lista04.ex03.model;

public class PlanoEstudante extends Plano {

    public PlanoEstudante(String nomeCliente, double valorBase) {
        super(nomeCliente, valorBase);
    }

    @Override
    public double calcularMensalidade() {
        return valorBase * 0.60;
    }
}
