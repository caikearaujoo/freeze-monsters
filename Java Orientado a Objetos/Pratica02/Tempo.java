package lab02;

public class Tempo 
{
	private int hora;
	private int minuto;
	private int segundo;
	
	public Tempo(int hora1, int minuto1, int segundo1)
	{
		if(hora1>0 && hora1<24)
		{
			hora = hora1;
		}
		else
		{
			hora = 0;
		}
		if(minuto1>0 && minuto1<60)
		{
			minuto = minuto1;
		}
		else
		{
			minuto = 0;
		}
		if(segundo1>0 && segundo1<59)
		{
			segundo = segundo1;
		}
		else
		{
			segundo = 0;
		}
	}
	
	public Tempo(int hora1, int minuto1)
	{
		if(hora1>0 && hora1<24)
		{
			hora = hora1;
		}
		else
		{
			hora = 0;
		}
		if(minuto1>0 && minuto1<60)
		{
			minuto = minuto1;
		}
		else
		{
			minuto = 0;
		}
		segundo = 0;
	}
	
	public Tempo(int hora1)
	{
		if(hora1>0 && hora1<24)
		{
			hora = hora1;
		}
		else
		{
			hora = 0;
		}
		
		minuto = 0;
		segundo = 0;
	}
	
	public Tempo(Tempo Tempo2)
	{
		segundo = Tempo2.segundo;
		minuto = Tempo2.minuto;
		hora = Tempo2.hora;
	}
	
	public void exibe()
	{
		System.out.printf("Horário: %02d:%02d:%02d\n\n", hora, minuto, segundo);
	}
	
	public void incrementaHora()
	{
		hora++;
	}
	
	public void decresceHora()
	{
		hora--;
	}
	
	public void incrementaMinuto()
	{
		minuto++;
		if(minuto>=60)
		{
			minuto = 0;
			incrementaHora();
		}
	}
	
	public void decresceMinuto()
	{
		minuto--;
		if(minuto<0)
		{
			minuto=59;
			decresceHora();
		}
	}
}
