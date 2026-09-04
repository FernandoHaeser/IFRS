package LAB03.exercicioPratico3;

import java.util.UUID;

public class Usuario {
    private String idPerfil, nome;
    private int idade;
    private boolean restricaoAtiva;

    public Usuario(String nome, int idade) {
        this.nome = nome;
        this.idade = idade;
        this.idPerfil = UUID.randomUUID().toString(); // gera valor aleatorio para o ID do user.
        this.restricaoAtiva = isRestricaoAtiva();
    }

    public String getIdPerfil() {
        return idPerfil;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public int getIdade() {
        return idade;
    }

    public void setIdade(int idade) {
        this.idade = idade;
        isRestricaoAtiva();
    }

    public boolean isRestricaoAtiva() {
        if (idade >= 18) {
            restricaoAtiva = false;
            return restricaoAtiva;
        } else {
            restricaoAtiva = true;
            return restricaoAtiva;
        }
    }

    @Override
    public String toString() {
        return "\n=== INFOS DA CONTA ===" +
                "\nID: " + idPerfil +
                "\nNome: " + nome +
                "\nIdade: " + idade +
                "\nConta KIDS: " + ((restricaoAtiva) ? "Sim" : "Não") +
                "\n=======================\n";
    }

}
