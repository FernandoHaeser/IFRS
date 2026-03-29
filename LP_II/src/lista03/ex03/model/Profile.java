package lista03.ex03.model;

import java.util.UUID;

public class Profile {

    private String idPerfil;
    private String nome;
    private int idade;
    private boolean restricaoAtiva;

    public Profile(String nome, int idade) {
        this.idPerfil = UUID.randomUUID().toString();
        this.nome = nome;
        setIdade(idade); // Chama o setter para aplicar a lógica de restrição
    }

    public String getIdPerfil() {
        return idPerfil;
    }

    public String getNome() {
        return nome;
    }

    public int getIdade() {
        return idade;
    }

    public boolean isRestricaoAtiva() {
        return restricaoAtiva;
    }

    public void setIdade(int idade) {
        this.idade = idade;
        this.restricaoAtiva = idade < 18;
    }

    public void setNome(String nome) {
        if (this.idade < 12) {
            System.out.println("Erro: Não é permitido alterar o nome do perfil para crianças menores de 12 anos.");
        } else {
            this.nome = nome;
        }
    }
}