1. Sistema de ingressos

Crie uma classe Ingresso com o método exibirTipo().

Depois, crie duas subclasses:

IngressoVip
IngressoMeiaEntrada
Cada subclasse deve sobrescrever o método exibirTipo() exibindo uma mensagem apropriada.

No main, crie duas referências do tipo Ingresso, uma apontando para IngressoVip e outra para IngressoMeiaEntrada, e chame o método exibirTipo().

2. Sistema de descontos de uma loja virtual

Crie uma classe base chamada Produto com os atributos:

nome
precoBase
Na classe Produto, implemente os métodos:

calcularPrecoFinal()
exibirResumo()
Depois, crie as subclasses:

Livro

Regra:

possui 10% de desconto sobre o preço base
Eletronico

Regra:

possui 5% de desconto
depois soma R$ 20,00 de taxa de garantia
Roupa

Atributo extra:

quantidadePecas
Regra:

se quantidadePecas for até 2, desconto de 5%
se for 3 ou mais, desconto de 15%
Alimento

Atributo extra:

diasParaVencimento
Regra:

se faltarem até 3 dias para vencer, desconto de 30%
caso contrário, desconto de 8%
O que o programa deve fazer

No main, crie pelo menos:

1 Livro
1 Eletronico
1 Roupa
1 Alimento
Mas todos devem ser armazenados em variáveis do tipo Produto.

Depois:

chame calcularPrecoFinal()
exiba o resumo de cada produto
Requisitos

usar herança
sobrescrever calcularPrecoFinal()
sobrescrever exibirResumo(), se desejar
mostrar nome, preço base e preço final
3. Sistema de planos de assinatura

Crie uma classe base chamada Plano com os atributos:

nomeCliente
valorBase
Implemente os métodos:

calcularMensalidade()
exibirPlano()
Depois, crie as subclasses:

PlanoBasico

Regra:

mensalidade = valor base sem alteração
PlanoEstudante

Regra:

aplica 40% de desconto sobre o valor base
PlanoPremium

Regra:

aplica 15% de acréscimo sobre o valor base
depois soma R$ 12,00 de taxa de suporte prioritário
PlanoFamiliar

Atributo extra:

quantidadePessoas
Regra:

mensalidade = valor base + (quantidadePessoas - 1) * 25
se quantidadePessoas for maior ou igual a 4, aplica 10% de desconto no total
PlanoEmpresarial

Atributo extra:

quantidadeLicencas
Regra:

mensalidade = valor base + (quantidadeLicencas * 18)
se houver mais de 10 licenças, aplicar 12% de desconto
O que o programa deve fazer

No main, criar pelo menos um objeto de cada plano com referência do tipo Plano.

Depois:

chamar calcularMensalidade()
exibir um resumo com cliente, tipo de plano e valor final
Requisitos

usar herança
sobrescrever calcularMensalidade()
criar diferentes regras de cálculo
usar polimorfismo no programa principal
4. Sistema de batalha de RPG

Crie uma classe base chamada Personagem com os atributos:

nome
forca
defesa
Implemente na classe base os métodos:

calcularAtaque()
receberDano(int dano)
exibirStatus()
Depois, crie as subclasses:

Guerreiro

Regra do ataque:

dano = forca * 2
Mago

Atributo extra:

mana
Regra do ataque:

se tiver pelo menos 20 de mana, dano = forca * 3 e perde 20 de mana
se tiver menos de 20 de mana, dano = forca
Arqueiro

Atributo extra:

precisao
Regra do ataque:

dano = forca + precisao
se precisao for maior que 15, soma 10 pontos extras
Assassino

Atributo extra:

furtividade
Regra do ataque:

dano = forca + furtividade
se furtividade for maior que 20, o dano é multiplicado por 2
Regra de dano recebido

No método receberDano(int dano):

dano final recebido = dano - defesa
se o valor ficar menor que 0, considerar 0
O que o programa deve fazer

No main:

crie um objeto de cada subclasse
calcule o ataque de cada um
aplique esse dano em um alvo de teste ou apenas exiba o valor calculado
mostre o status final de cada personagem
Requisitos

usar herança
sobrescrever calcularAtaque()
reaproveitar receberDano() e exibirStatus()
mostrar claramente que cada subclasse ataca de forma diferente