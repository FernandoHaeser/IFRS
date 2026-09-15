package LAB04.exercise1;

public class Cupom {

    private double descontoPercentual;

    public Cupom(double descontoPercentual) {
        this.descontoPercentual = descontoPercentual;
    }

    public double aplicarDesconto(double valor) {
        return valor - (valor * (descontoPercentual / 100));
    }

}
