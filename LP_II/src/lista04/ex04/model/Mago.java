package lista04.ex04.model;

public class Mago extends Personagem {
    private int mana;

    public Mago(String nome, int forca, int defesa, int vida, int mana) {
        super(nome, forca, defesa, vida);
        this.mana = mana;
    }

    @Override
    public int calcularAtaque() {
        int dano;
        if (mana >= 20) {
            dano = forca * 3;
            mana -= 20;
            System.out.println("[Mago] " + nome + " lanca magia poderosa! Dano: " + dano + " | Mana restante: " + mana);
        } else {
            dano = forca;
            System.out.println("[Mago] " + nome + " ataca sem mana suficiente. Dano: " + dano + " | Mana: " + mana);
        }
        return dano;
    }

    @Override
    public void exibirStatus() {
        super.exibirStatus();
        System.out.println("Classe : Mago");
        System.out.println("Mana   : " + mana);
        System.out.println("=============================");
    }
}