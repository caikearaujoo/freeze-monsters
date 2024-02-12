package lab03;

public class Conta 
{
	private int cpf;
	private int num;
	private float saldo;
	
	public Conta (int cpf, int num, float saldo)
	{
		this.cpf = cpf;
		this.num = num;
		this.saldo = saldo;
	}
	
	public int getCpf() {
		return cpf;
	}

	public void setCpf(int cpf) {
		this.cpf = cpf;
	}

	public int getNum() {
		return num;
	}

	public void setNum(int num) {
		this.num = num;
	}

	public float getSaldo() {
		return saldo;
	}

	public void setSaldo(float saldo) {
		this.saldo = saldo;
	}

	public void saque(float saldo, float valor)
	{
		if(valor < saldo) this.saldo = (saldo-valor);
		else return;
	}
	
	public void deposito(float saldo, float valor)
	{
		this.saldo = saldo+valor;
	}
	
	public void exibe()
	{
		System.out.printf("Saldo: %02f\n\n", saldo);
	}
}
