package lista04.ex02;

import lista04.ex02.model.*;

public class Main {
    public static void main(String[] args) {

        Produto livro = new Livro("O pequeno princípe", 39.90);
        Produto eletronico = new Eletronico("Controle Remoto", 15.00);
        Produto roupa = new Roupa("Japona", 89.90, 3);
        Produto alimento = new Alimento("Pepino", 6.00, 2);

        System.out.println(livro.exibirResumo());
        System.out.println(eletronico.exibirResumo());
        System.out.println(roupa.exibirResumo());
        System.out.println(alimento.exibirResumo());

    }
}
