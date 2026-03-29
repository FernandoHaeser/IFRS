package lista03.ex04.model;

public class Veiculo {
    private String modelo;
    private double tanqueLitros;
    private Combustivel combustivel;

    public Veiculo(String modelo, double tanqueLitros, Combustivel combustivel) {
        this.modelo = modelo;
        this.tanqueLitros = tanqueLitros < 0 ? 0 : tanqueLitros;
        this.combustivel = combustivel;
    }

    public String getModelo() {
        return modelo;
    }

    public double getTanqueLitros() {
        return tanqueLitros;
    }

    public void setTanqueLitros(double tanqueLitros) {
        this.tanqueLitros = tanqueLitros < 0 ? 0 : tanqueLitros;
    }

    public Combustivel getCombustivel() {
        return combustivel;
    }

    public void trocarCombustivel(Combustivel novoCombustivel) {
        String tipo = novoCombustivel.getTipo();
        if (tipo.equalsIgnoreCase("Gasolina") || tipo.equalsIgnoreCase("Etanol") || tipo.equalsIgnoreCase("Diesel")) {
            this.combustivel = novoCombustivel;
            System.out.println("Combustível trocado para: " + tipo);
        } else {
            System.out.println("Erro: Combustível inválido para a frota. Troca não realizada.");
        }
    }

    public double calcularCustoTanqueCheio() {
        if (combustivel != null) {
            return tanqueLitros * combustivel.getPrecoLitro();
        }
        return 0;
    }
}
