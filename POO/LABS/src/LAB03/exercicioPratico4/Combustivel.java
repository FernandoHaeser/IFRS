package LAB03.exercicioPratico4;

public class Combustivel {

    private String tipo;
    private double precoLitro;

    public Combustivel(String tipo, double precoLitro) {
        this.tipo = tipo;
        setPrecoLitro(precoLitro);
    }

    public String getTipo() {
        return tipo;
    }

    public void setTipo(String tipo) {
        this.tipo = tipo;
    }

    public double getPrecoLitro() {
        return precoLitro;
    }

    public void setPrecoLitro(double precoLitro) {
        this.precoLitro = (precoLitro > 0) ? precoLitro : 0;
    }

    @Override
    public String toString() {
        return "Combustivel [tipo=" + tipo + ", precoLitro=" + precoLitro + "]";
    }
}
