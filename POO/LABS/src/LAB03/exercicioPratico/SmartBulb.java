package exercicioPratico;

public class SmartBulb {

	private String marca;
	private boolean ligado;
	private int brilho;

	public SmartBulb(String marca) {
		this.marca = marca;
		this.ligado = false;
		this.brilho = 50;
	}

	public String getMarca() {
		return marca;
	}

	public boolean isLigado() {
		return ligado;
	}

	public int getBrilho() {
		return brilho;
	}

	public void setBrilho(int brilho) {
		if (brilho >= 0 && brilho <= 100) {
			this.brilho = brilho;
		} else if (brilho < 0) {
			System.out.println("[INFO] VALOR INSERIDO: " + brilho);
			System.out.println("[WARN] Brilho travado em 0\n");
			this.brilho = 0;
		} else {
			System.out.println("[INFO] VALOR INSERIDO: " + brilho);
			System.out.println("[WARN] Brilho travado em 100\n");
			this.brilho = 100;
		}
	}

	public boolean ligar() {
		this.ligado = true;
		return this.ligado;
	}

	public boolean desligar() {
		this.ligado = false;
		return this.ligado;
	}

	@Override
	public String toString() {
		return "==== SmartBulb ===\n" + "Marca: " + marca + "\nEstado: " + ((ligado) ? "Ligada" : "Desligado")
				+ "\nBrilho: " + brilho + "%\n";
	}

}
