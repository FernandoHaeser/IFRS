package LAB05.models;

public class ContaEspecial extends ContaBancaria {

    private double limite;

    public ContaEspecial(String numeroConta, double saldo, double limite) {
        super(numeroConta, saldo);
        this.limite = limite;
    }

    public double sacarComLimite(double valor) {
        return ((saldo + limite) < valor) ? saldo : (saldo -= valor);
    }

    @Override
    public double calcularRendimento() {
        return 0;
    }
}
