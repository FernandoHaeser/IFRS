package lista03.ex04.model;

public class Combustivel {
    private String tipo;
    private double precoLitro;

    public Combustivel(String tipo, double precoLitro) {
        this.tipo = tipo;
        this.precoLitro = precoLitro < 0 ? 0 : precoLitro; // op ternario para garantir preço não negativo
    }

    public String getTipo() {
        return tipo;
    }

    public double getPrecoLitro() {
        return precoLitro;
    }
}
