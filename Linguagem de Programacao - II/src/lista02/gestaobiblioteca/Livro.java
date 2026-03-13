/*

Sistema de Gestão de Biblioteca

No IFRS, a biblioteca precisa de um sistema para registrar seus livros.
Crie uma classe chamada Livro com os atributos titulo, autor e paginasTotais.
Adicione um método exibirDados() que imprima as informações do livro no console.
                                                                                                                                                                     No método main, instancie dois objetos desta classe com dados de livros. Exemplo: "Java como Programar", "Deitel", 1386 páginas.
*/

package lista02.gestaobiblioteca;

public class Livro {

    String titulo, autor;
    long paginasTotais;

    @Override
    public String toString() {
        return "Titulo do livro: " + titulo
                + "\nAutor: " + autor
                + "\nPáginas Totais: " + paginasTotais;
    }
}
