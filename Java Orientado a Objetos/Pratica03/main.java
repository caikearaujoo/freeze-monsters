package lab03;

import java.util.Scanner;

public class main 
{
	public static void main(String[] args) 
	{
		Scanner scan = new Scanner(System.in);
		
		int cpf, cpf2;
		float saldo, taxa, saldo2, limite, valor;
		int num, num2;
		
		System.out.println("Olá usuário 1, escreva seu cpf: ");
		cpf = scan.nextInt();
		
		System.out.println("escreva seu saldo: ");
		saldo = scan.nextFloat();
		
		System.out.println("escreva o num da conta: ");
		num = scan.nextInt();
		
		System.out.println("escreva a taxa da conta poupança: ");
		taxa = scan.nextFloat();
		
		Conta acc1 = new Poupança(cpf, num, saldo, taxa);
		
		acc1.exibe();
		
		System.out.println("Olá usuário 2, escreva seu cpf: ");
		cpf2 = scan.nextInt();
		
		System.out.println("escreva seu saldo: ");
		saldo2 = scan.nextFloat();
		
		System.out.println("escreva o num da conta: ");
		num2 = scan.nextInt();
		
		System.out.println("escreva a taxa da conta poupança: ");
		limite = scan.nextFloat();
		
		Conta acc2 = new Poupança(cpf2, num2, saldo2, limite);
		
		acc2.exibe();
		
		System.out.println("escreva quanto quer sacar: ");
		valor = scan.nextFloat();
		
		acc2.saque(saldo2, valor);
		
		scan.close();
	}

}
