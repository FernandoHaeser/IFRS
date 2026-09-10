package LAB04.praticExercises.exercise2;

public class Main {
	
	public static void main(String[] args) {
		
		Musica negroDrama = new Musica("Racionais MC", "Negro Drama");
		Playlist soAsBraba = new Playlist("AS BRABISSIMAS", negroDrama);

		soAsBraba.tocar();
	}

}
