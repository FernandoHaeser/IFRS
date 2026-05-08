package lista05.ex01;

import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        ArrayList<Livro> livroLista = new ArrayList<>();
        Scanner sc = new Scanner(System.in);

        // Replace your for loop with this:

        livroLista.add(new Livro("Dom Casmurro", "Machado de Assis", 1899L));
        livroLista.add(new Livro("O Senhor dos Aneis", "J.R.R. Tolkien", 2020L));
        livroLista.add(new Livro("Harry Potter", "J.K. Rowling", 1997L));
        livroLista.add(new Livro("O Alquimista", "Paulo Coelho", 1988L));
        livroLista.add(new Livro("1984", "George Orwell", 1949L));

        // TODO - REMOVE COMMENTS TO USE WITH SCANNER
        // for (int i = 0; i < 5; i++) {

        // System.out.print("Defina o nome do autor: ");
        // String autorNome = sc.nextLine();

        // System.out.print("Defina o nome do livro: ");
        // String nomeLivro = sc.nextLine();

        // System.out.print("Defina o ano de publicacao do livro: ");
        // Long anoPublicacao = sc.nextLong();

        // sc.nextLine();

        // Livro livro = new Livro(nomeLivro, autorNome, anoPublicacao);

        // livroLista.add(livro);
        // }

        System.out.println("== Todos Livros Cadastrados: ==\n");
        for (Livro livro : livroLista) {
            System.out.println(livro + "\n");
        }

        System.out.println("== Todos Livros Publicados depois de 2015: ==\n");

        for (Livro livro : livroLista) {
            if (livro.getAnoPublicacao() > 2015) {
                System.out.println(livro + "\n");
            }
        }

        System.out.println("Tamanho de livros na lista: " + livroLista.size());

        sc.close();
    }
}