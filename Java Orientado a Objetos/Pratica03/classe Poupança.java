ackage lab03;

class Poupança extends Conta 
{
	private float taxa;
	
	public Poupança(int cpf, int num, float saldo, float taxa)
	{
		super(cpf, num, saldo);
		this.taxa = taxa;
	}
	
	public void calcularNovoSaldo(float saldo)
	{
		if(saldo> 0)
		{
			float s = saldo*taxa;
			setSaldo (s);
		}
		else return;
	}
}
