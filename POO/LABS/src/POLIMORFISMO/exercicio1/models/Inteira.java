package POLIMORFISMO.exercicio1.models;

public class Inteira extends Ingresso {

    public Inteira(String comprador, double precoBase) {
        super(comprador, precoBase);
    }

    @Override
    public double calcularPreco() {
        return precoBase;
    }
}
