package exercicioPratico2;

import java.util.Random;

public class Main {

	public static void main(String[] args) {

		Random random = new Random();
		int novoConsumo = random.nextInt(501); // define a random value for the novoConsumo

		// default init values for constructor
		String nomeAparelho = "Geladeira";
		int voltagem = 110;

		Sensor sensor = new Sensor(nomeAparelho, voltagem);

		// default values
		System.out.println(sensor.toString());

		// TEST CASES
		// 01 - Change the name of device
		sensor.setNomeAparelho("Micro-ondas");
		System.out.println(sensor.toString()); // the new name need to be: Micro-ondas

		// 02 - Change the voltage
	}

}
