package POLIMORFISMO.exercicio2.models;

public class Pix extends Pagamento {

    final private int desconto = 5;

    public Pix(double valor) {
        super(valor);
    }

    @Override
    public double calcularValorFinal() {
        double descontoAplicado = valor * (desconto / 100.0);
        return valor - descontoAplicado;
    }

    @Override
    public String descrever() {
        return "Pagamento via PIX | Valor: R$" + String.format("%.2f", calcularValorFinal());
    }
}
