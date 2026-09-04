# Exercicio 2

- Questão 2: 

### Monitor de Consumo IoT

Em uma casa inteligente, sensores são utilizados para monitorar o consumo de energia elétrica de diferentes aparelhos. Esses sensores enviam dados constantemente para o sistema, permitindo acompanhar o gasto em tempo real.

No entanto, é necessário garantir que esses dados sejam gerados de forma controlada e que informações importantes, como o consumo atual, não sejam alteradas diretamente por quem utiliza o sistema.

Atributos Privados: nomeAparelho (String), voltagem (int) e consumoAtual (double).

Construtor: Deve receber o nomeAparelho e a voltagem.

Validação: A voltagem só pode ser 110 ou 220. Se for informado qualquer outro valor, o padrão deve ser 110.

Comportamento e Aleatoriedade:

Crie um método chamado sondarConsumo(). Este método deve usar a classe Random para gerar um novo valor para consumoAtual entre 0 e 500 (watts).

Encapsulamento: O consumoAtual deve ser somente leitura para o usuário externo (apenas Getter), pois ele só é alterado internamente pelo método de sondagem.