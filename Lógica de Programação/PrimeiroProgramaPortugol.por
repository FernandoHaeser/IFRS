programa
{
	
	funcao inicio()
	{
		inteiro idade
		caracter gender
		real salary
		cadeia nome, sobrenome

		escreva("Qual seu nome? ")
		leia(nome)
		
		escreva("Qual seu sobrenome? ")
		leia(sobrenome)

		escreva("Informe sua idade: ")
		leia(idade)
		
		escreva("Qual seu genero? [F/M]\n")
		escreva("R: ")
		leia(gender)

		escreva("Qual seu salario? R$")
		leia(salary)

		limpa()

		escreva("Nome: ", nome, " ", sobrenome, "\n")
		escreva("Idade: ", idade, "\n")

		escolha (gender) {
			caso 'f':
				escreva("Genero: Feminino\n")
				pare
			caso 'F':
				escreva("Genero: Feminino\n")
				pare
			caso 'm':
				escreva("Genero: Masculino\n")
				pare
			caso 'M':
				escreva("Genero: Masculino\n")
				pare
			caso contrario:
				escreva("GENERO INVALIDO! \n")
		}

		/*
		se (gender == 'f' ou gender == 'F') 
			escreva("Genero: Feminino\n")
		senao se (gender == 'm' ou 
		gender == 'M') 
			escreva("Genero: Masculino\n")
		senao 
			escreva("Genero: Voce informou um genero invalido!\n")
		*/

		escreva("Seu salario e: R$", salary, "\n")

		se (salary >= 5000)
			escreva("Salario acima da media\n")
		senao
			escreva("Salario abaixo da media\n")
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 593; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */