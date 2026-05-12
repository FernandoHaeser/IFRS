3. Turma com Lista de Estudantes

Crie um programa em Java para representar uma turma. Neste exercício, você deve usar uma classe com ArrayList como atributo.

Crie duas classes:

Estudante
Turma
A classe Estudante deve ter:

private String nome;
private double notaFinal;
A classe Estudante deve ter:

construtor;
getters;
método exibirInformacoes();
método estaAprovado(), que retorna true se a nota for maior ou igual a 7.
Exemplo do método estaAprovado:

public boolean estaAprovado() {
    return notaFinal >= 7;
}
A classe Turma deve ter:

private String nome;
private ArrayList<Estudante> estudantes;
No construtor da turma, a lista deve ser inicializada:

this.estudantes = new ArrayList<>();
A classe Turma deve ter métodos para:

adicionar estudante;
exibir todos os estudantes;
exibir apenas estudantes aprovados;
calcular a média geral da turma;
contar quantos estudantes estão reprovados.
Exemplo de uso no Main:

public class Main {
    public static void main(String[] args) {
        Turma turma = new Turma("Linguagem de Programação II");

        turma.adicionarEstudante(new Estudante("Ana", 8.5));
        turma.adicionarEstudante(new Estudante("Bruno", 6.0));
        turma.adicionarEstudante(new Estudante("Carla", 9.2));
        turma.adicionarEstudante(new Estudante("Diego", 5.5));

        turma.exibirEstudantes();
        turma.exibirAprovados();

        System.out.println("Média da turma: " + turma.calcularMedia());
        System.out.println("Reprovados: " + turma.contarReprovados());
    }
}