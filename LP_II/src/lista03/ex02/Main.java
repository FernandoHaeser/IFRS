package lista03.ex02;

import lista03.ex02.model.Sensor;

public class Main {
    public static void main(String[] args) {

        System.out.println("=== TESTE SENSOR ===");

        Sensor sensor1 = new Sensor("Sensor Sala", 220);
        System.out.println("\nSensor 1:");
        System.out.println("Nome: " + sensor1.getDeviceName());
        System.out.println("Voltagem: " + sensor1.getVoltage()); // esperado: 220

        Sensor sensor2 = new Sensor("Sensor Quarto", 123);
        System.out.println("\nSensor 2 (voltagem inválida):");
        System.out.println("Nome: " + sensor2.getDeviceName());
        System.out.println("Voltagem: " + sensor2.getVoltage()); // esperado: 110

        System.out.println("\n=== TESTE CONSUMO ===");

        sensor1.sondarConsumo();
        System.out.println("Consumo Sensor 1: " + sensor1.getCurrentConsumption());

        sensor1.sondarConsumo();
        System.out.println("Consumo Sensor 1 (nova leitura): " + sensor1.getCurrentConsumption());

        System.out.println("\n=== MÚLTIPLAS LEITURAS ===");

        for (int i = 1; i <= 5; i++) {
            sensor2.sondarConsumo();
            System.out.println("Leitura " + i + ": " + sensor2.getCurrentConsumption());
        }
    }
}