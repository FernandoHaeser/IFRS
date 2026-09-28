package POLIMORFISMO.exercicio4.models;

public class Video extends Publicacao {

    private String titulo;
    private int duracaoSegundos;
    private int visualizacoesCompletas;

    public Video(String autor, int curtidas, int comentarios, String titulo, int duracaoSegundos,
            int visualizacoesCompletas) {
        super(autor, curtidas, comentarios);
        this.titulo = titulo;
        this.duracaoSegundos = duracaoSegundos;
        this.visualizacoesCompletas = visualizacoesCompletas;
    }

    @Override
    public String getPreview() {
        int minutos = duracaoSegundos / 60;
        int segundos = duracaoSegundos % 60;
        String duracao = String.format("%dmin%02ds", minutos, segundos);
        return "[video " + duracao + "] " + titulo;
    }

    @Override
    public int getEngajamento() {
        return super.getEngajamento() + visualizacoesCompletas / 10;
    }
}
