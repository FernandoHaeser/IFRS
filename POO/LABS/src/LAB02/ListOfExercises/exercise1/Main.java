package LAB02.ListOfExercises.exercise1;

public class Main {
    public static void main(String[] args) {
        Livro livro1 = new Livro();
        Livro livro2 = new Livro();
        Livro livro3 = new Livro();

        // Livro 1
        livro1.titulo = "O Senhor dos Anéis";
        livro1.autor = "J. R. R. Tolkien";
        livro1.paginasTotais = 1178;

        // Livro 2
        livro2.titulo = "1984";
        livro2.autor = "George Orwell";
        livro2.paginasTotais = 328;

        // Livro 3
        livro3.titulo = "Harry Potter e a Pedra Filosofal";
        livro3.autor = "J. K. Rowling";
        livro3.paginasTotais = 223;

        System.out.println(livro1.toString());
        System.out.println("\n" + livro2.toString());
        System.out.println("\n" + livro3.toString());

    }
}
