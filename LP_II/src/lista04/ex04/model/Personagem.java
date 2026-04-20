package lista04.ex04.model;

public abstract class Personagem {
    protected String nome;
    protected int forca;
    protected int defesa;
    protected int vida;

    public Personagem(String nome, int forca, int defesa, int vida) {
        this.nome = nome;
        this.forca = forca;
        this.defesa = defesa;
        this.vida = vida;
    }

    public abstract int calcularAtaque();

    public void receberDano(int dano) {
        int danoFinal = dano - defesa;
        if (danoFinal < 0) danoFinal = 0;
        vida -= danoFinal;
        if (vida < 0) vida = 0;
        System.out.println(nome + " recebeu " + danoFinal + " de dano (defesa=" + defesa + "). Vida restante: " + vida);
    }

    public void exibirStatus() {
        System.out.println("=============================");
        System.out.println("Nome   : " + nome);
        System.out.println("Forca  : " + forca);
        System.out.println("Defesa : " + defesa);
        System.out.println("Vida   : " + vida);
    }
}