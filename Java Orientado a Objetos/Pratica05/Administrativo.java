package labjava;

class Administrativo extends Funcionario 
{
	int horasExtras;
	
	public Administrativo(String nome, String rg, double salarioBase)
	{
		super(nome, rg, salarioBase);
	}
	
	
	public void acumulaHoras()
	{
		setHorasExtras(getHorasExtras()+1);
	}
	
	public double salario()
	{
		return super.salario() + (getSalarioBase()+ (1/100)*getSalarioBase()*getHorasExtras());
	}
	
	public int getHorasExtras() {
		return horasExtras;
	}

	public void setHorasExtras(int horasExtras) {
		this.horasExtras = horasExtras;
	}
	
	public void resetaAcumulado()
	{
		this.horasExtras = 0;
	}
}
