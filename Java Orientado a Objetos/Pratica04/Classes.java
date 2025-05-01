package lab04;

public class Veiculo 
{
	private String placa;
	private int ano;
	
	public String getPlaca(String placa) {
		return placa;
	}
	
	public void setPlaca(String placa) {
		this.placa = placa;
	}
	
	public int getAno() {
		return ano;
	}
	
	public void setAno(int ano) {
		this.ano = ano;
	}
	
	public void setAno(String ano) {
		this.ano = Integer.parseInt(ano);
	}
	
	public Veiculo(String placa, int ano)
	{
		this.placa = placa;
		this.ano = ano;
	}
	
	public Veiculo()
	{
		
	}
	
	public void exibirDados() 
	{
		System.out.println("Dados do carro:" +placa + ano);
	}
}

package lab04;

class Onibus extends Veiculo
{
	private int assentos;
	
	public int getAssentos() {
		return assentos;
	}

	public void setAssentos(int assentos) {
		this.assentos = assentos;
	}

	
	public Onibus(String placa, int ano, int eixos)
	{
		super(placa, ano);
		this.assentos = eixos;
	}
	
	public void exibirDados() 
	{
		super.exibirDados();
		System.out.println("Numero de assentos:" +assentos);
		
	}
}

package lab04;

class Caminhao extends Veiculo
{
	private int eixos;
	
	public int getEixos() 
	{
		return eixos;
	}

	public void setEixos(int eixos) 
	{
		this.eixos = eixos;
	}

	public Caminhao(String placa, int ano, int eixos)
	{
		super(placa, ano);
		this.eixos = eixos;
	}
	
	public void exibirDados() 
	{
		super.exibirDados();
		System.out.println("Numero de eixos:" +eixos);
		
	}
}
