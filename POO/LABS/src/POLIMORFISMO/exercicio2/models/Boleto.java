package POLIMORFISMO.exercicio2.models;

public class Boleto extends Pagamento {

    final double taxaEmissao = 3.5;

    public Boleto(double valor) {
        super(valor);
    }

    @Override
    public double calcularValorFinal() {
        return valor + taxaEmissao;
    }

    @Override
    public String descrever() {
        return "Pagamento no Boleto | Valor: " + String.format("%.2f", calcularValorFinal());
    }
}
