package LAB05.models;

/* ContaBancaria — classe abstrata15 min
classe abstratamétodo abstrato
O que fazer

Declare a classe abstrata ContaBancaria, com os atributos protegidos numeroConta (String) e saldo (double).
Escreva o construtor ContaBancaria(String numeroConta, double saldoInicial), atribuindo os dois atributos.
Escreva depositar(double valor), que soma valor ao saldo.
Escreva sacar(double valor), que subtrai valor do saldo somente quando o saldo disponível é suficiente para cobrir o saque; fora dessa condição, o saque não é realizado.
Escreva exibirDadosConta(), que mostra o número da conta e o saldo atual.
Declare o método abstrato calcularRendimento(), sem corpo, para que cada subclasse implemente do seu próprio jeito. 
*/

public abstract class ContaBancaria {

    protected String numeroConta;
    protected double saldo;

    public ContaBancaria(String numeroConta, double saldo) {
        this.numeroConta = numeroConta;
        this.saldo = saldo;
    }

    public double depositar(double valor) {
        return (valor > 0) ? (saldo += valor) : saldo;
    }

    public double sacar(double valor) {
        return (valor > saldo) ? saldo : (saldo -= valor);
    }

    public String exibirDadosConta() {
        return "Número da Conta: " + numeroConta + "\nSaldo: R$" + saldo;
    }

    public double getSaldo() {
        return saldo;
    }

    protected abstract double calcularRendimento();

}