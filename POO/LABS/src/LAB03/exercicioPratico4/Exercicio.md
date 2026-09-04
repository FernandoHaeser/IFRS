# Questão 4: Controle de Abastecimento de Veículos

Uma empresa de logística está desenvolvendo um sistema para controlar o abastecimento de sua frota. Nesse sistema, cada veículo pode ser abastecido com um determinado combustível, e esse combustível precisa ser representado como um objeto próprio, com características específicas.

Para modelar essa situação, você deverá criar duas classes: uma classe Combustivel e uma classe Veiculo. A ideia é que um objeto da classe Veiculo utilize um objeto da classe Combustivel como parte de sua estrutura.

Classe Combustivel:

A classe Combustivel deve possuir os seguintes atributos privados: tipo (String) e precoLitro (double).

Construtor: Deve receber o tipo e o precoLitro.

Validação: O preço por litro não pode ser negativo. Caso um valor inválido seja informado, ele deve ser ajustado para 0.

Classe Veiculo:

A classe Veiculo deve possuir os seguintes atributos privados: modelo (String), tanqueLitros (double) e combustivel (Combustivel).

Construtor: Deve receber o modelo, a capacidade do tanque em litros e um objeto do tipo Combustivel.

Encapsulamento:

O modelo deve ter apenas Getter.
O tanqueLitros deve ter Getter e Setter.
O combustivel deve ter Getter, mas sua alteração deve ser feita por meio de um método específico, e não por um Setter comum.
Regra de Validação no Consumo de Objeto:

Crie um método chamado trocarCombustivel(Combustivel novoCombustivel). Esse método só deve permitir a troca se o tipo do combustível for "Gasolina", "Etanol" ou "Diesel". Caso seja informado qualquer outro tipo, a troca não deve acontecer e o sistema deve exibir uma mensagem de erro informando que o combustível é inválido para a frota.

Além disso, crie um método chamado calcularCustoTanqueCheio(), que retorne o valor necessário para encher completamente o tanque do veículo com base na capacidade do tanque e no preço por litro do combustível atualmente associado ao veículo.

Ao final, implemente uma pequena rotina de testes na classe principal, criando pelo menos um combustível válido, um combustível inválido e um veículo. Teste a troca de combustível e exiba o custo do tanque cheio após as operações realizadas.
