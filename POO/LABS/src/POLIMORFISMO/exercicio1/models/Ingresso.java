package POLIMORFISMO.exercicio1.models;

public abstract class Ingresso {

    protected String comprador;
    protected double precoBase;

    public Ingresso(String comprador, double precoBase) {
        this.comprador = comprador;
        this.precoBase = precoBase;
    }

    public String getComprador() {
        return comprador;
    }

    public double calcularPreco() {
        return precoBase;
    }
}
