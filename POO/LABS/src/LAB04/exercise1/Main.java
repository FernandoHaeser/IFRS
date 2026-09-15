package LAB04.exercise1;

public class Main {

    public static void main(String[] args) {

        Cupom cupom = new Cupom(50);

        Pedido pedido1 = new Pedido(100);
        Pedido pedido2 = new Pedido(250);

        System.out.println("Pedido 1 (s/ Desconto): R$ " + pedido1.getValorBruto());
        System.out.println("Pedido 2 (s/ Desconto): R$ " + pedido2.getValorBruto());

        double valorFinal1 = pedido1.fechar(cupom);
        double valorFinal2 = pedido2.fechar(cupom);

        System.out.println("\nPedido 1: R$ " + valorFinal1);
        System.out.println("Pedido 2: R$ " + valorFinal2);
    }
}
