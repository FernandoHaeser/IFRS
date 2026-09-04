# Exercicio 1

- Questão 1: Sistema de Automação

Uma empresa de automação residencial está desenvolvendo um aplicativo para controlar dispositivos inteligentes dentro de uma casa. Um dos primeiros dispositivos a ser implementado é uma Lâmpada Inteligente (Smart Bulb), que permite controlar o brilho e o estado (ligada/desligada).

Durante o desenvolvimento, surgiu a necessidade de garantir que os dados da lâmpada sejam protegidos contra alterações indevidas e que os valores utilizados façam sentido dentro do funcionamento do dispositivo.

Atributos Privados: marca (String), brilho (int) e ligada (boolean).

Construtor: Deve receber a marca. O brilho deve iniciar em 50 e ligada como false.

Encapsulamento:

A marca não pode ser alterada após a criação (somente Getter).
O atributo ligada não deve ter Setter. Crie os métodos ligar() e desligar() para alterar esse estado.
O brilho deve ter Getter e Setter.
Validação: No Setter do brilho, garanta que o valor esteja sempre entre 0 e 100. Se o usuário tentar passar 150, o brilho deve ser travado em 100. Se passar um valor negativo, trave em 0.