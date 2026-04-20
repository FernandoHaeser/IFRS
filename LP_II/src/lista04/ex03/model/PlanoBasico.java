package lista04.ex03.model;

public class PlanoBasico extends Plano {

    public PlanoBasico(String nomeCliente, double valorBase) {
        super(nomeCliente, valorBase);
    }

    @Override
    public double calcularMensalidade() {
        return valorBase;
    }
}
