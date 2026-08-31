package LAB02.ListOfExercises.exercise2;

public class Aluno {
    String nome;
    String matricula;
    double notaSemestre;

    String verificarAprovacao(double nota) {
        if (nota >= 7) {
            return "Aprovado!";
        } else {
            return "Reprovado!";
        }
    }

    @Override
    public String toString() {
        return "Aluno: " + nome
                + "\nMatricula: " + matricula
                + "\nNota=" + Math.round(notaSemestre);
    }

}
