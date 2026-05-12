package lista05.ex03;

public class Estudante {

    private String nome;
    private Double notaFinal;

    public Estudante(String nome, Double notaFinal) {
        this.nome = nome;
        this.notaFinal = notaFinal;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public Double getNotaFinal() {
        return notaFinal;
    }

    public void setNotaFinal(Double notaFinal) {
        this.notaFinal = notaFinal;
    }

    public boolean isAprovado() {
        return notaFinal >= 7;
    }

    public String exibirInformacoes() {
        return "Estudante [nome=" + nome + ", notaFinal=" + notaFinal + "]";
    }
}