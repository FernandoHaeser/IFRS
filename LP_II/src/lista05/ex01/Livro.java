package lista05.ex01;

public class Livro {

    private String titulo;
    private String autor;
    private Long anoPublicacao;

    public Livro(String titulo, String autor, Long anoPublicacao) {
        this.titulo = titulo;
        this.autor = autor;
        this.anoPublicacao = anoPublicacao;
    }

    public String getTitulo() {
        return titulo;
    }

    public void setTitulo(String titulo) {
        this.titulo = titulo;
    }

    public String getAutor() {
        return autor;
    }

    public void setAutor(String autor) {
        this.autor = autor;
    }

    public Long getAnoPublicacao() {
        return anoPublicacao;
    }

    public void setAnoPublicacao(Long anoPublicacao) {
        this.anoPublicacao = anoPublicacao;
    }

    @Override
    public String toString() {
        return "Titulo: " + titulo + "\n"
                + "Autor: " + autor + "\n"
                + "Ano do Livro: " + anoPublicacao;
    }

}
