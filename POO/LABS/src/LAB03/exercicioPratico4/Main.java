package LAB03.exercicioPratico4;

public class Main {
    public static void main(String[] args) {

        // Declaracao de dois tipos de combustiveis para validacao
        Combustivel combustivelValido = new Combustivel("Gasolina", 3.99);
        Combustivel combustivelInvalido = new Combustivel("Alcool60", 1.99);
        Combustivel combustivelNovo = new Combustivel("Etanol", 2.99);

        // Variaveis para o construtor Veiculo
        String modelo = "SUV";
        double tanqueLitros = 50;

        Veiculo carro = new Veiculo(modelo, tanqueLitros, combustivelValido); // criacao de veiculo com combustivel
                                                                              // valido
        // valores default
        System.out.println(carro.toString());

        // TESTE 1 - Alterando valor do combustivel para preco invalido, logo default 0,
        // entao e gratuito hehehe.
        combustivelValido.setPrecoLitro(-23);
        System.out.println(carro.toString());

        // devolvendo valor para testes
        combustivelValido.setPrecoLitro(3.99);

        // TESTE 2 - Alterando tamanho do tanque (L), logo valor do calculo do tanque
        // cheio deve aumentar
        carro.setTanqueLitros(60); // aumento de 10L / +20%
        System.out.println(carro.toString()); // deve haver aumento de 20%, logo de R$199.5 + 20% = R$239.4

        // TESTE 3 - Trocar combustivel para invalido, logo, nao ira trocar.
        carro.trocarCombustivel(combustivelInvalido);
        System.out.println(carro.toString()); // deve alarmar no log a info definida em Veiculo.java

        // TESTE 4 - Trocar combustivel para valido (novo).
        carro.trocarCombustivel(combustivelNovo);
        System.out.println(carro.toString()); // deve alarmar a info de troca realizada e listar o novo combustivel
                                              // "Etanol"
    }
}
