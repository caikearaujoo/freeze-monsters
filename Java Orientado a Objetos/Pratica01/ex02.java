package labs;

public class Circulo 
{
	private String nome;
	private float raio;
	private Ponto centro;
	
	public void criarCirculo(String nome, Ponto centro, float raio)
	{
		this.centro = centro;
		this.raio = raio;
		this.nome = nome;
	}
	
	public float diametro()
	{
		return 2*raio;
	}
	
	public double area()
	{
		return Math.PI * Math.pow(raio, 2);
	}
	
	public double circunferencia()
	{
		return Math.PI * 2 * raio;
	}
	
	public void alterarNome(String nome)
	{
		if(nome != null)
		{
			this.nome = nome;
		}
		else
		{
			System.out.println("O nome não pode ser vazio");
		}
	}
	
	public void exibe()
	{
		System.out.println("Nome: " + nome);
        System.out.println("Centro: (" + centro.getX() + ", " + centro.getY() + ")");
        System.out.println("Raio: " + raio);
        System.out.println("Diâmetro: " + diametro());
        System.out.println("Área: " + area());
        System.out.println("Circunferência: " + circunferencia());
	}

	public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public float getRaio() {
		return raio;
	}

	public void setRaio(float raio) {
		this.raio = raio;
	}

	public Ponto getCentro() {
		return centro;
	}

	public void setCentro(Ponto centro) {
		this.centro = centro;
	}
}



package labs;

public class Ponto 
{
	private float x;
	private float y;
	
	public float getX() {
		return x;
	}

	public void setX(float x) {
		this.x = x;
	}

	public float getY() {
		return y;
	}

	public void setY(float y) {
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
