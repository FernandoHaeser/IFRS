package LAB04.exercise2;

public class Hospede {

    private String nome;
    private Quarto quartoAtual;

    public Hospede(String nome) {
        this.nome = nome;
        this.quartoAtual = null;
    }

    public void realizarCheckIn(Quarto quarto) {
        this.quartoAtual = quarto;
    }

    public Quarto getQuartoAtual() {
        return quartoAtual;
    }

    public String getNome() {
        return nome;
    }

    public String status() {
        if (quartoAtual == null) {
            return nome + " não está hospedado em nenhum quarto.";
        }
        return nome + " está no quarto " + quartoAtual.getNumero() + ".";
    }
}
