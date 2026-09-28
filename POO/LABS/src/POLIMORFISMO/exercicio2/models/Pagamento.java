package POLIMORFISMO.exercicio2.models;

public abstract class Pagamento {

    protected double valor;

    public Pagamento(double valor) {
        this.valor = valor;
    }

    public double getValor() {
        return valor;
    }

    public double calcularValorFinal() {
        return valor;
    }

    public abstract String descrever();

}
