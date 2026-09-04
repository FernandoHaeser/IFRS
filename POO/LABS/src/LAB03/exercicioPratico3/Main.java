package LAB03.exercicioPratico3;

import java.util.Random;

public class Main {
    public static void main(String[] args) {

        Random random = new Random();

        String nomePerfil = "Fernando Haeser";
        int idade = random.nextInt(20 + 1);

        Usuario user = new Usuario(nomePerfil, idade);

        // TEST CASES

        // default values:
        System.out.println(user.toString()); // if the random return a age less than 18, the restriction need to be Sim

        // 01 - Change the name account
        user.setNome("Thiago Haeser");
        System.out.println(user.toString()); // the new name account need to be: "Thiago Haeser"

        // 02 - Change age value
        user.setIdade(20); // the restriction would be FALSE, so the return of toString() need to be Nao
        System.out.println(user.toString()); // return with NAO

        // change the age to 5y
        user.setIdade(5);
        System.out.println(user.toString()); // return with SIM

    }
}
