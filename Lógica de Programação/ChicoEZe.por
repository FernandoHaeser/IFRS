programa {
  funcao inicio() {
   real chico=1.50,ze=1.10
   inteiro contAno=0

    faca{
      chico=chico + 0.02
      ze=ze + 0.03
      contAno++
    }enquanto (chico > ze)
    escreva("São necessários ", contAno, " anos para que Zé seja maior que Chico\n")
  }
}
