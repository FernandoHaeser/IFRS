package POLIMORFISMO.exercicio3.models;

public class Mago extends Personagem {

    private int mana;
    final private int custoMana = 10;
    final private int danoMana = 20;
    final private int danoNormal = 3;

    public Mago(String nome) {
        super(nome, 70);
        mana = 30;
    }

    @Override
    protected int calcularDano() {
        if (mana >= custoMana) {
            mana -= custoMana;
            return danoMana;
        }
        return danoNormal;
    }
}
