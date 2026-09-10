package LAB04.praticExercises.exercise2;

public class Playlist {

	private String nome;
	private Musica m;

	public Playlist(String nome, Musica m) {
		this.nome = nome;
		this.m = m;
	}

	public void tocar() {
		System.out.println("A música " + m.titulo 
				+ " do artista " + m.artista
				+ " está tocando agora na playlist " + nome + "!");
	}

}
