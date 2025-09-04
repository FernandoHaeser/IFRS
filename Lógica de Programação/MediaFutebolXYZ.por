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
