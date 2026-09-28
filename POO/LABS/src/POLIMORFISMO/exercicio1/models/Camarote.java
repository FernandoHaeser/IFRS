package POLIMORFISMO.exercicio1.models;

public class Camarote extends Vip {

    public Camarote(String comprador, double precoBase) {
        super(comprador, precoBase);
    }

    @Override
    public double calcularPreco() {
        return super.calcularPreco() + 150;
    }
}
