# Laboratório — Relacionamentos entre Classes

Os exercícios abaixo têm como objetivo praticar diferentes formas de relacionamento entre objetos, especialmente:

* **Dependência**
* **Associação**
* **Agregação**
* **Composição**

Em todos os exercícios, observe principalmente **o ciclo de vida dos objetos**, **quem cria cada objeto** e **o que acontece com uma referência depois que ela é utilizada**.

---

## 01. Fechamento de pedido

Uma loja online permite que o cliente aplique um cupom de desconto ao fechar um pedido.

O mesmo cupom pode ser utilizado no cálculo de vários pedidos diferentes ao longo do dia. Porém, depois que um pedido é fechado, ele **não precisa saber qual cupom foi utilizado**.

O cupom participa apenas do cálculo do valor final. Ele não passa a fazer parte do pedido.

### Requisitos

Sua solução deve possuir:

* Uma classe `Pedido`, contendo o necessário para representar o **valor bruto da compra**.
* Uma classe `Cupom`, contendo um **percentual de desconto**.
* Uma forma de fechar um pedido informando um cupom **no momento do fechamento**.
* O método deve retornar ou produzir o **valor final do pedido com o desconto aplicado**.
* O `Pedido` **não pode armazenar o cupom em nenhum atributo**.

### No `main`

Monte um cenário em que:

1. Seja criado um único cupom.
2. O mesmo cupom seja utilizado para fechar dois pedidos com valores diferentes.
3. Os dois valores finais sejam exibidos.

### Para refletir

O que aconteceria se o `Pedido` armazenasse o `Cupom` como atributo "só por garantia"?

Considere se isso ainda representaria corretamente a situação descrita e qual seria a diferença entre **usar um objeto durante uma operação** e **manter uma referência para ele**.

> **Conceito principal:** dependência.

---

## 02. Check-in do hotel

Um hotel possui hóspedes e quartos como entidades independentes.

Um hóspede pode existir sem estar associado a nenhum quarto. Da mesma forma, um quarto pode existir sem estar associado a um hóspede.

Durante sua estadia, um hóspede pode fazer check-in em um quarto e, posteriormente, fazer check-in em outro.

O quarto que foi deixado pelo hóspede **continua existindo** e pode ser utilizado por outro hóspede.

### Requisitos

Sua solução deve possuir:

* Uma classe `Hospede`.
* Uma classe `Quarto`.
* As duas classes devem poder ser instanciadas **independentemente uma da outra**.
* O `Hospede` deve saber em qual quarto está atualmente, ou indicar que **não está hospedado em nenhum quarto**.
* Uma forma de realizar um novo check-in, alterando o quarto atual do hóspede.
* Uma forma de consultar o quarto atual de um hóspede.

### No `main`

Monte um cenário com:

* Pelo menos **dois hóspedes**.
* Pelo menos **dois quartos**.
* Um mesmo quarto sendo ocupado por um hóspede e, posteriormente, por outro.

Mostre o estado dos hóspedes:

1. Antes da troca.
2. Depois que o primeiro hóspede deixa o quarto.
3. Depois que o segundo hóspede faz check-in.

### Para refletir

Este exercício também possui uma classe mantendo uma referência para outra.

Porém, existe uma diferença importante em relação ao exercício anterior:

**o objeto referenciado continua existindo independentemente da referência.**

O que acontece com o `Quarto` quando o hóspede deixa de utilizá-lo?

> **Conceito principal:** associação.

---

## 03. Corpo clínico

Uma clínica possui um corpo clínico formado por médicos que já existem independentemente dela.

Um médico se forma, obtém seu registro profissional e começa a atender por conta própria **antes de qualquer vínculo com uma clínica específica**.

O mesmo médico pode trabalhar em mais de uma clínica simultaneamente.

Caso uma clínica encerre suas atividades, os médicos que trabalhavam nela **continuam existindo** e podem continuar atendendo em outros locais.

### Requisitos

Sua solução deve possuir:

