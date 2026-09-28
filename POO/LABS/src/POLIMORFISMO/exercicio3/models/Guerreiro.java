package POLIMORFISMO.exercicio3.models;

public class Guerreiro extends Personagem {

    final private int dano = 12;
    final private int absorcaoDeDano = 4;

    public Guerreiro(String nome) {
        super(nome, 100);
    }

    @Override
    protected int calcularDano() {
        return dano;
    }

    @Override
    public void receberDano(int dano) {
        super.receberDano(Math.max(0, dano - absorcaoDeDano));
    }
}
