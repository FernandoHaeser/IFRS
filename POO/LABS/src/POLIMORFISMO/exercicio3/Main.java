package POLIMORFISMO.exercicio3;

import POLIMORFISMO.exercicio3.models.Arqueiro;
import POLIMORFISMO.exercicio3.models.Guerreiro;
import POLIMORFISMO.exercicio3.models.Mago;
import POLIMORFISMO.exercicio3.models.Personagem;

public class Main {
    public static void main(String[] args) {
        Personagem[] personagens = {
                new Guerreiro("Guerreiro"),
                new Mago("Mago"),
                new Arqueiro("Arqueiro")
        };

        int rodadas = 4;
        for (int rodada = 1; rodada <= rodadas; rodada++) {
            System.out.println("=== Rodada " + rodada + " ===");

            for (int i = 0; i < personagens.length; i++) {
                Personagem atacante = personagens[i];
                Personagem alvo = personagens[(i + 1) % personagens.length];

                if (atacante.estaVivo())
                    atacante.atacar(alvo);
            }

            for (Personagem personagem : personagens)
                System.out.println(personagem.getNome() + ": " + personagem.getVida() + " de vida");

            System.out.println();
        }
    }
}
