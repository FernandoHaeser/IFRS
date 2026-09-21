package LAB05.models;

public class Cliente {

    private String nome, cpf;
    private ContaBancaria conta;

    public Cliente(String nome, String cpf, ContaBancaria conta) {
        this.nome = nome;
        this.cpf = cpf;
        this.conta = conta;
    }

    public String exibirDados() {
        return "Nome: " + nome + "\nCPF: " + cpf + "\n" + conta.exibirDadosConta();
    }
}
