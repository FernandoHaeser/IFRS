package LAB04.exercise1;

public class Pedido {

    private double valorBruto;

    public Pedido(double valorBruto) {
        this.valorBruto = valorBruto;
    }

    public double getValorBruto() {
        return valorBruto;
    }

    public double fechar(Cupom cupom) {
        return cupom.aplicarDesconto(valorBruto);
    }
}
