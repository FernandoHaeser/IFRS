1. Biblioteca de Livros

Crie um programa em Java para controlar os livros de uma biblioteca. Para isso, crie uma classe chamada Livro com os atributos titulo, autor e anoPublicacao.

A classe deve ter:

    atributos privados;
    construtor;
    métodos getters;
    método exibirInformacoes().

No método main, crie um ArrayList<Livro> e adicione pelo menos 5 livros.

O programa deve:

    exibir todos os livros cadastrados;
    exibir apenas os livros publicados depois de 2015;
    contar quantos livros existem na lista.

Exemplo de uso esperado:

ArrayList<Livro> livros = new ArrayList<>();

livros.add(new Livro("Dom Casmurro", "Machado de Assis", 1899));
livros.add(new Livro("Torto Arado", "Itamar Vieira Junior", 2019));
livros.add(new Livro("Pequeno Manual Antirracista", "Djamila Ribeiro", 2019));

1. Transformando Arrays em Classe com ArrayList

O código abaixo controla músicas usando arrays comuns. Analise o código e transforme essa solução em uma versão orientada a objetos usando ArrayList.

Código original com arrays:

public class Main {
    public static void main(String[] args) {
        String[] titulos = {
            "Tempo Perdido",
            "Ainda Bem",
            "O Segundo Sol",
            "Lanterna dos Afogados"
        };

        String[] artistas = {
            "Legião Urbana",
            "Marisa Monte",
            "Cássia Eller",
            "Os Paralamas do Sucesso"
        };

        int[] duracoes = {
            305,
            210,
            240,
            225
        };

        int totalDuracao = 0;

        System.out.println("Playlist:");
        System.out.println("----------------");

        for (int i = 0; i < titulos.length; i++) {
            System.out.println("Música: " + titulos[i]);
            System.out.println("Artista: " + artistas[i]);
            System.out.println("Duração: " + duracoes[i] + " segundos");
            System.out.println("----------------");

            totalDuracao += duracoes[i];
        }

        System.out.println("Duração total da playlist: " + totalDuracao + " segundos");
    }
}

Crie uma classe chamada Musica com os atributos:

private String titulo;
private String artista;
private int duracao;

A classe deve ter:

    construtor;
    getters;
    método exibirInformacoes().

Depois, no main, substitua os arrays por:

ArrayList<Musica> playlist = new ArrayList<>();

O programa final deve:

    adicionar pelo menos 4 músicas na lista;
    exibir todas as músicas;
    calcular a duração total da playlist;
    exibir apenas músicas com duração maior que 240 segundos.

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
