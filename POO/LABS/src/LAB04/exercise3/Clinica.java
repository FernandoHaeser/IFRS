package LAB04.exercise3;

public class Clinica {

    private String nome;
    private Medico[] corpoClinico;
    private int quantidadeMedicos;

    public Clinica(String nome) {
        this.nome = nome;
        this.corpoClinico = new Medico[10];
        this.quantidadeMedicos = 0;
    }

    public void contratar(Medico medico) {
        corpoClinico[quantidadeMedicos] = medico;
        quantidadeMedicos++;
    }

    public String resumoCorpoClinico() {
        String resumo = "Corpo clínico da " + nome + ":";
        for (int i = 0; i < quantidadeMedicos; i++) {
            resumo = resumo + "\n- " + corpoClinico[i].getNome() + " (CRM " + corpoClinico[i].getCrm() + ")";
        }
        return resumo;
    }
}
