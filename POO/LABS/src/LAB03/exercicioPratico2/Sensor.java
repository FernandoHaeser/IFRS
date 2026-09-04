package LAB03.exercicioPratico2;

public class Sensor {

	private String nomeAparelho;
	private int voltagem;
	private double consumoAtual;

	public Sensor(String nomeAparelho, int voltagem) {
		this.nomeAparelho = nomeAparelho;
		this.voltagem = voltagem;
	}

	public String getNomeAparelho() {
		return nomeAparelho;
	}

	public void setNomeAparelho(String nomeAparelho) {
		System.out.println("[DEBUG] CHANGING nomeAparelho VALUE");
		this.nomeAparelho = nomeAparelho;
	}

	public int getVoltagem() {
		return voltagem;
	}

	public void setVoltagem(int voltagem) {
		if (voltagem == 110 || voltagem == 220) {
			System.out.println("[DEBUG] CHANGING voltagem VALUE");
			this.voltagem = voltagem;
		} else {
			System.out.println("[INFO] Voltagem inválida! Definindo valor padrão");
			this.voltagem = 110;
		}
	}

	public double getConsumoAtual() {
		return consumoAtual;
	}

	public double sondarConsumo(double consumo) {
		if (consumo >= 0 && consumo <= 500) {
			System.out.println("[DEBUG] CHANGING consumo VALUE");
			this.consumoAtual = consumo;
			return this.consumoAtual;
		} else {
			System.out.println("[INFO] INVALID VALUE");
			return this.consumoAtual;
		}
	}

	@Override
	public String toString() {
		return "\n=== Sensor ===\n" +
				"Nome do Aparelho: " + nomeAparelho +
				"\nVoltagem: " + voltagem + "v" +
				"\nConsumo atual: " + String.format("%.2f", consumoAtual) + "w" +
				"\n===============\n";
	}
}
