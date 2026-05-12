package lista05.ex02;

import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {

        ArrayList<Musica> playlist = new ArrayList<>();

        playlist.add(new Musica("Tempo Perdido", "Legião Urbana", 305));
        playlist.add(new Musica("Ainda Bem", "Marisa Monte", 210));
        playlist.add(new Musica("O Segundo Sol", "Cássia Eller", 240));
        playlist.add(new Musica("Lanterna dos Afogados", "Os Paralamas do Sucesso", 225));
        playlist.add(new Musica("Será", "Legião Urbana", 290));

        System.out.println("Playlist:");
        System.out.println("----------------");
        for (Musica m : playlist) {
            m.exibirInformacoes();
        }

        int totalDuracao = 0;
        for (Musica m : playlist) {
            totalDuracao += m.getDuracao();
        }
        System.out.println("Duração total da playlist: " + totalDuracao + " segundos");

        System.out.println("\nMúsicas com duração maior que 240 segundos:");
        System.out.println("----------------");
        for (Musica m : playlist) {
            if (m.getDuracao() > 240) {
                m.exibirInformacoes();
            }
        }
    }
}
