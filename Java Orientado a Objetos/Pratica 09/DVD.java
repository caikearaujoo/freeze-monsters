package estudosp3;

public class DVD extends AparelhoEletronico {
	private int regiao;
	private boolean reproduzMP3;
	
	public DVD(String fabricante, String sistemaCor, Double preco,int regiao, boolean reproduzMP3) throws ExcecaoDadoInvalido {
		super(fabricante, sistemaCor, preco);
		setRegiao(regiao);
		setReproduzMP3(reproduzMP3);
	}

	public int getRegiao() {
		return regiao;
	}

	public void setRegiao(int regiao) throws ExcecaoDadoInvalido {
        if (regiao < 1 || regiao > 4) {
            throw new ExcecaoDadoInvalido("A região deve estar entre 1 e 4.");
        }
        this.regiao = regiao;
    }

	public boolean getReproduzMP3() {
		return reproduzMP3;
	}

	public void setReproduzMP3(boolean telaPlana) {
		this.reproduzMP3 = telaPlana;
	}
	
	
}
