package lista03.ex01;

import lista03.ex01.model.SmartBulb;
import java.util.Random;

public class Main {
    public static void main(String[] args) {

        SmartBulb bulb = new SmartBulb("Elgin", 50, false);
        Random random = new Random();

        System.out.println("Estado inicial:");
        System.out.println("Marca: " + bulb.getBrand());
        System.out.println("Brilho: " + bulb.getBrightness());
        System.out.println("Ligada: " + bulb.getIsOn());

        bulb.ligar();
        System.out.println("\nApós ligar:");
        System.out.println("Ligada: " + bulb.getIsOn());

        bulb.desligar();
        System.out.println("\nApós desligar:");
        System.out.println("Ligada: " + bulb.getIsOn());

        bulb.setBrightness(random.nextInt(101));
        System.out.println("\nBrilho 80:");
        System.out.println("Brilho: " + bulb.getBrightness());

        bulb.setBrightness(150);
        System.out.println("\nBrilho 150 (esperado 100):");
        System.out.println("Brilho: " + bulb.getBrightness());

        bulb.setBrightness(-10);
        System.out.println("\nBrilho -10 (esperado 0):");
        System.out.println("Brilho: " + bulb.getBrightness());
    }
}