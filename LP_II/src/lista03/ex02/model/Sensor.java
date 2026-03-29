package lista03.ex02.model;

public class Sensor {

    private String deviceName;
    private int voltage;
    private double currentConsumption;

    public Sensor(String deviceName, int voltage) {
        this.deviceName = deviceName;
        setVoltage(voltage);
    }

    public String getDeviceName() {
        return deviceName;
    }

    public int getVoltage() {
        return voltage;
    }

    public double getCurrentConsumption() {
        return currentConsumption;
    }

    public void setVoltage(int voltage) {
        if (voltage == 110 || voltage == 220) {
            this.voltage = voltage;
        } else {
            this.voltage = 110;
        }
    }

    public void sondarConsumo() {
        this.currentConsumption = Math.random() * 500;
    }

}
