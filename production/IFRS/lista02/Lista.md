1. Sistema de Gestão de Biblioteca

No IFRS, a biblioteca precisa de um sistema para registrar seus livros. Crie uma classe chamada Livro com os atributos titulo, autor e paginasTotais. Adicione um método exibirDados() que imprima as informações do livro no console. No método main, instancie dois objetos desta classe com dados de livros.
Exemplo: "Java como Programar", "Deitel", 1386 páginas.

2. Controle de Registro Acadêmico

Crie uma classe Aluno que represente um estudante do curso de Sistemas para Internet. A classe deve ter os atributos nome, matricula e notaSemestre. Adicione um método chamado verificarAprovacao() que retorne "Aprovado" se a nota for maior ou igual a 7.0 e "Em Exame" caso contrário.
Dica: Utilize uma estrutura if/else dentro do método.

3. Simulador de Conta Bancária Simples

Desenvolva uma classe ContaBancaria com os atributos titular e saldo. Implementar os métodos depositar(double valor) e sacar(double valor). O método de saque deve apenas subtrair o valor se houver saldo suficiente. Teste a classe criando uma conta, realizando um depósito e, em seguida, um saque.
Regra: Se o saldo for insuficiente, exiba uma mensagem de erro no console.

4. Controle de Hardware

Considerando os computadores de um laboratório, crie uma classe Computador com os atributos marca, processador e estaLigado (boolean). Adicione métodos para ligar() e desligar(), que alteram o estado do atributo booleano. Adicione um método verificarStatus() que imprima se o computador está pronto para uso ou desligado.

5. Calculadora de Geometria

Implemente uma classe Retangulo com atributos base e altura. A classe deve ter métodos para calcularArea() (base * altura) e calcularPerimetro() (2 * (base + altura)). No main, peça ao usuário os valores ou atribua-os diretamente para validar os cálculos.