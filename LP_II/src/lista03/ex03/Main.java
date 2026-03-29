package lista03.ex03;

import lista03.ex03.model.Profile;

public class Main {
    public static void main(String[] args) {

        System.out.println("=== TESTE PROFILE ===");

        // criação perfil adulto
        Profile p1 = new Profile("Fernando", 25);

        System.out.println("\nPerfil 1:");
        System.out.println("ID: " + p1.getIdPerfil());
        System.out.println("Nome: " + p1.getNome());
        System.out.println("Idade: " + p1.getIdade());
        System.out.println("Restrição ativa: " + p1.isRestricaoAtiva()); // false

        // criação perfil menor de idade
        Profile p2 = new Profile("João", 15);

        System.out.println("\nPerfil 2:");
        System.out.println("ID: " + p2.getIdPerfil());
        System.out.println("Nome: " + p2.getNome());
        System.out.println("Idade: " + p2.getIdade());
        System.out.println("Restrição ativa: " + p2.isRestricaoAtiva()); // true

        // criação perfil criança
        Profile p3 = new Profile("Ana", 10);

        System.out.println("\nPerfil 3 (criança):");
        System.out.println("ID: " + p3.getIdPerfil());
        System.out.println("Nome: " + p3.getNome());
        System.out.println("Idade: " + p3.getIdade());
        System.out.println("Restrição ativa: " + p3.isRestricaoAtiva()); // true

        // alterar nome (permitido)
        System.out.println("\nAlterando nome do Perfil 1 (permitido):");
        p1.setNome("Fernando Silva");
        System.out.println("Novo nome: " + p1.getNome());

        // tentar alterar nome de criança (<12)
        p3 = new Profile("Ana", 10);

        System.out.println("\nPerfil 3 (criança):");
        System.out.println("ID: " + p3.getIdPerfil());
        System.out.println("Nome inicial: " + p3.getNome());

        System.out.println("Tentando alterar nome...");
        p3.setNome("Ana Souza"); // erro

        System.out.println("Nome após tentativa: " + p3.getNome());

        // mudar idade e ver impacto na restrição
        System.out.println("\nAlterando idade do Perfil 2:");
        p2.setIdade(20);

        System.out.println("Nova idade: " + p2.getIdade());
        System.out.println("Restrição ativa: " + p2.isRestricaoAtiva()); // false
    }
}