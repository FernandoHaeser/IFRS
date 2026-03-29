# Lista de Exercícios 03

Encapsulamento, Construtores e Integridade

Nesta lista, você irá trabalhar com conceitos fundamentais de
Programação Orientada a Objetos, com foco em encapsulamento, uso de
construtores, integridade dos dados e regras de negócio. Cada situação
representa um problema real de desenvolvimento, exigindo que você tome
decisões corretas para garantir consistência e segurança nos dados.

## Questão 1: Sistema de Automação

Uma empresa de automação residencial está desenvolvendo um aplicativo
para controlar dispositivos inteligentes dentro de uma casa. Um dos
primeiros dispositivos a ser implementado é uma Lâmpada Inteligente
(Smart Bulb), que permite controlar o brilho e o estado
(ligada/desligada).

Durante o desenvolvimento, surgiu a necessidade de garantir que os dados
da lâmpada sejam protegidos contra alterações indevidas e que os valores
utilizados façam sentido dentro do funcionamento do dispositivo.

Atributos Privados: marca (String), brilho (int) e ligada (boolean).

Construtor: Deve receber a marca. O brilho deve iniciar em 50 e ligada
como false.

Encapsulamento:

A marca não pode ser alterada após a criação (somente Getter). O
atributo ligada não deve ter Setter. Crie os métodos ligar() e
desligar() para alterar esse estado. O brilho deve ter Getter e Setter.
Validação: No Setter do brilho, garanta que o valor esteja sempre entre
0 e 100. Se o usuário tentar passar 150, o brilho deve ser travado em
100. Se passar um valor negativo, trave em 0.

💡 Pílula de Conhecimento A: Aleatoriedade com Random

Em muitos sistemas, precisamos simular dados ou gerar valores
imprevisíveis (como o consumo instantâneo de um motor). Para isso,
usamos a classe java.util.Random.

Como usar:

import java.util.Random;

Random gerador = new Random(); int valorAleatorio =
gerador.nextInt(101); // Gera um número entre 0 e 100

### Questão 2: Monitor de Consumo IoT

Em uma casa inteligente, sensores são utilizados para monitorar o
consumo de energia elétrica de diferentes aparelhos. Esses sensores
enviam dados constantemente para o sistema, permitindo acompanhar o
gasto em tempo real.

No entanto, é necessário garantir que esses dados sejam gerados de forma
controlada e que informações importantes, como o consumo atual, não
sejam alteradas diretamente por quem utiliza o sistema.

Atributos Privados: nomeAparelho (String), voltagem (int) e consumoAtual
(double).

Construtor: Deve receber o nomeAparelho e a voltagem.

Validação: A voltagem só pode ser 110 ou 220. Se for informado qualquer
outro valor, o padrão deve ser 110.

Comportamento e Aleatoriedade:

Crie um método chamado sondarConsumo(). Este método deve usar a classe
Random para gerar um novo valor para consumoAtual entre 0 e 500 (watts).

Encapsulamento: O consumoAtual deve ser somente leitura para o usuário
externo (apenas Getter), pois ele só é alterado internamente pelo método
de sondagem.

🧠 Pílula de Conhecimento B: Identificadores Únicos (UUID)

Em aplicações web e sistemas distribuídos, não usamos IDs simples (1, 2,
3) para evitar que invasores descubram o próximo item da lista. Usamos o
UUID (Universally Unique Identifier).

Como usar:

import java.util.UUID;

String codigoUnico = UUID.randomUUID().toString(); // Resultado:
"550e8400-e29b-41d4-a716-446655440000"

### Questão 3: Perfil de Streaming

Uma plataforma de streaming está implementando um sistema de perfis de
usuários, onde cada pessoa pode ter sua própria conta com restrições de
conteúdo baseadas na idade.

Para garantir segurança e controle parental, algumas regras precisam ser
aplicadas automaticamente pelo sistema, sem depender da ação do usuário.

Atributos Privados: idPerfil (String), nome (String), idade (int) e
restricaoAtiva (boolean).

Construtor:

Deve receber nome e idade. O idPerfil deve ser gerado automaticamente no
construtor usando UUID. Lógica de Estado Derivado:

O atributo restricaoAtiva não deve ter Setter.

A lógica de restrição é: se a idade for menor que 18, restricaoAtiva
deve ser automaticamente true. Caso contrário, false.

Atenção: Garanta que essa lógica funcione tanto na criação (construtor)
quanto em qualquer alteração de idade (Setter).

Regra: O nome do perfil não pode ser alterado se a idade for menor que
12 anos (bloqueio de segurança infantil). Exiba uma mensagem de erro
caso tentem alterar.

### Questão 4: Controle de Abastecimento de Veículos

Uma empresa de logística está desenvolvendo um sistema para controlar o
abastecimento de sua frota. Nesse sistema, cada veículo pode ser
abastecido com um determinado combustível, e esse combustível precisa
ser representado como um objeto próprio, com características
específicas.

Para modelar essa situação, você deverá criar duas classes: uma classe
Combustivel e uma classe Veiculo. A ideia é que um objeto da classe
Veiculo utilize um objeto da classe Combustivel como parte de sua
estrutura.

Classe Combustivel:

A classe Combustivel deve possuir os seguintes atributos privados: tipo
(String) e precoLitro (double).

Construtor: Deve receber o tipo e o precoLitro.

Validação: O preço por litro não pode ser negativo. Caso um valor
inválido seja informado, ele deve ser ajustado para 0.

Classe Veiculo:

A classe Veiculo deve possuir os seguintes atributos privados: modelo
(String), tanqueLitros (double) e combustivel (Combustivel).

Construtor: Deve receber o modelo, a capacidade do tanque em litros e um
objeto do tipo Combustivel.

Encapsulamento:

O modelo deve ter apenas Getter. O tanqueLitros deve ter Getter e
Setter. O combustivel deve ter Getter, mas sua alteração deve ser feita
por meio de um método específico, e não por um Setter comum. Regra de
Validação no Consumo de Objeto:

Crie um método chamado trocarCombustivel(Combustivel novoCombustivel).
Esse método só deve permitir a troca se o tipo do combustível for
"Gasolina", "Etanol" ou "Diesel". Caso seja informado qualquer outro
tipo, a troca não deve acontecer e o sistema deve exibir uma mensagem de
erro informando que o combustível é inválido para a frota.

Além disso, crie um método chamado calcularCustoTanqueCheio(), que
retorne o valor necessário para encher completamente o tanque do veículo
com base na capacidade do tanque e no preço por litro do combustível
atualmente associado ao veículo.

Ao final, implemente uma pequena rotina de testes na classe principal,
criando pelo menos um combustível válido, um combustível inválido e um
veículo. Teste a troca de combustível e exiba o custo do tanque cheio
após as operações realizadas.