package LAB03.exercicioPratico2;

import java.util.Random;

public class Main {

	public static void main(String[] args) {

		Random random = new Random();
		double novoConsumo = random.nextDouble(501); // define a random value for the novoConsumo

		System.out.println("[INFO] THE VARIABLE novoConsumo get a random value, who it's: " + novoConsumo);

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

		// 02 - Change the voltage to 110v, 220v and a incorrect value to get the
		sensor.setVoltagem(110);
		System.out.println(sensor.toString()); // the new value of voltagem need to be 110v

		sensor.setVoltagem(220);
		System.out.println(sensor.toString()); // the new value of voltagem need to be 220v

		sensor.setVoltagem(123);
		System.out.println(sensor.toString()); // the new value of voltagem need to be the deafult (110v)

		// 03 - Change the "Consumo" value
		sensor.sondarConsumo(novoConsumo);
		System.out.println(sensor.toString()); // the new value of consumo needs to be the random value of "novoConsumo"

		// changing the value of novoConsumo to get the log [INFO] INVALID VALUE, and
		// return the older/current value.
		novoConsumo = 676.76;
		sensor.sondarConsumo(novoConsumo);
		System.out.println(sensor.toString()); // the new value of consumo needs to be the older/currente random value of "novoConsumo"

	}
}
