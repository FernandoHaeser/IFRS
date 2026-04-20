package lista04.ex04.model;

public class Assassino extends Personagem {
    private int furtividade;

    public Assassino(String nome, int forca, int defesa, int vida, int furtividade) {
        super(nome, forca, defesa, vida);
        this.furtividade = furtividade;
    }

    @Override
    public int calcularAtaque() {
        int dano = forca + furtividade;
        if (furtividade > 20) {
            dano *= 2;
            System.out.println("[Assassino] " + nome + " ataque furtivo critico! Dano dobrado: " + dano);
        } else {
            System.out.println("[Assassino] " + nome + " ataca pelas sombras. Dano: " + dano);
        }
        return dano;
    }

    @Override
    public void exibirStatus() {
        super.exibirStatus();
        System.out.println("Classe      : Assassino");
        System.out.println("Furtividade : " + furtividade);
        System.out.println("=============================");
    }
}