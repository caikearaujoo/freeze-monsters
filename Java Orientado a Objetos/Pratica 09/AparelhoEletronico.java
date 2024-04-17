package estudosp3;

public class AparelhoEletronico {
	private String fabricante;
	private String sistemaCor;
	private Double preco;
	
	public AparelhoEletronico(String fabricante, String sistemaCor, Double preco) throws ExcecaoDadoInvalido {
		setFabricante(fabricante);
		setSistemaCor(sistemaCor);
		setPreco(preco);
	}
	
	public String getFabricante() {
		return fabricante;
	}
	public void setFabricante(String fabricante) throws ExcecaoDadoInvalido{
		if(fabricante == null || fabricante.isEmpty()) throw new ExcecaoDadoInvalido("Fabricante nao pode ser vazio");
		this.fabricante = fabricante;
	}
	public String getSistemaCor() {
		return sistemaCor;
	}
	
	
	public void setSistemaCor(String sistemaCor) throws ExcecaoDadoInvalido {
	    if (sistemaCor == null || sistemaCor.isEmpty()) {
	        throw new ExcecaoDadoInvalido("O sistema de cor não pode ser nulo ou vazio.");
	    }
	    if (!sistemaCor.equals("NTSC") && !sistemaCor.equals("PALM")) {
	        throw new ExcecaoDadoInvalido("O sistema de cor deve ser NTSC ou PALM.");
	    }
	    this.sistemaCor = sistemaCor;
	}
	
	
	public Double getPreco() {
		return preco;
	}
	
	
	public void setPreco(Double preco) throws ExcecaoDadoInvalido {
	    if (preco < 0) {
	        throw new ExcecaoDadoInvalido("O preço não pode ser negativo.");
	    }
	    this.preco = preco;
	}
	
	
	
}
