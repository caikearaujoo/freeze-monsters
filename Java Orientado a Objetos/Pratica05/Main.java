package labjava;

public class Main {

	public static void main(String[] args) 
	{
		Funcionario[] qE = new Funcionario[5];
		qE[0] = new Vendedores ("Caike", "53.849.882-1", 2000);
		qE[1] = new Administrativo ("Saliba", "55.948.288-1", 1800);
		qE[2] = new Vendedores ("Amanda", "23.832.875-1", 3000);
		qE[3] = new Administrativo ("Fijora", "34.123.345-1", 2800);
		qE[4] = new Administrativo ("Gustavo", "57.148.828-1", 3800);
		
		double valor1 = qE[0].salario();
		double valor2 = qE[1].salario();
		
		System.out.println("Salario do funcionario 1: " + valor1);
		System.out.println("Salario do funcionario 2: " + valor2);
		
		System.out.println("O funcionario 1 vendeu 10 vezes no mês, ou seja, seu salário aumentou: ");
		((Vendedores)qE[0]).acumulaVendas();
		((Vendedores)qE[0]).acumulaVendas();
		((Vendedores)qE[0]).acumulaVendas();
		((Vendedores)qE[0]).acumulaVendas();
		((Vendedores)qE[0]).acumulaVendas();
		((Vendedores)qE[0]).acumulaVendas();
		((Vendedores)qE[0]).acumulaVendas();
		((Vendedores)qE[0]).acumulaVendas();
		((Vendedores)qE[0]).acumulaVendas();
		((Vendedores)qE[0]).acumulaVendas();
		
		valor1 = qE[0].salario();
		
		System.out.println("Salario novo do funcionario 1: " + valor1);
		
		System.out.println("O funcionario 2 trabalhou 8 horas extras no mês, ou seja, seu salário aumentou: ");
		((Administrativo)qE[0]).acumulaHoras();
		((Administrativo)qE[0]).acumulaHoras();
		((Administrativo)qE[0]).acumulaHoras();
		((Administrativo)qE[0]).acumulaHoras();
		((Administrativo)qE[0]).acumulaHoras();
		((Administrativo)qE[0]).acumulaHoras();
		((Administrativo)qE[0]).acumulaHoras();
		((Administrativo)qE[0]).acumulaHoras();

		valor2 = qE[1].salario();
		
		System.out.println("Salario novo do funcionario 1: " + valor1);
		
	}

}
