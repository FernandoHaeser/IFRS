package LAB04.exercise1;

public class Main {
	public static void main(String[] args) {

		Relatorio relatorio = new Relatorio();
		Impressora impressora = new Impressora();

		relatorio.gerar(impressora);
	}
}
