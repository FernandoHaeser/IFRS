01 Ingressos do festival
O sistema de vendas de um festival de música foi escrito às pressas antes da primeira edição, e todas as categorias de ingresso cabem numa única classe, que guarda o tipo como texto e decide o preço com uma sequência de if. O código atual está abaixo, e também no arquivo IngressosAntigo.java, disponível nesta tarefa. Para a próxima edição a organização vai criar uma quarta categoria, o camarote, que custa o mesmo que o VIP e mais R$ 120,00, e ninguém da equipe quer mexer de novo naquele método.

```java
public class IngressosAntigo {

    static class Ingresso {
        private String comprador;
        private String tipo;
        private double precoBase;

        public Ingresso(String comprador, String tipo, double precoBase) {
            this.comprador = comprador;
            this.tipo = tipo;
            this.precoBase = precoBase;
        }

        public String getComprador() {
            return comprador;
        }

        public double calcularPreco() {
            if (tipo.equals("inteira")) {
                return precoBase;
            } else if (tipo.equals("meia")) {
                return precoBase / 2;
            } else if (tipo.equals("vip")) {
                return precoBase + 150.0;
            } else {
                return 0;
            }
        }
    }

    public static void main(String[] args) {
        Ingresso[] vendas = new Ingresso[3];
        vendas[0] = new Ingresso("Larissa", "inteira", 220.0);
        vendas[1] = new Ingresso("Bruno", "meia", 220.0);
        vendas[2] = new Ingresso("Camila", "vip", 220.0);

        double total = 0;
        for (int i = 0; i < vendas.length; i++) {
            double preco = vendas[i].calcularPreco();
            System.out.printf("%s pagou R$ %.2f%n", vendas[i].getComprador(), preco);
            total = total + preco;
        }
        System.out.printf("Total arrecadado: R$ %.2f%n", total);
    }
}
```
O que sua solução precisa ter

Uma classe para cada categoria de ingresso (inteira, meia-entrada, VIP e camarote), sem nenhum atributo que guarde o tipo como texto e sem nenhum if que pergunte qual é a categoria.
As mesmas regras de preço do código atual: a inteira custa o preço-base, a meia-entrada custa metade, o VIP custa o preço-base mais R$ 150,00 e o camarote custa o preço do VIP mais R$ 120,00. Nas categorias em que o preço parte do cálculo de outra, esse cálculo é reaproveitado com super, e não reescrito.
Cada categoria sabe informar o próprio nome para aparecer na listagem.
No main, um único vetor com um ingresso de cada categoria, percorrido por um único laço que exibe comprador, categoria e valor pago de cada venda e, no fim, o total arrecadado.