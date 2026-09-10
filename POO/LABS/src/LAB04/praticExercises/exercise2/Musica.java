package LAB04.praticExercises.exercise2;

public class Musica {
	
	public String artista;
	public String titulo;
	
	public Musica(String artista, String titulo) {
		this.artista = artista;
		this.titulo = titulo;
	}

	@Override
	public String toString() {
		return "Musica [artista=" + artista + ", titulo=" + titulo + "]";
	}
	
	
}
