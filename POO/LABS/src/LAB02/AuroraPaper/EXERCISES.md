
Três exercícios curtos, cada um concentrado em uma única estrutura da linguagem.

01 A venda do dia
tiposoperadores
A papelaria vendeu uma remessa de cadernos e precisa exibir a nota dessa venda na tela. Os cadernos saem do estoque em caixas de 12 unidades, e a loja quer saber quantas caixas cheias foram usadas e quantas unidades sobraram soltas.

O que fazer

Declare as variáveis com estes valores fixos, sem leitura pelo teclado: o nome do produto é "Caderno universitario", a quantidade é 30, o preço unitário é 24.90, o frete é 12.50 e cada caixa comporta 12 unidades.
Calcule o subtotal multiplicando a quantidade pelo preço unitário, e o total somando o frete ao subtotal.
Calcule as caixas cheias e as unidades soltas usando a divisão inteira e o resto da divisão.
Exiba o resultado no formato abaixo, com duas casas decimais nos valores em reais.
Saída esperada

Produto: Caderno universitario
Quantidade: 30 unidades
Subtotal: R$ 747,00
Frete: R$ 12,50
Total: R$ 759,50
Caixas cheias: 2
Unidades soltas: 6
A divisão inteira e o resto só produzem o resultado esperado porque as duas variáveis envolvidas são inteiras.

02 Faixas de desconto
condicional encadeada
A campanha de volta às aulas dá um desconto que cresce conforme o valor da compra: abaixo de R$ 50,00 não há desconto; de R$ 50,00 a menos de R$ 150,00 o desconto é de 5%; de R$ 150,00 a menos de R$ 300,00 é de 10%; e de R$ 300,00 em diante é de 15%.

O que fazer

Leia do teclado o valor da compra.
Determine o percentual de desconto com uma cadeia de if / else if / else.
Calcule o valor do desconto e o valor final.
Exiba os três dados no formato abaixo.
Saída esperada

Valor da compra: 180,00
Desconto aplicado: 10%
Valor do desconto: R$ 18,00
Valor final: R$ 162,00
Escrever quatro if independentes em vez de uma cadeia encadeada faz mais de uma faixa ser aplicada, e o desconto acaba sempre em 15%.

03 Fechamento do caixa
laço com sentinela
No fim do expediente o operador digita, uma a uma, as vendas do dia, e encerra a digitação informando o valor zero. Como não se sabe de antemão quantas vendas houve, o laço precisa continuar até encontrar esse zero.

O que fazer

Leia valores de venda em um laço while, até que o valor digitado seja zero.
Enquanto lê, mantenha um contador de vendas e um acumulador do total.
Ao encerrar, exiba a quantidade de vendas, o total e o ticket médio, que é o total dividido pela quantidade.
Se o operador digitar zero logo na primeira leitura, exiba apenas a mensagem Nenhuma venda registrada., já que dividir por zero aqui não faria sentido.
Saída esperada

Valor da venda (0 para encerrar): 150,00
Valor da venda (0 para encerrar): 89,90
Valor da venda (0 para encerrar): 310,00
Valor da venda (0 para encerrar): 45,50
Valor da venda (0 para encerrar): 0
Vendas registradas: 4
Total vendido: R$ 595,40
Ticket medio: R$ 148,85
Esquecer a segunda leitura dentro do laço deixa o programa rodando para sempre, porque a condição de parada nunca chega a mudar.

Parte 2 — Exercícios integradores
Três programas maiores, que exigem os vetores da apostila e os métodos já trabalhados, do jeito que aparecem em um programa de verdade.

04 O caixa da papelaria
menulaçocondicionalmétodos
O operador do caixa precisa de um programa que fique aberto o expediente inteiro, registrando vendas conforme elas acontecem e mostrando o resumo do dia sempre que solicitado. O programa só termina quando o operador escolhe encerrar o caixa.

O que fazer

Escreva o método exibirMenu(), que apenas imprime o menu abaixo.
No main, repita em um laço a exibição do menu e a leitura da opção, até que a opção escolhida seja 3.
Na opção 1, leia o valor da venda, recuse valores menores ou iguais a zero com uma mensagem, e nos demais casos acumule o total, incremente o contador e atualize a maior venda.
Na opção 2, mostre a quantidade de vendas, o total em caixa, o ticket médio e a maior venda.
Na opção 3, mostre o mesmo resumo, precedido da linha Fechamento do caixa:, e encerre.
Qualquer outro número digitado deve produzir a mensagem Opcao invalida.
Escreva o método calcularTicketMedio(double total, int quantidade), que devolve zero quando ainda não houve nenhuma venda.
Exemplo de uso

=== Caixa da papelaria ===
1 - Registrar venda
2 - Ver resumo do caixa
3 - Encerrar o caixa
Opcao: 1
Valor da venda: 150,00
Venda registrada.

