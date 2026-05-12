package lista05.ex03;

import java.util.ArrayList;

public class Turma {

    private String nome;
    private ArrayList<Estudante> estudantes;

    public Turma(String nome) {
        this.nome = nome;
        this.estudantes = new ArrayList<>();
    }

    public Turma(String nome, ArrayList<Estudante> estudantes) {
        this.nome = nome;
        this.estudantes = estudantes;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public ArrayList<Estudante> getEstudantes() {
        return estudantes;
    }

    public void setEstudantes(ArrayList<Estudante> estudantes) {
        this.estudantes = estudantes;
    }

    public void adicionarEstudante(Estudante estudante) {
        this.estudantes.add(estudante);
    }

    public void exibirEstudantesAprovados() {
        System.out.println("Estudantes aprovados da turma " + nome + ":");
        boolean encontrou = false;
        for (Estudante e : estudantes) {
            if (e.isAprovado()) {
                System.out.println(e.exibirInformacoes());
                encontrou = true;
            }
        }
        if (!encontrou) {
            System.out.println("Nenhum estudante aprovado.");
        }
    }

    public int qntdEstudantesReprovados() {
        int reprovados = 0;
        for (Estudante e : estudantes) {
            if (!e.isAprovado()) {
                reprovados++;
            }
        }
        return reprovados;
    }

    public double mediaGeralTurma() {
        if (estudantes.isEmpty()) {
            return 0.0;
        }
        double soma = 0;
        for (Estudante e : estudantes) {
            soma += e.getNotaFinal();
        }
        return soma / estudantes.size();
    }
}