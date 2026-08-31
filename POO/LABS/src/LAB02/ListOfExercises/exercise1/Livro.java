package LAB02.ListOfExercises.exercise1;

public class Livro {

    String titulo;
    String autor;
    int paginasTotais;

    @Override
    public String toString() {
        return "Titulo: "
                + titulo + "\nAutor: "
                + autor +
                "\nPaginas Totais: " + paginasTotais;
    }
}
