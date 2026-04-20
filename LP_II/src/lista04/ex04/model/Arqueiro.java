package lista04.ex04.model;

public class Arqueiro extends Personagem {
    private int precisao;

    public Arqueiro(String nome, int forca, int defesa, int vida, int precisao) {
        super(nome, forca, defesa, vida);
        this.precisao = precisao;
    }

    @Override
    public int calcularAtaque() {
        int dano = forca + precisao;
        if (precisao > 15) {
            dano += 10;
            System.out.println("[Arqueiro] " + nome + " acerto preciso! +10 bonus. Dano: " + dano);
        } else {
            System.out.println("[Arqueiro] " + nome + " atira uma flecha. Dano: " + dano);
        }
        return dano;
    }

    @Override
    public void exibirStatus() {
        super.exibirStatus();
        System.out.println("Classe  : Arqueiro");
        System.out.println("Precisao: " + precisao);
        System.out.println("=============================");
    }
}
