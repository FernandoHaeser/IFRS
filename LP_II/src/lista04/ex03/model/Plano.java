package lista04.ex03.model;

public abstract class Plano {
    protected String nomeCliente;
    protected double valorBase;

    public Plano(String nomeCliente, double valorBase) {
        this.nomeCliente = nomeCliente;
        this.valorBase = valorBase;
    }

    public abstract double calcularMensalidade();

    public void exibirPlano() {
        System.out.println("Cliente: " + nomeCliente);
        System.out.println("Tipo de Plano: " + this.getClass().getSimpleName());
        System.out.printf("Valor Final: R$ %.2f%n", calcularMensalidade());
        System.out.println("-----------------------------");
    }
}
