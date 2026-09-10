package LAB04.praticExercises.exercise1;

public class ValidadorDeCupom {

	// se o codigo nao for 220706 o desconto nao e aplicado, pois o validador retorna false
	public boolean validar(int codigo) {
		return (codigo == 220706) ? true : false;
	}

}
