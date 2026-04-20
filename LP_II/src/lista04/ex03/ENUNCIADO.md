3. Sistema de planos de assinatura

Crie uma classe base chamada Plano com os atributos:

nomeCliente
valorBase
Implemente os métodos:

calcularMensalidade()
exibirPlano()
Depois, crie as subclasses:

- PlanoBasico

Regra:

mensalidade = valor base sem alteração

- PlanoEstudante

Regra:

aplica 40% de desconto sobre o valor base
PlanoPremium

Regra:

aplica 15% de acréscimo sobre o valor base
depois soma R$ 12,00 de taxa de suporte prioritário

- PlanoFamiliar

Atributo extra:

quantidadePessoas
Regra:

mensalidade = valor base + (quantidadePessoas - 1) * 25
se quantidadePessoas for maior ou igual a 4, aplica 10% de desconto no total

- PlanoEmpresarial

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