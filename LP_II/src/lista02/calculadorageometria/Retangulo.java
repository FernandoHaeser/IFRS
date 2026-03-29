/*

Calculadora de Geometria

Implemente uma classe Retangulo com atributos base e altura.
A classe deve ter métodos para calcularArea() (base * altura) e calcularPerimetro() (2 * (base + altura)).
No main, peça ao usuário os valores ou atribua-os diretamente para validar os cálculos.

*/

package lista02.calculadorageometria;

public class Retangulo {

    double base, altura;

    double calcularArea(double base, double altura) {
        return base * altura;
    }

    double calcularPerimetro(double base, double altura) {
        return 2 * (base + altura);
    }
}
