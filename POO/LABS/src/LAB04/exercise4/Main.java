package LAB04.exercise4;

public class Main {

    public static void main(String[] args) {

        Perfil perfil = new Perfil("Fernando");

        System.out.println(perfil.getNome() + " público? " + perfil.isPerfilPublico());

        perfil.tornarPublico();

        System.out.println(perfil.getNome() + " público? " + perfil.isPerfilPublico());
    }
}
