package LAB04.exercise4;

public class ConfiguracoesPrivacidade {

    private boolean perfilPublico;
    private boolean permiteNotificacoes;

    public ConfiguracoesPrivacidade() {
        this.perfilPublico = false;
        this.permiteNotificacoes = true;
    }

    public void setPerfilPublico(boolean perfilPublico) {
        this.perfilPublico = perfilPublico;
    }

    public boolean isPerfilPublico() {
        return perfilPublico;
    }

    public void setPermiteNotificacoes(boolean permiteNotificacoes) {
        this.permiteNotificacoes = permiteNotificacoes;
    }

    public boolean isPermiteNotificacoes() {
        return permiteNotificacoes;
    }
}
