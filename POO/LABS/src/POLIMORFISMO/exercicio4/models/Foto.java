package POLIMORFISMO.exercicio4.models;

public class Foto extends Publicacao {

    private String legenda;
    private int compartilhamentos;

    public Foto(String autor, int curtidas, int comentarios, String legenda, int compartilhamentos) {
        super(autor, curtidas, comentarios);
        this.legenda = legenda;
        this.compartilhamentos = compartilhamentos;
    }

    @Override
    public String getPreview() {
        return "[foto] " + legenda;
    }

    @Override
    public int getEngajamento() {
        return super.getEngajamento() + compartilhamentos * 3;
    }
}
