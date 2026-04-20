package lista04.ex03.model;

public class PlanoPremium extends Plano {

    public PlanoPremium(String nomeCliente, double valorBase) {
        super(nomeCliente, valorBase);
    }

    @Override
    public double calcularMensalidade() {
        return (valorBase * 1.15) + 12.00;
    }
}