=== Caixa da papelaria ===
1 - Registrar venda
2 - Ver resumo do caixa
3 - Encerrar o caixa
Opcao: 1
Valor da venda: 89,90
Venda registrada.

=== Caixa da papelaria ===
1 - Registrar venda
2 - Ver resumo do caixa
3 - Encerrar o caixa
Opcao: 3
Fechamento do caixa:
Vendas registradas: 2
Total em caixa: R$ 239,90
Ticket medio: R$ 119,95
Maior venda: R$ 150,00
Desafio (opcional): guarde também a menor venda do dia e mostre-a no resumo.

05 Controle de estoque 
menuvetores paraleloscondicionalmétodos
A papelaria controla cinco produtos e precisa acompanhar quanto tem de cada um, dar entrada quando chega mercadoria, dar baixa quando sai, saber quanto vale o estoque parado e ser avisada do que está acabando.

O que fazer

Declare três vetores paralelos, conforme o quadro abaixo, em que a posição de cada vetor se refere sempre ao mesmo produto.
Monte um menu com as seis opções: listar o estoque, dar entrada, dar baixa, ver o valor total do estoque, listar produtos com estoque baixo e sair. O programa só termina na opção 6.
Na listagem, mostre uma linha por produto, numerada de 1 a 5, com o nome, a quantidade e o preço.
Na entrada e na baixa, peça o número do produto e a quantidade. Recuse números fora da faixa de 1 a 5 com a mensagem Produto inexistente., e recuse a baixa quando a quantidade pedida for maior do que a disponível.
Escreva o método calcularValorTotal(int[] quantidades, double[] precos), que soma a quantidade vezes o preço de cada produto.
Considere estoque baixo qualquer produto com menos de 10 unidades.
Vetores a usar

String[] produtos = {"Caderno", "Caneta", "Mochila", "Lapis", "Borracha"};
int[] quantidades = {30, 120, 8, 200, 45};
double[] precos = {24.90, 3.50, 189.90, 1.80, 2.20};
Um trecho de uso, começando por uma baixa de 25 canetas. O menu foi omitido entre uma opção e outra para encurtar o exemplo.

Exemplo de uso

Opcao: 3
Numero do produto (1 a 5): 2
Quantidade: 25
Baixa registrada. Caneta: 95 un

Opcao: 5
Mochila: 8 un

Opcao: 4
Valor total do estoque: R$ 3057,70
Pedir o número do produto em vez do nome evita a comparação de textos, e o número digitado precisa virar índice do vetor subtraindo 1.

Desafio (opcional): acrescente uma opção que mostre qual produto tem o maior valor imobilizado, ou seja, a maior quantidade vezes preço.

06 Relatório de comissões
validaçãovetorescondicionalmétodos
No fim do mês a papelaria calcula a comissão dos cinco vendedores a partir de uma meta definida pelo gerente. Quem fica abaixo da meta recebe 3% do que vendeu; quem atinge a meta recebe 5%; e quem vende pelo menos uma vez e meia a meta recebe 7%.

O que fazer

Declare os dois vetores paralelos do quadro abaixo.
Leia a meta do mês do teclado, repetindo a leitura enquanto o valor informado não for maior que zero, com a mensagem A meta precisa ser maior que zero.
Escreva o método calcularComissao(double venda, double meta), que devolve o valor da comissão conforme as três faixas.
Escreva o método definirSituacao(double venda, double meta), que devolve o texto Abaixo, Atingiu ou Superou.
Escreva os métodos somar(double[] valores) e indiceDoMaior(double[] valores).
Exiba uma linha por vendedor e, ao final, o total vendido, a média por vendedor, quantos bateram a meta e o nome do melhor vendedor.
Vetores a usar

String[] vendedores = {"Ana", "Bruno", "Carla", "Diego", "Elisa"};
double[] vendas = {12500.00, 8300.50, 15750.00, 6200.00, 9980.25};
Considere a meta de 10000,00 na execução de teste.

Saída esperada

Meta do mes: 10000,00

Vendedor | Vendas | Comissao | Situacao
Ana | R$ 12500,00 | R$ 625,00 | Atingiu
Bruno | R$ 8300,50 | R$ 249,02 | Abaixo
Carla | R$ 15750,00 | R$ 1102,50 | Superou
Diego | R$ 6200,00 | R$ 186,00 | Abaixo
Elisa | R$ 9980,25 | R$ 299,41 | Abaixo

Total vendido: R$ 52730,75
Media por vendedor: R$ 10546,15
Bateram a meta: 2 de 5
Melhor vendedor: Carla
Desafio (opcional): mostre também quanto faltou, em reais, para cada vendedor que ficou abaixo da meta.

