package LAB02.ListOfExercises.exercise4;

public class Computador {

    String processador, marca;
    boolean estaLigado;

    public boolean ligar() {
        System.out.println("\nLigando computador...");
        estaLigado = true;
        return estaLigado;
    }

    public boolean desligar() {
        System.out.println("\nDesligando computador...");
        estaLigado = false;
        return estaLigado;
    }

    public String verificarStatus() {
        if (estaLigado)
            return "Pronto pra uso!";
        else
            return "Não está pronto pra uso!";
    }

    @Override
    public String toString() {
        return "\nMarca: " + marca
        + "\nProcessador: " + processador
        + "\nEstado: " + verificarStatus();
    }
}
