package LAB05.models;

public class ContaPoupanca extends ContaBancaria {

    private double taxaRendimento;

    public ContaPoupanca(String numeroConta, double saldo, double taxaRendimento) {
        super(numeroConta, saldo);
        this.taxaRendimento = taxaRendimento;
    }

    @Override
    public double calcularRendimento() {
        double rendimento = saldo * taxaRendimento / 100;
        saldo += rendimento;
        return rendimento;
    }
}
