package LAB03.exercicioPratico4;

import java.util.Arrays;

public class Veiculo {

    private String modelo;
    private double tanqueLitros;
    private Combustivel combustivel;

    public Veiculo(String modelo, double tanqueLitros, Combustivel combustivel) {
        this.modelo = modelo;
        this.tanqueLitros = tanqueLitros;
        this.combustivel = combustivel;
    }

    public String getModelo() {
        return modelo;
    }

    public double getTanqueLitros() {
        return tanqueLitros;
    }

    public void setTanqueLitros(double tanqueLitros) {
        this.tanqueLitros = tanqueLitros;
    }

    public Combustivel getCombustivel() {
        return combustivel;
    }

    public void trocarCombustivel(Combustivel novoCombustivel) {

        String[] combustiveisValidos = { "gasolina", "etanol", "diesel" };
        String tipoCombustivel = novoCombustivel.getTipo().trim().toLowerCase();

        boolean exist = Arrays.asList(combustiveisValidos).contains(tipoCombustivel);

        if (exist) {
            this.combustivel = novoCombustivel;
            System.out.println("[INFO] Troca de combustivel realizada");
        } else {
            System.out.println("[INFO] Troca nao realizada, combustível é inválido para a frota.");
        }
    }

    public Double calcularCustoTanqueCheio(Combustivel combustivel) {
        double precoCombustivel = combustivel.getPrecoLitro();
        return precoCombustivel * tanqueLitros;
    }

    @Override
    public String toString() {
        return "\n=== Veiculo ===" +
                "\nModelo: " + modelo +
                "\nCapacidade Tanque: " + tanqueLitros + "L" +
                "\n=== Combustivel ===" +
                "\nTipo: " + combustivel.getTipo() +
                "\nPreco p/ Litro: "
                + ((combustivel.getPrecoLitro()) == 0 ? "Gratis"
                        : String.format("R$%.2f", combustivel.getPrecoLitro()))
                +
                "\nCusto tanque cheio: "
                + (calcularCustoTanqueCheio(combustivel) == 0 ? "Gratis"
                        : String.format("R$%.2f", calcularCustoTanqueCheio(combustivel)))
                +
                "\n";
    }

}
