programa {

  funcao inicio() {
    gerenciarLugares()
  }

  funcao gerenciarLugares() {

    // Matriz de lugares
    caracter lugares[5][10]

    // Preenche todos como 'O' (livre)
    para (inteiro i = 0; i < 5; i++) {
      para (inteiro j = 0; j < 10; j++) {
        lugares[i][j] = 'O'
      }
    }

    // Loop principal do programa
    enquanto (verdadeiro) {

      limpa()
      escreva("| CINEMINHA DO AMASSO |\n\n")
      escreva("=== MAPA DE LUGARES ===\n")
      escreva("O = Livre | X = Ocupado\n\n")

      // Mostrar sala
      escreva("         === TELA ===\n\n")
      para (inteiro i = 0; i < 5; i++) {
        escreva("Fila ", i + 1, ":  ")
        para (inteiro j = 0; j < 10; j++) {
          escreva(lugares[i][j], " ")
        }
        escreva("\n")
      }
      escreva("\n     ======================\n")

      // Escolher lugar
      inteiro fileira, assento
      escreva("\nEscolha sua fileira (1-5): ")
      leia(fileira)
      escreva("Escolha seu assento (1-10): ")
      leia(assento)

      // Validar entrada
      se (fileira < 1 ou fileira > 5 ou assento < 1 ou assento > 10) {
        escreva("\n⚠️  Lugar inválido! Tente novamente.\n")
      }

      // Ajustar índices (pois matriz começa em 0)
      fileira = fileira - 1
      assento = assento - 1

      // Verificar se está ocupado
      se (lugares[fileira][assento] == 'X') {
        escreva("\n❌ Lugar já está ocupado!\n")
      } senao {
        limpa()
        lugares[fileira][assento] = 'X'
        escreva("\n✅ Lugar reservado com sucesso!\n")
      }

      escreva("\n\n| CINEMINHA DO AMASSO |\n\n")
      escreva("=== MAPA DE LUGARES ===\n")
      escreva("O = Livre | X = Ocupado\n\n")

      // Mostrar sala
      escreva("         === TELA ===\n\n")
      para (inteiro i = 0; i < 5; i++) {
        escreva("Fila ", i + 1, ":  ")
        para (inteiro j = 0; j < 10; j++) {
          escreva(lugares[i][j], " ")
        }
        escreva("\n")
      }
      escreva("\n     ======================\n")

      // Perguntar se deseja continuar
      caracter opcao
      escreva("\nDeseja escolher outro lugar? (S/N): ")
      leia(opcao)

      se (opcao == 'N' ou opcao == 'n') {
        escreva("\nObrigado por usar o Cineminha do Amasso! 🍿\n")
        pare
      }
    }
  }
}
