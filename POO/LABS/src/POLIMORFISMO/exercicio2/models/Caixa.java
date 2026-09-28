package POLIMORFISMO.exercicio2.models;

public class Caixa {

    private int quantidadePagamentos = 0;
    private double totalVendido = 0;

    public String fecharCaixa(String item, Pagamento tipoPagamento) {
        quantidadePagamentos++;
        totalVendido += tipoPagamento.calcularValorFinal();
        return "\nItem: " + item + "\nValor: R$" + tipoPagamento.getValor() + "\n" + tipoPagamento.descrever();
    }

    public String fecharDia() {
        return "\nTotal de vendas: " + quantidadePagamentos + "\nTotal vendido: R$"
                + String.format("%.2f", totalVendido);
    }

}
