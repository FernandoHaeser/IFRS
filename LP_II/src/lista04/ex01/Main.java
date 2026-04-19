package lista04.ex01;

import lista04.ex01.model.*;

public class Main {
    public static void main(String[] args) {

        Ingresso ingresso = new Ingresso();
        Ingresso ingresso1 = new IngressoVip();
        Ingresso ingresso2 = new IngressoMeiaEntrada();

        ingresso.exibirTipo();
        ingresso1.exibirTipo();
        ingresso2.exibirTipo();
    }
}
