 ContaBancaria — classe abstrata15 min
classe abstratamétodo abstrato
O que fazer

Declare a classe abstrata ContaBancaria, com os atributos protegidos numeroConta (String) e saldo (double).
Escreva o construtor ContaBancaria(String numeroConta, double saldoInicial), atribuindo os dois atributos.
Escreva depositar(double valor), que soma valor ao saldo.
Escreva sacar(double valor), que subtrai valor do saldo somente quando o saldo disponível é suficiente para cobrir o saque; fora dessa condição, o saque não é realizado.
Escreva exibirDadosConta(), que mostra o número da conta e o saldo atual.
Declare o método abstrato calcularRendimento(), sem corpo, para que cada subclasse implemente do seu próprio jeito.

02 ContaEspecial — herda de ContaBancaria15 min
herançasobrescrita
ContaEspecial adiciona um limite de cheque especial: o saldo pode ficar negativo, mas só até onde o limite permitir.

O que fazer

Declare a classe ContaEspecial, que herda de ContaBancaria, com o atributo adicional limite (double).
Escreva o construtor ContaEspecial(String numeroConta, double saldoInicial, double limite), chamando super(numeroConta, saldoInicial) e atribuindo o limite.
Escreva sacarComLimite(double valor), que permite o saldo ficar negativo desde que valor não ultrapasse a soma do saldo disponível com o limite; fora dessa condição, o saque não é realizado.
Sobrescreva calcularRendimento() com @Override: esse tipo de conta não rende, então o método apenas retorna 0.

03 ContaPoupanca — herda de ContaBancaria10 min
herançasobrescrita
ContaPoupanca também herda de ContaBancaria, mas em vez de limite, guarda uma taxa de rendimento mensal que incide sobre o próprio saldo.

O que fazer

Declare a classe ContaPoupanca, que herda de ContaBancaria, com o atributo adicional taxaRendimento (double), um percentual mensal.
Escreva o construtor ContaPoupanca(String numeroConta, double saldoInicial, double taxaRendimento), chamando super(numeroConta, saldoInicial) e atribuindo a taxa.
Sobrescreva calcularRendimento() com @Override: aplique taxaRendimento sobre o saldo atual, some esse valor ao saldo e devolva o rendimento calculado.

04 Cliente10 min
polimorfismo
Cliente reúne os dados de quem é dono da conta. O atributo conta é do tipo ContaBancaria porque a classe é abstrata, mas o objeto guardado ali pode ser qualquer subclasse concreta: é o polimorfismo entrando em cena.

O que fazer

Declare a classe Cliente, com os atributos nome (String), cpf (String) e conta (ContaBancaria).
Escreva o construtor Cliente(String nome, String cpf, ContaBancaria conta).
Escreva exibirDados(), que mostra o nome e o CPF do cliente e, em seguida, chama exibirDadosConta() da conta associada.

05 Testando tudo no main10 min
herançapolimorfismo
É no main que a herança e o polimorfismo aparecem na prática: o mesmo tipo de variável (ContaBancaria) guarda contas diferentes, cada uma respondendo à sua maneira.

O que fazer

Crie um cliente com uma ContaEspecial de limite R$ 500,00, faça alguns depósitos e tente um saque que deixaria o saldo além do que o limite permite, conferindo se a regra foi respeitada.
Crie um segundo cliente com uma ContaPoupanca, chame calcularRendimento() e mostre o saldo antes e depois, para confirmar que o rendimento foi aplicado corretamente.
Chame exibirDados() dos dois clientes para conferir se os dados de cada conta aparecem certos.