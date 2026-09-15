package LAB04.aulaExercises.exercise4;

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
