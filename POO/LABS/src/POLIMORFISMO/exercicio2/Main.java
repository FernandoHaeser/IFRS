package POLIMORFISMO.exercicio2;

import POLIMORFISMO.exercicio2.models.*;

public class Main {
    public static void main(String[] args) {
        Caixa caixa = new Caixa();

        Pagamento pix = new Pix(220);
        Pagamento boleto = new Boleto(150);
        Pagamento cartaoAvista = new CartaoCredito(300, false, 1);
        Pagamento cartaoParcelado = new CartaoCredito(300, true, 3);

        System.out.println(caixa.fecharCaixa("Teclado", pix));
        System.out.println(caixa.fecharCaixa("Bolo encomendado", boleto));
        System.out.println(caixa.fecharCaixa("Fone de ouvido", cartaoAvista));
        System.out.println(caixa.fecharCaixa("Monitor", cartaoParcelado));

        System.out.println(caixa.fecharDia());
    }
}
