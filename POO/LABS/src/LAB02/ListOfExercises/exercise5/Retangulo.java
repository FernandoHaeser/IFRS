package LAB02.ListOfExercises.exercise5;

public class Retangulo {
    double base, altura;

    public double calcularArea() {
        return base * altura;
    }

    public double calcularPerimetro() {
        return (2 * (base + altura));
    }

    @Override
    public String toString() {
        return "\nBase: " + String.format("%.2f", base) + "m"
                + "\nAltura: " + String.format("%.2f", altura) + "m"
                + "\nArea: " + String.format("%.2f", calcularArea()) + "m²"
                + "\nPerimetro: " + String.format("%.2f", calcularPerimetro()) + "m²";
    }
};
