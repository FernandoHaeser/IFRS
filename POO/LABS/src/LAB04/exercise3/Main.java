package LAB04.exercise3;

public class Main {

    public static void main(String[] args) {

        Medico medico = new Medico("Dra. Carla Souza", "12345-RS");

        Clinica clinicaCentro = new Clinica("Clínica Centro");
        Clinica clinicaZonaSul = new Clinica("Clínica Zona Sul");

        clinicaCentro.contratar(medico);
        clinicaZonaSul.contratar(medico);

        System.out.println(clinicaCentro.resumoCorpoClinico());
        System.out.println();
        System.out.println(clinicaZonaSul.resumoCorpoClinico());
    }
}
