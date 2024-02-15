package lab04;

public class main {

	public static void main(String[] args) {
		Caminhao v = new Caminhao("RUI-5782", 2017, 6);
		Onibus b = new Onibus("DRS-2030", 2005, 40);
		
		v.exibirDados();
		b.exibirDados();
	}

}
