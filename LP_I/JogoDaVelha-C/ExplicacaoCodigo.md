# Documentação do Jogo da Velha em C

## Descrição
Um jogo da velha implementado em C com interface via terminal, suportando dois jogadores locais.

## Características
- Interface limpa com tabuleiro bem formatado
- Validação de jogadas
- Detecção automática de vitória
- Detecção de empate
- Feedback visual claro para os jogadores

## Funções Principais

### `exibir_tabuleiro()`
- Limpa a tela antes de mostrar o tabuleiro
- Mostra o estado atual do jogo
- Usa X para jogador 1 e O para jogador 2

### `verificar_vitoria()`
Verifica todas as possíveis condições de vitória:
- Linhas horizontais
- Colunas verticais
- Diagonais
- Retorna o número do jogador vencedor ou 0 se não houver vencedor

### `fazer_jogada()`
- Processa a entrada do jogador atual
- Valida as coordenadas (1-3)
- Verifica se a posição está livre
- Atualiza o tabuleiro

### `main()`
Controla o fluxo do jogo:
1. Inicializa o tabuleiro vazio
2. Alterna entre jogadores
3. Verifica condições de vitória/empate
4. Exibe resultado final

## Como Jogar
1. O jogo começa com o Jogador 1 (X)
2. Cada jogador digita:
   - Linha (1-3)
   - Coluna (1-3)
3. O jogo continua até:
   - Um jogador vencer (3 símbolos iguais em linha)
   - Empate (todas posições preenchidas)

## Compilação e Execução

```bash
# Compilar o jogo
gcc jogo_da_velha.c -o jogo

# Executar
./jogo
```

## Requisitos
- GCC Compiler
- Sistema Unix-like (para os comandos clear e sleep)

## Estrutura do Tabuleiro
```
     |     |
------------------
     |     |
------------------
     |     |
```

## Exemplos de Jogadas
- Jogador 1 (X) sempre começa
- Para jogar no centro: linha 2, coluna 2
- Para jogar no canto superior direito: linha 1, coluna 3

## Status de Saída
- Vitória: "Jogador X venceu!"
- Empate: "Jogo empatado!"