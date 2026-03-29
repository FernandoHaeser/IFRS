package urnaEletronica;

import java.util.Scanner;

public class UrnaEletronica {

    public static void exibirMenu() {
        String candidatosMenu = """
                Qual seu voto?
                [13] - Polvo
                [22] - Biroliro
                [12] - Giro gomes
                R:""";
        System.out.print(candidatosMenu);
    }

    public static void votar(int candidato) {
        if (candidato == 13) {
            System.out.println("Voto em Polvo computado!");
        } else if (candidato == 22) {
            System.out.println("Voto Biroliro computado!");
        } else if (candidato == 12) {
            System.out.println("Voto Giro Gomes computado!");
        } else {
            System.out.println("Voto nulo computado!");
        }
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int polvo = 0, biroliro = 0, giroGomes = 0, nulo = 0;

        System.out.print("Quantos eleitores irão votar? ");
        int eleitores = sc.nextInt();

        for (int i = 0; i < eleitores; i++) {

            exibirMenu();
            int voto = sc.nextInt();

            switch (voto) {
                case 13:
                    votar(voto);
                    polvo++;
                    break;
                case 22:
                    votar(voto);
                    biroliro++;
                    break;
                case 12:
                    votar(voto);
                    giroGomes++;
                    break;
                default:
                    votar(nulo);
                    nulo++;

            }
        }

        if (polvo > biroliro && polvo > giroGomes && polvo > nulo)
            System.out.println("Polvo venceu com " + polvo + " votos!");
        else if (biroliro > polvo && biroliro > giroGomes && biroliro > nulo)
            System.out.println("Biroliro venceu com " + biroliro + " votos!");
        else if (giroGomes > polvo && giroGomes > biroliro && giroGomes > nulo)
            System.out.println("Giro gomes venceu com " + giroGomes + " votos!");
        else if (nulo > polvo && nulo > biroliro && nulo > giroGomes)
            System.out.println("Votacao sem vencedores, votos nulos computados: " + nulo);
        else
            System.out.println("Votacao empatada!");

        System.out.println("\nVOTACAO ENCERRADA");

        sc.close();
    }
}
