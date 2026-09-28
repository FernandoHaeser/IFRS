package POLIMORFISMO.exercicio1.models;

public class Vip extends Ingresso {

    public Vip(String comprador, double precoBase) {
        super(comprador, precoBase);
    }

    @Override
    public double calcularPreco() {
        return precoBase + 150;
    }

}
