package estudosp3;
import java.util.ArrayList;

public class GestaoContatos {
	ArrayList<Contato> lista = new ArrayList<Contato>();
	
	public void adicionaContato(Contato ctt) {
		lista.add(ctt);
	}
	
	public void eliminaContato(String nome) {
		for(Contato aux : lista){
		if(aux.getNome() == nome) {
			lista.remove(aux);
			System.out.println("\nContato removido com sucesso");
			return;
		}
		else System.out.println("\nContato não encontrado");
		}
	}
	
	
	public void listaContatos() {
		for(Contato aux :lista) {
			aux.toString();
		}
	}
	
	public Contato maisVelho() {
		Contato maisVelho = lista.get(0);
		
		for(Contato aux : lista) {
			if(aux.getIdade() > maisVelho.getIdade()) {
				maisVelho = aux;
			}
		}
		
		return maisVelho;
	}

	public Contato maisNovo() {
		Contato maisNovo = lista.get(0);
		
		for(Contato aux : lista) {
			if(aux.getIdade() < maisNovo.getIdade()) {
				maisNovo = aux;
			}
		}
		
		return maisNovo;
	}

}
