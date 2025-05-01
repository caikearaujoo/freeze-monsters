package estudosp3;

public class Televisao extends AparelhoEletronico {
	private int quantidadePolegadas;
	private boolean telaPlana;
	
	public Televisao(String fabricante, String sistemaCor, Double preco, int quantidadePolegadas, boolean telaPlana) throws ExcecaoDadoInvalido {
		super(fabricante, sistemaCor, preco);
		setQuantidadePolegadas(quantidadePolegadas);
		setTelaPlana(telaPlana);
	}

	public int getQuantidadePolegadas() {
		return quantidadePolegadas;
	}

	public void setQuantidadePolegadas(int quantidadePolegadas) throws ExcecaoDadoInvalido {
		if(quantidadePolegadas<0) {
			throw new ExcecaoDadoInvalido("\nO valor nao pode ser menos que zero");
		}
		else this.quantidadePolegadas = quantidadePolegadas;
	}

	public boolean isTelaPlana() {
		return telaPlana;
	}

	public void setTelaPlana(boolean telaPlana) {
		this.telaPlana = telaPlana;
	}
	
	
}
