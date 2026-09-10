package LAB04.exercise4;

public class Carro {
	
	private Motor motor;
	
	public Carro(String modeloMotor) {
		this.motor = new Motor(modeloMotor);
	}

	@Override
	public String toString() {
		return "Carro: " + motor;
	}
}
