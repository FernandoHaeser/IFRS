package LAB04.exercise4;

public class Perfil {

    private String nome;
    private ConfiguracoesPrivacidade configuracoes;

    public Perfil(String nome) {
        this.nome = nome;
        this.configuracoes = new ConfiguracoesPrivacidade();
    }

    public void tornarPublico() {
        configuracoes.setPerfilPublico(true);
    }

    public void tornarPrivado() {
        configuracoes.setPerfilPublico(false);
    }

    public boolean isPerfilPublico() {
        return configuracoes.isPerfilPublico();
    }

    public String getNome() {
        return nome;
    }
}
