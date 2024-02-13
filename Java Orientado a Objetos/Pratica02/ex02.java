package labs;

public class Ponto 
{
	private double x;
	private double y;
	
	public double getX() {
		return x;
	}

	public void setX(float x) {
		this.x = x;
	}

	public double getY() {
		return y;
	}

	public void setY(float y) {
		this.y = y;
	}
	
	public Ponto()
	{
		x = 0;
		y = 0;
	}
	public Ponto(double x, double y)
	{
		this.x = x;
		this.y = y;
	}
	
	public void criarPonto(float x, float y)
	{
		if(x>0) this.x = x;
		else x = 0;
		
		if(y>0) this.y = y;
		else y = 0;
	}
	
	public float calculaDistancia(Ponto p) 
	{
	    float distancia = (float) Math.sqrt(Math.pow((this.x - p.x), 2) + Math.pow((this.y - p.y), 2));
	    return distancia;
	}
}
