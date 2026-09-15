package LAB04.exercise2;

public class Main {

    public static void main(String[] args) {

        Quarto quarto101 = new Quarto(101);
        Quarto quarto102 = new Quarto(102);

        Hospede ana = new Hospede("Ana");
        Hospede bruno = new Hospede("Bruno");

        ana.realizarCheckIn(quarto101);
        bruno.realizarCheckIn(quarto102);

        System.out.println("--- Antes da troca ---");
        System.out.println(ana.status());
        System.out.println(bruno.status());

        ana.realizarCheckIn(null);
        System.out.println("\n--- Depois que Ana deixa o quarto 101 ---");
        System.out.println(ana.status());

        bruno.realizarCheckIn(quarto101);
        System.out.println("\n--- Depois que Bruno faz check-in no quarto 101 ---");
        System.out.println(bruno.status());
    }
}
