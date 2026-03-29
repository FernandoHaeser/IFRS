programa {

/*
* Em um laboratório usam-se 3 tipos de cobaias:
* ratos, coelhos e ovelhas. O código para ratos é 1, para coelhos 2 e ovelhas 3.
* Foram feitas 25 experiências, nas quais foram utilizados apenas um dos tipos de cobaias em cada uma das experiência. 
* Faça um algoritmo que leia, para cada experiência, o código da cobaia utilizada e a quantidade de cobaias.
*
* Deseja-se saber:
* a) o total de cobaias utilizadas;
* b) o total de ratos;
* c) o total de coelhos;
* d) o total de ovelhas;
* e) o percentual de cada cobaia.
* OBS: desenvolva uma estrutura de controle para que o programa só aceite o código 1, 2, 3. Caso o usuário digite outro número, force a digitação do código correto.
*/
	
	funcao inicio() {
		inteiro resp, qntdRatos, qntdCoelhos, qntdOvelhas, totalCobaias = 0 ,totalRatos = 0, totalCoelhos = 0, totalOvelhas = 0
		real percentualRatos, percentualCoelhos, percentualOvelhas

		para (inteiro i = 0; i < 25; i++) {
			
			faca {
			
				escreva("Informe o codigo da cobaia:\n")
				escreva("[1] - Rato\n")
				escreva("[2] - Coelho\n")
				escreva("[3] - Ovelha\n")
				escreva("R: ")
				leia(resp)

				se (resp < 1 ou resp > 3)
					escreva("\n\nInforma uma resposta válida!\n\n")
					
			} enquanto (resp < 1 ou resp > 3)

			escreva("\n\n")

			se (resp == 1) {

				escreva("Qual total de Ratos que deseja utilizar? ")
				leia(qntdRatos)

				totalRatos += qntdRatos
				totalCobaias += qntdRatos
				
			} senao se (resp == 2) {

				escreva("Qual total de Coelhos que deseja utilizar? ")
				leia(qntdCoelhos)

				totalCoelhos += qntdCoelhos
				totalCobaias += qntdCoelhos
				
			} senao {

				escreva("Qual total de Ovelhass que deseja utilizar? ")
				leia(qntdOvelhas)

				totalOvelhas += qntdOvelhas
				totalCobaias += qntdOvelhas
				
			}
		}


		percentualRatos = totalRatos * 100 / totalCobaias
		percentualCoelhos = totalCoelhos * 100 / totalCobaias
		percentualOvelhas = totalOvelhas * 100 / totalCobaias

		escreva("\n\nTotal de cobaias: ", totalCobaias)
		escreva("\nTotal de Ratos: ", totalRatos)
		escreva("\nTotal de Coelhos: ", totalCoelhos)
		escreva("\nTotal de Ovelhas: ", totalOvelhas)
		escreva("\n\nPercentual Ratos: ", percentualRatos)
		escreva("\nPercentual Coelhos: ", percentualCoelhos)
		escreva("\nPercentual Ovelhas: ", percentualOvelhas)
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 1825; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */