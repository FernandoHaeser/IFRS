package lista04.ex04;

import lista04.ex04.model.*;

public class Main {
    public static void main(String[] args) {
        Guerreiro alvo = new Guerreiro("Alvo (Dummy)", 5, 10, 200);

        System.out.println("╔══════════════════════════════╗");
        System.out.println("║   SISTEMA DE BATALHA RPG     ║");
        System.out.println("╚══════════════════════════════╝\n");

        Guerreiro guerreiro = new Guerreiro("Thorin",  20, 15, 150);
        Mago      mago      = new Mago     ("Gandalf", 15,  8, 100, 50);
        Arqueiro  arqueiro  = new Arqueiro ("Legolas", 12, 10, 120, 18);
        Assassino assassino = new Assassino("Ezio",    14,  7, 110, 25);

        Personagem[] personagens = {guerreiro, mago, arqueiro, assassino};

        System.out.println("━━━━━ RODADA DE ATAQUES ━━━━━\n");
        for (Personagem p : personagens) {
            int dano = p.calcularAtaque();
            alvo.receberDano(dano);
            System.out.println();
        }

        System.out.println("━━━━━ STATUS FINAL DOS PERSONAGENS ━━━━━");
        for (Personagem p : personagens) {
            p.exibirStatus();
        }

        System.out.println("\n━━━━━ STATUS DO ALVO APOS OS ATAQUES ━━━━━");
        alvo.exibirStatus();
    }
}
