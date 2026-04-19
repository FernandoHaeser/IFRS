## Sistema de descontos de uma loja virtual

Crie uma classe base chamada **Produto** com os atributos:

- nome
- precoBase

Na classe Produto, implemente os métodos:

- calcularPrecoFinal()
- exibirResumo()

Depois, crie as subclasses:

## Livro

**Regra:**

possui 10% de desconto sobre o preço base

## Eletronico

**Regra:**

possui 5% de desconto
depois soma R$ 20,00 de taxa de garantia

## Roupa

**Atributo extra:**

- quantidadePecas
**Regra:**

Se quantidadePecas for até 2, desconto de 5%
se for 3 ou mais, desconto de 15%

## Alimento

**Atributo extra:**

- diasParaVencimento
**Regra:**

se faltarem até 3 dias para vencer, desconto de 30%
caso contrário, desconto de 8%
O que o programa deve fazer

## No main, crie pelo menos:

- 1 Livro
- 1 Eletronico
- 1 Roupa
- 1 Alimento

Mas todos devem ser armazenados em variáveis do tipo **Produto**.

**Depois:**

- chame calcularPrecoFinal()
- exiba o resumo de cada produto

**Requisitos**

- usar herança
- sobrescrever calcularPrecoFinal()
- sobrescrever exibirResumo(), se desejar
- mostrar nome, preço base e preço final