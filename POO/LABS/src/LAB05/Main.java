package LAB05;

import LAB05.models.*;

public class Main {
    public static void main(String[] args) {

        ContaEspecial contaEspecial = new ContaEspecial("123456", 500, 500);
        ContaPoupanca contaPoupanca = new ContaPoupanca("789012", 200, 50);

        Cliente clienteEspecial = new Cliente("Fernando Haeser", "123.456.789-00", contaEspecial);
        Cliente clientePoupanca = new Cliente("Fernando Haeser", "987.654.321-00", contaPoupanca);

        // ContaEspecial: depósitos e saque acima do limite
        contaEspecial.depositar(200);
        contaEspecial.depositar(100);
        System.out.println("Saldo ContaEspecial após depósitos: R$" + contaEspecial.getSaldo());

        double saldoAntesSaque = contaEspecial.getSaldo();
        contaEspecial.sacarComLimite(1500); // saldo(800) + limite(500) = 1300 < 1500, deve ser recusado
        System.out.println("Saque de R$1500 respeitou o limite? " + ((contaEspecial.getSaldo() == saldoAntesSaque) ? "Sim" : "Não"));
        System.out.println("Saldo ContaEspecial após tentativa de saque: R$" + contaEspecial.getSaldo());

        contaEspecial.sacarComLimite(1000); // 800 + 500 = 1300 >= 1000, permitido (fica negativo)
        System.out.println("Saldo ContaEspecial após saque de R$1000: R$" + contaEspecial.getSaldo());

        // ContaPoupanca: rendimento
        double saldoAntesRendimento = contaPoupanca.getSaldo();
        double rendimento = contaPoupanca.calcularRendimento();
        System.out.println();
        System.out.println("Saldo ContaPoupanca antes do rendimento: R$" + saldoAntesRendimento);
        System.out.println("Rendimento aplicado: R$" + rendimento);
        System.out.println("Saldo ContaPoupanca depois do rendimento: R$" + contaPoupanca.getSaldo());

        // Dados finais dos dois clientes
        System.out.println();
        System.out.println(clienteEspecial.exibirDados());
        System.out.println();
        System.out.println(clientePoupanca.exibirDados());
    }
}
