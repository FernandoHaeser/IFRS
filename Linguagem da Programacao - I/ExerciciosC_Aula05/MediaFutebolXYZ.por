programa
{
	inclua biblioteca Matematica --> mat
	
	funcao inicio()
	{
		inteiro idade, somaIdades = 0, i = 0
		real mediaTime = 0.0

		enquanto (i < 11) {
			escreva("Informe sua idade: ")
			leia(idade)

			somaIdades += idade
			i++
		}

		mediaTime = somaIdades / 11

		escreva("A media das idades do time de futebol XYZ e de: ", mat.arredondar(mediaTime,2))
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 374; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = {somaIdades, 7, 17, 10};
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */