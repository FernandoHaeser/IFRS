package POLIMORFISMO.exercicio4.models;

public class Feed {

    private Publicacao[] publicacoes;
    private int quantidade;

    public Feed(int capacidade) {
        this.publicacoes = new Publicacao[capacidade];
        this.quantidade = 0;
    }

    public void publicar(Publicacao publicacao) {
        publicacoes[quantidade] = publicacao;
        quantidade++;
    }

    public void exibir() {
        for (int i = 0; i < quantidade; i++) {
            Publicacao publicacao = publicacoes[i];
            System.out.println(publicacao.getAutor() + " - " + publicacao.getPreview()
                    + " (engajamento: " + publicacao.getEngajamento() + ")");
        }
    }

    public Publicacao getMaisEngajada() {
        Publicacao maisEngajada = publicacoes[0];
        for (int i = 1; i < quantidade; i++) {
            if (publicacoes[i].getEngajamento() > maisEngajada.getEngajamento())
                maisEngajada = publicacoes[i];
        }
        return maisEngajada;
    }
}
