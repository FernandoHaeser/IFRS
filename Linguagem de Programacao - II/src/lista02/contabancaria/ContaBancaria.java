/*

Simulador de Conta Bancária Simples

Desenvolva uma classe ContaBancaria com os atributos titular e saldo.
Implementar os métodos depositar(double valor) e sacar(double valor).
O método de saque deve apenas subtrair o valor se houver saldo suficiente.
Teste a classe criando uma conta, realizando um depósito e, em seguida, um saque.
Regra: Se o saldo for insuficiente, exiba uma mensagem de erro no console.

*/

package lista02.contabancaria;

public class ContaBancaria {

    String titular;
    double saldo = 0;

    boolean saldoSuficiente(double valor) {
        return (saldo > valor);
    }

    double depositar(double valor) {
        return saldo += valor;
    }

    double sacar(double valor) {
        if (saldoSuficiente(valor)) {
            System.out.println("\nSaque realizado com sucesso!");
            return saldo -= valor;
        } else {
            System.out.println("\nVocê não possui saldo suficiente!");
            return saldo;
        }
    }
}
