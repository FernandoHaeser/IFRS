package lista04.ex04.model;

public class Guerreiro extends Personagem {

    public Guerreiro(String nome, int forca, int defesa, int vida) {
        super(nome, forca, defesa, vida);
    }

    @Override
    public int calcularAtaque() {
        int dano = forca * 2;
        System.out.println("[Guerreiro] " + nome + " ataca com forca bruta! Dano: " + dano);
        return dano;
    }

    @Override
    public void exibirStatus() {
        super.exibirStatus();
        System.out.println("Classe : Guerreiro");
        System.out.println("=============================");
    }
}
