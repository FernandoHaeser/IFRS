package LAB03.exercicioPratico;

import java.util.Random;

public class Main {

	public static void main(String[] args) {

		Random random = new Random();

		String marca = "Elgin";

		SmartBulb lampada = new SmartBulb(marca);

		// ToString with default values
		System.out.println(lampada.toString());

		// Setter of brightness (Test)
		lampada.setBrilho(random.nextInt(100 + 1)); // Valid value
		System.out.println(lampada.toString());

		lampada.setBrilho(-10); // Lower than 0, default 0
		System.out.println(lampada.toString());

		lampada.setBrilho(131); // Higher than 100, default 100
		System.out.println(lampada.toString());

		lampada.setBrilho(50); // Insert the default value

		// ligar() and desligar() (Test)
		lampada.ligar();
		System.out.println(lampada.toString()); // return: Ligado

		lampada.desligar();
		System.out.println(lampada.toString()); // return: Desliga

		// marca (test)
		// the atribute "marca" can't be changed after the start in constructor, so you
		// can just return the value.
		System.out.println("\n============" + "\nMarca lampada: " + lampada.getMarca());

	}

}
