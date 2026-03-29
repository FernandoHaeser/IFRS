package lista03.ex04;

import lista03.ex04.model.Combustivel;
import lista03.ex04.model.Veiculo;

public class Main {
    public static void main(String[] args) {

        Combustivel gasolina = new Combustivel("Gasolina", 4.50);
        Combustivel etanol = new Combustivel("Etanol", 3.20);
        Combustivel diesel = new Combustivel("Diesel", 4.00);
        Combustivel invalido = new Combustivel("Gás", 5.00);

        // criar veículo e calcular custo
        Veiculo veiculo = new Veiculo("Fiat Uno", 50.0, gasolina);
        System.out.println("--- Teste: Veículo inicial ---");
        System.out.println("Modelo: " + veiculo.getModelo());
        System.out.println("Tanque (L): " + veiculo.getTanqueLitros());
        System.out.println(
                "Combustível: " + (veiculo.getCombustivel() != null ? veiculo.getCombustivel().getTipo() : "null"));
        System.out.println("Custo tanque cheio: R$ " + veiculo.calcularCustoTanqueCheio());

        // trocar para etanol
        System.out.println("\n--- Teste: Troca para Etanol (válido) ---");
        veiculo.trocarCombustivel(etanol);
        System.out.println("Combustível atual: " + veiculo.getCombustivel().getTipo());
        System.out.println("Custo tanque cheio: R$ " + veiculo.calcularCustoTanqueCheio());

        // trocar para combustível inválido (deve manter o atual)
        System.out.println("\n--- Teste: Troca para inválido (deve ser rejeitado) ---");
        veiculo.trocarCombustivel(invalido);
        System.out.println("Combustível após tentativa inválida: " + veiculo.getCombustivel().getTipo());

        // trocar para diesel
        System.out.println("\n--- Teste: Troca para Diesel (válido) ---");
        veiculo.trocarCombustivel(diesel);
        System.out.println("Combustível atual: " + veiculo.getCombustivel().getTipo());
        System.out.println("Custo tanque cheio: R$ " + veiculo.calcularCustoTanqueCheio());

        // teste validações: preço negativo em Combustivel e tanque negativo em Veiculo
        System.out.println("\n--- Teste: Valores negativos (devem ser tratados como 0) ---");
        Combustivel precoNegativo = new Combustivel("Gasolina", -7.0);
        System.out.println("Preço válido (esperado 0): " + precoNegativo.getPrecoLitro());

        Veiculo tanqueNegativo = new Veiculo("CarroX", -20.0, gasolina);
        System.out.println("Tanque válido (esperado 0): " + tanqueNegativo.getTanqueLitros());
        System.out.println("Custo tanque cheio com tanque 0: R$ " + tanqueNegativo.calcularCustoTanqueCheio());

        // veículo sem combustível (null)
        System.out.println("\n--- Teste: Veículo sem combustível (null) ---");
        Veiculo semCombustivel = new Veiculo("BicicletaMotor", 10.0, null);
        System.out.println("Combustível: " + (semCombustivel.getCombustivel() == null ? "null" : "presente"));
        System.out.println("Custo tanque cheio (esperado 0): R$ " + semCombustivel.calcularCustoTanqueCheio());

        // teste setTanqueLitros com valor negativo
        System.out.println("\n--- Teste: setTanqueLitros com negativo (deve virar 0) ---");
        veiculo.setTanqueLitros(-5.0);
        System.out.println("Tanque após set negativo (esperado 0): " + veiculo.getTanqueLitros());

        // restaurando tanque e calculando custo final
        veiculo.setTanqueLitros(40.0);
        veiculo.trocarCombustivel(gasolina);
        System.out.println("\n--- Teste final: custo com gasolina e 40L ---");
        System.out.println(
                "Tanque: " + veiculo.getTanqueLitros() + "L, Preço: R$ " + veiculo.getCombustivel().getPrecoLitro());
        System.out.println("Custo esperado: R$ " + veiculo.calcularCustoTanqueCheio());
    }

}
