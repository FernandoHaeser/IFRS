Lendo um JSON com XMLHttpRequest

Crie um arquivo dados.json com um objeto simples, por exemplo { "nome": "Rodrigo", "idade": 40 }. Repita o exercício anterior, mas agora use JSON.parse(xhr.responseText) para converter a resposta em objeto e exiba apenas o valor de nome no <p id="resultado">.