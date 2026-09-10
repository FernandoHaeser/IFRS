package LAB04.praticExercises.exercise1;


import java.util.Scanner;

public class Main {

	public static void main(String[] args) {

		Carrinho carrinho = new Carrinho(245.60);
		ValidadorDeCupom validador = new ValidadorDeCupom();
		Scanner sc = new Scanner(System.in);

		System.out.println("Seu carrinho atualmente: R$" + carrinho.getTotal());
		System.out.print("Informe o cupom para receber desconto: ");
		int cupom = sc.nextInt();

		carrinho.aplicarCupom(validador, cupom);

		System.out.println("Seu carrinho atualmente: R$" + carrinho.getTotal());

		sc.close();
	}

}
