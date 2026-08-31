package LAB02.ListOfExercises.exercise3;

public class ContaBancaria {

    String titular;
    double saldo;

    double depositar(double valor) {
        if (valor > 0) {
            System.out.println("\nValor depositado!");
            return saldo += valor;
        } else {
            System.out.println("\nVocê está inserindo um valor inválido!");
            return saldo;
        }
    }

    double sacar(double valor) {
        if (valor > saldo) {
            System.out.println("\nVocê não tem esse limite disponível!");
            return saldo;
        } else if (valor < 0) {
            System.out.println("\nVocê está inserindo um valor inválido!");
            return saldo;
        } else {
            System.out.println("\nValor sacado com sucesso.");
            return saldo -= valor;
        }
    }

    @Override
    public String toString() {
        return "\nTitular: " + titular + "\nSaldo: R$" + String.format("%.2f", saldo);
    }
}
