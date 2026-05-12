package lista05.ex02;

public class Musica {
    private String titulo;
    private String artista;
    private int duracao;

    public Musica(String titulo, String artista, int duracao) {
        this.titulo = titulo;
        this.artista = artista;
        this.duracao = duracao;
    }

    public String getTitulo() {
        return titulo;
    }

    public String getArtista() {
        return artista;
    }

    public int getDuracao() {
        return duracao;
    }

    public void exibirInformacoes() {
        System.out.println("Música: " + titulo);
        System.out.println("Artista: " + artista);
        System.out.println("Duração: " + duracao + " segundos");
        System.out.println("----------------");
    }
}
