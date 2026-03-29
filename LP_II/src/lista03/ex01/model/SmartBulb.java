package lista03.ex01.model;

public class SmartBulb {

    private final String brand;
    private int brightness;
    private boolean isOn;

    public SmartBulb(String brand, int brightness, boolean isOn) {
        this.brand = brand;
        this.isOn = isOn;
        setBrightness(brightness);
    }

    public String getBrand() {
        return brand;
    }

    public int getBrightness() {
        return brightness;
    }

    public boolean getIsOn() {
        return isOn;
    }

    public void setBrightness(int brightness) {
        if (brightness > 100) {
            this.brightness = 100;
        } else if (brightness < 0) {
            this.brightness = 0;
        } else {
            this.brightness = brightness;
        }
    }

    public void ligar() {
        this.isOn = true;
    }

    public void desligar() {
        this.isOn = false;
    }
}