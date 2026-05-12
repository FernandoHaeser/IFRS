2. Transformando Arrays em Classe com ArrayList

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