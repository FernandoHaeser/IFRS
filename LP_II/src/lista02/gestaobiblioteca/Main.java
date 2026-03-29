package lista02.gestaobiblioteca;

public class Main {

    public static void main(String[] args) {

        Livro livro = new Livro();

        livro.autor = "Fernando Augusto Haeser";
        livro.titulo = "A história de Fernando A. Haeser";
        livro.paginasTotais = 1234;

        System.out.println(livro);
    }
}
