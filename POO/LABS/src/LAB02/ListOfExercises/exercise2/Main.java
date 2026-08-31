package LAB02.ListOfExercises.exercise2;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Aluno aluno = new Aluno();
        Scanner sc = new Scanner(System.in);

        System.out.print("Informe nome do aluno: ");
        aluno.nome = sc.nextLine();

        System.out.print("Informe matrícula do aluno: ");
        aluno.matricula = sc.nextLine();

        do {
            System.out.print("Informe a nota do aluno: ");
            aluno.notaSemestre = sc.nextDouble();

            if (aluno.notaSemestre > 10 || aluno.notaSemestre < 0)
                System.out.println("\nINFORME UMA NOTA VÁLIDA!\n");

        } while (aluno.notaSemestre > 10 || aluno.notaSemestre < 0);

        System.out.println("\n\n" + aluno.toString()
                + "\nSituação: " + aluno.verificarAprovacao(aluno.notaSemestre));

        sc.close();
    }
}
