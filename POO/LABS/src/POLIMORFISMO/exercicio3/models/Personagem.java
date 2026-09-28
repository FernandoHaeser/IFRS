package POLIMORFISMO.exercicio3.models;

public abstract class Personagem {

    protected String nome;
    protected int vida;

    public Personagem(String nome, int vida) {
        this.nome = nome;
        this.vida = vida;
    }

    public String getNome() {
        return nome;
    }

    public int getVida() {
        return vida;
    }

    public boolean estaVivo() {
        return vida > 0;
    }

    protected abstract int calcularDano();

    public void receberDano(int dano) {
        vida = Math.max(0, vida - dano);
    }

    public final void atacar(Personagem alvo) {
        int dano = calcularDano();
        System.out.println(nome + " ataca " + alvo.getNome() + " causando " + dano + " de dano.");
        alvo.receberDano(dano);
    }
}