* Uma classe `Clinica`.
* Uma classe `Medico`.
* O `Medico` deve ser criado **antes e fora da `Clinica`**.
* A `Clinica` deve receber um médico já existente.
* A `Clinica` **não pode instanciar um `Medico` internamente**.
* Uma forma de adicionar/contratar um médico para a clínica.
* Uma forma de listar ou resumir o corpo clínico de uma clínica.

### No `main`

Demonstre um cenário em que:

1. Um médico seja criado independentemente de qualquer clínica.
2. Duas clínicas sejam criadas.
3. O mesmo médico seja associado às duas clínicas.
4. O corpo clínico das duas clínicas seja exibido.

### Para refletir

Compare este exercício com o exercício 2.

Nos dois casos, uma classe mantém uma referência para um objeto que existe independentemente dela.

Porém, neste exercício existe uma preocupação adicional:

**quem possui a responsabilidade de criar o objeto referenciado?**

A `Clinica` cria o `Medico` ou recebe um `Medico` que já existia?

Essa diferença é importante para identificar diferentes tipos de relacionamento entre objetos.

> **Conceito principal:** agregação.

---

## 04. Configurações do perfil

Todo perfil criado em um aplicativo possui suas próprias configurações de privacidade.

Essas configurações nascem junto com o perfil e pertencem exclusivamente a ele.

Não existe uma situação em que as configurações sejam criadas separadamente e entregues ao perfil posteriormente.

Também não é possível pegar as configurações de um perfil e reutilizá-las em outro.

### Requisitos

Sua solução deve possuir:

* Uma classe `Perfil`.
* Uma classe `ConfiguracoesPrivacidade`.
* Pelo menos uma configuração que possa ser alterada, como:

  * perfil público/privado;
  * permitir notificações;
  * permitir mensagens.
* O objeto `ConfiguracoesPrivacidade` deve ser criado **dentro da criação do `Perfil`**.
* Não pode existir nenhum `new ConfiguracoesPrivacidade` fora da própria classe `Perfil`.
* Não deve existir uma forma de obter o objeto `ConfiguracoesPrivacidade` inteiro para substituí-lo externamente.
* Alterações nas configurações devem ser realizadas através de **métodos do próprio `Perfil`**.

### No `main`

Monte um cenário em que:

1. Um `Perfil` seja criado.
2. O estado inicial de uma configuração seja exibido.
3. A configuração seja alterada através de um método do `Perfil`.
4. O novo estado seja exibido.

### Para refletir

Compare este exercício com o exercício 3.

No exercício anterior, o objeto guardado:

* já existia antes;
* foi criado fora da classe que o utiliza;
* poderia ser utilizado por outras classes.

Neste exercício, o objeto de configurações:

* nasce junto com o `Perfil`;
* pertence exclusivamente a ele;
* não pode ser substituído por um objeto externo;
* deixa de fazer sentido fora do `Perfil`.

Essa diferença representa uma mudança importante na **responsabilidade e no ciclo de vida dos objetos**.

> **Conceito principal:** composição.

---

# Resumo dos relacionamentos

| Exercício | Relacionamento  | Característica principal                                                                  |
| --------- | --------------- | ----------------------------------------------------------------------------------------- |
| 01        | **Dependência** | O objeto é utilizado apenas durante uma operação e não é armazenado.                      |
| 02        | **Associação**  | Os objetos existem independentemente e podem se relacionar ao longo do tempo.             |
| 03        | **Agregação**   | O objeto é independente e é fornecido externamente ao objeto que o mantém.                |
| 04        | **Composição**  | O objeto pertence ao ciclo de vida do objeto que o cria e não é substituído externamente. |

## Questão geral

Ao implementar os exercícios, não se preocupe apenas com **"qual classe possui uma referência para qual"**.

Observe principalmente estas três perguntas:

1. **Quem cria o objeto?**
2. **Quanto tempo o objeto pode existir?**
3. **O objeto pode existir e ser utilizado independentemente daquele que mantém sua referência?**

Essas perguntas ajudam a diferenciar relacionamentos que, no código, podem parecer muito semelhantes.
