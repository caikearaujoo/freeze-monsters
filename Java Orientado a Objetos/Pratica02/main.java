package lab02;

import java.util.Scanner;

public class main 
{

	public static void main(String[] args) 
	{
		Scanner scan = new Scanner(System.in);
		
		int horas, minutos, segundos;
		
		System.out.println("Olá usuário, escreva as horas: ");
		horas = scan.nextInt();
		
		System.out.println("escreva os minutos: ");
		minutos = scan.nextInt();
		
		System.out.println("escreva os segundos: ");
		segundos = scan.nextInt();
		
		Tempo josh = new Tempo(horas, minutos, segundos);
		
		josh.exibe();
		
		System.out.println("Incrementando em um minuto: ");
		josh.incrementaMinuto();
		josh.exibe();
		
		System.out.println("Decrescendo em um minuto: ");
		josh.decresceMinuto();
		josh.exibe();
	}

}
