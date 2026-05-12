package lista05.ex03;

public class Main {
    public static void main(String[] args) {
        Turma turma = new Turma("ADS - 3º Semestre");

        turma.adicionarEstudante(new Estudante("Ana", 8.5));
        turma.adicionarEstudante(new Estudante("Bruno", 5.0));
        turma.adicionarEstudante(new Estudante("Carla", 9.2));
        turma.adicionarEstudante(new Estudante("Diego", 4.7));

        turma.exibirEstudantesAprovados();
        System.out.println("\nQuantidade de reprovados: " + turma.qntdEstudantesReprovados());
        System.out.printf("Média geral da turma: %.2f%n", turma.mediaGeralTurma());
    }
}