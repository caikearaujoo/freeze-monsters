package labs;

public class Pessoa 
{
	private String nome;
	private String sobrenome;
	private int idade;
	private String rg;
	private String lugarNascimento;
	public String getNome() {
		return nome;
	}
	public void setNome(String nome) {
		this.nome = nome;
	}
	public String getSobrenome() {
		return sobrenome;
	}
	public void setSobrenome(String sobrenome) {
		this.sobrenome = sobrenome;
	}
	public int getIdade() {
		return idade;
	}
	public void setIdade(int idade) {
		this.idade = idade;
	}
	public String getRg() {
		return rg;
	}
	public void setRg(String rg) {
		this.rg = rg;
	}
	public String getLugarNascimento() {
		return lugarNascimento;
	}
	public void setLugarNascimento(String lugarNascimento) {
		this.lugarNascimento = lugarNascimento;
	}
	
	public Pessoa(String nome, String sobrenome, int idade, String rg, String lugarNascimento)
	{
		this.nome = nome;
		this.sobrenome = sobrenome;
		this.idade = idade;
		this.rg = rg;
		this.lugarNascimento = lugarNascimento;
	}
	
	public void infoPessoal()
	{
		System.out.println("Nome: " + nome);
	    System.out.println("Sobrenome: " + sobrenome);
	    System.out.println("Idade: " + idade);
	    System.out.println("RG: " + rg);
	    System.out.println("Lugar de Nascimento: " + lugarNascimento);
	}
}
package labs;

class Cliente extends Pessoa
{
	private String cpf;
	private String endereco;
	
	public Cliente(String cpf, String endereco, String nome, String sobrenome, int idade, String rg, String lugarNascimento)
	{
		super(nome, sobrenome, idade, rg, lugarNascimento);
		this.cpf = cpf;
		this.endereco = endereco;
	}
	
	public void info()
	{
		System.out.println("Nome: " + getNome());
	    System.out.println("Sobrenome: " + getSobrenome(s));
	    System.out.println("Idade: " + getIdade());
	    System.out.println("RG: " + getRg());
	    System.out.println("Lugar de Nascimento: " + getLugarNascimento());
	    System.out.println("CPF: " + cpf);
	    System.out.println("Endereço: " + endereco);
	}
}
package labs;

class Fornecedor extends Pessoa
{
	private String cnpj;
	private String enderecoEmpresa;
	
	public Fornecedor(String cnpj, String enderecoEmpresa, String nome, String sobrenome, int idade, String rg, String lugarNascimento)
	{
		super(nome, sobrenome, idade, rg, lugarNascimento);
		this.cnpj = cnpj;
		this.enderecoEmpresa = enderecoEmpresa;
	}
	
	public void info()
	{
		System.out.println("Nome: " + getNome());
	    System.out.println("Sobrenome: " + getSobrenome());
	    System.out.println("Idade: " + getIdade());
	    System.out.println("RG: " + getRg());
	    System.out.println("Lugar de Nascimento: " + getLugarNascimento());
	    System.out.println("CNPJ: " + cnpj);
	    System.out.println("Endereço: " + enderecoEmpresa);
	}
	
}
