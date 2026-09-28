package POLIMORFISMO.exercicio4.models;

public abstract class Publicacao {

    protected String autor;
    protected int curtidas;
    protected int comentarios;

    public Publicacao(String autor, int curtidas, int comentarios) {
        this.autor = autor;
        this.curtidas = curtidas;
        this.comentarios = comentarios;
    }

    public String getAutor() {
        return autor;
    }

    public abstract String getPreview();

    public int getEngajamento() {
        return curtidas + comentarios * 2;
    }
}
