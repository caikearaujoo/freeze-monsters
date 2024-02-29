package labjava;

public class Funcionario 
{
	private String nome;
	private String rg;
	private double salarioBase;
	
	public Funcionario(String nome, String rg, double salarioBase)
	{
		setNome(nome);
		setRg(rg);
		setSalarioBase(salarioBase);
	}
	
	public double salario()
	{
		return salarioBase;
	}
	
	
	public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public String getRg() {
		return rg;
	}

	public void setRg(String rg) {
		this.rg = rg;
	}

	public double getSalarioBase() {
		return salarioBase;
	}

	public void setSalarioBase(double salarioBase) {
		this.salarioBase = salarioBase;
	}
	
	
}
