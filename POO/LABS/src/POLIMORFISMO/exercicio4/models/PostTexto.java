package POLIMORFISMO.exercicio4.models;

public class PostTexto extends Publicacao {

    private String texto;

    public PostTexto(String autor, int curtidas, int comentarios, String texto) {
        super(autor, curtidas, comentarios);
        this.texto = texto;
    }

    @Override
    public String getPreview() {
        return "\"" + texto + "\"";
    }
}
