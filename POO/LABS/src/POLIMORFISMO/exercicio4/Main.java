package POLIMORFISMO.exercicio4;

import POLIMORFISMO.exercicio4.models.Feed;
import POLIMORFISMO.exercicio4.models.Foto;
import POLIMORFISMO.exercicio4.models.PostTexto;
import POLIMORFISMO.exercicio4.models.Publicacao;
import POLIMORFISMO.exercicio4.models.Video;

public class Main {
    public static void main(String[] args) {
        Feed feed = new Feed(4);

        feed.publicar(new PostTexto("Ana", 10, 3, "Bom dia, pessoal!"));
        feed.publicar(new Foto("Bruno", 20, 5, "Pôr do sol na praia", 4));
        feed.publicar(new Video("Carla", 15, 2, "Como fazer bolo de chocolate", 125, 80));
        feed.publicar(new PostTexto("Diego", 50, 10, "Hoje aprendi a cozinha!"));

        feed.exibir();

        Publicacao maisEngajada = feed.getMaisEngajada();
        System.out.println();
        System.out.println("Publicação com maior engajamento: " + maisEngajada.getAutor()
                + " - " + maisEngajada.getPreview());
    }
}
