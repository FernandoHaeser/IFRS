package POLIMORFISMO.exercicio1.models;

public class Meia extends Ingresso {

    public Meia(String comprador, double precoBase) {
        super(comprador, precoBase);
    }

    @Override
    public double calcularPreco() {
        return precoBase / 2;
    }
}
