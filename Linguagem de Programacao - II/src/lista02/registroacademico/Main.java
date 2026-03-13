package lista02.registroacademico;

public class Main {

    public static void main(String[] args) {

        Aluno aluno = new Aluno();

        aluno.nome = "Fernando Augusto Haeser";
        aluno.matricula = 2025197020;
        aluno.notaSemestre = 9.99;

        System.out.println((aluno.verificarAprovacao(aluno.notaSemestre) ? "Aprovado!" : "Reprovado!"));

        /*

        op. ternário para simplificar o código, mas poderia ter sido feito assim:

        double nota = aluno.notaSemestre;

        if (aluno.verificarAprovacao(nota))
            System.out.println("Aprovado!");
        else
            System.out.println("Reprovado!");

        */
    }
}
