package LAB04.praticExercises.exercise1;

import java.lang.Object;

public class Carrinho {
	
	private double total;
	
	public Carrinho(double total) {
		this.total = total;
	}

	public double getTotal() {
		return total;
	}
	
	public void aplicarCupom(ValidadorDeCupom v, int cupom) {
		total = (v.validar(cupom)) ? (total - (total * 0.2)) : total; 
	}
}
