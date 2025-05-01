package lab03;

class Especial extends Conta 
{
	private float limite;
	
	public Especial(int cpf, int num, float saldo, float limite)
	{
		super(cpf, num, saldo);
		this.limite = limite;
	}
	
	public void saque(float saldo, float valor)
	{
		if(valor < saldo+limite) setSaldo (saldo-valor);
		else return;
	}
}
