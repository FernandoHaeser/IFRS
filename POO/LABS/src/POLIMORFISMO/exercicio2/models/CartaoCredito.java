package POLIMORFISMO.exercicio2.models;

public class CartaoCredito extends Pagamento {

    private boolean parcelado;
    private int parcelas;
    private final double juros = 0.0199;

    public CartaoCredito(double valor, boolean parcelado, int parcelas) {
        super(valor);
        this.parcelado = parcelado;
        this.parcelas = parcelas;
    }

    @Override
    public double calcularValorFinal() {
        if (parcelado) {
            return valor * Math.pow(1 + juros, parcelas);
        }

        return valor;
    }

    @Override
    public String descrever() {
        double valorFinal = calcularValorFinal();
        double valorParcela = valorFinal / parcelas;

        return "Cartão de crédito | Valor: " + parcelas + " parcelas de R$" + String.format("%.2f", valorParcela);
    }
}
