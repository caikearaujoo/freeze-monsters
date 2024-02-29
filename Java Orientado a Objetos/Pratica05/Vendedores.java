package labjava;

class Vendedores extends Funcionario 
{
	double comissao;
	int vendas = 0;
	
	public Vendedores(String nome, String rg, double salarioBase)
	{
		super(nome, rg, salarioBase);
		setComissao();
	}
	
	public double salario()
	{
		return super.salario() + (comissao*getVendas());
	}
	
	public void resetaAcumulado()
	{
		this.vendas = 0;
	}
	
	public void acumulaVendas()
	{
		setVendas(getVendas()+1);
	}
	public double getComissao() {
		return comissao;
	}

	public void setComissao() {
		this.comissao = 0.05;
	}

	public int getVendas() {
		return vendas;
	}

	public void setVendas(int vendas) {
		this.vendas = vendas;
	}
}
