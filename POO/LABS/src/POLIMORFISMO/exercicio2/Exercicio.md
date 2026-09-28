 Caixa da cafeteria
Uma cafeteria perto do campus aceita três formas de pagamento. No Pix o cliente ganha 5% de desconto, no boleto (usado nas encomendas de bolo) há uma taxa de emissão de R$ 3,50, e no cartão de crédito o valor à vista não muda, enquanto o parcelado recebe juros compostos de 1,99% ao mês, aplicados uma vez para cada parcela. Não existe pagamento que não seja de uma dessas formas, e o caixa, que registra cada venda e fecha o dia, não sabe e nem precisa saber qual forma de pagamento está processando.

O que sua solução precisa ter

Uma classe que representa um pagamento qualquer, declarada de modo que o compilador impeça a criação de um objeto dela, e que obrigue toda forma de pagamento a saber calcular seu valor final e a se descrever em uma linha.
Uma classe para cada forma de pagamento. No cartão, a descrição inclui o número de parcelas e o valor de cada uma.
Uma classe para o caixa, com um método que recebe um pagamento, exibe o valor da compra, a descrição e o valor final, e acumula o total recebido, além de um método que exibe o fechamento do dia com a quantidade de pagamentos e o total.
No main, registre no caixa pelo menos um pagamento de cada forma, incluindo um cartão à vista e um parcelado, e exiba o fechamento.