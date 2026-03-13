package lista02.controlehardware;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        Computador pc = new Computador();

        pc.processador = "I3-10100F";
        pc.marca = "Alienware";

        System.out.print("Deseja ligar o pc [s/n]: ");
        String resposta = sc.nextLine().toLowerCase().trim();

        pc.estaLigado = (resposta.equalsIgnoreCase("s")
        || resposta.equalsIgnoreCase("sim"));

        pc.verificarEstado(pc.estaLigado);

        sc.close();
    }
}
