package POLIMORFISMO.exercicio3.models;

public class Arqueiro extends Personagem {

    private int flechas;
    final private int dano = 5;
    final private int danoFlecha = 15;

    public Arqueiro(String nome) {
        super(nome, 80);
        flechas = 3;
    }

    @Override
    protected int calcularDano() {
        if (flechas > 0) {
            flechas--;
            return danoFlecha;
        }
        return dano;
    }
}
