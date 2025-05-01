package estudosp3;

import java.util.ArrayList;
public class Teste {
	
    public static void main(String[] args) {
    	
        Funcionario[] funcionarios = new Funcionario[5];
        ArrayList<Funcionario> funcionarios2 = new ArrayList<Funcionario>();
        funcionarios[0] = new Gerente("Gerente 1", "G001", 5000.0);
        funcionarios[1] = new Assistente("Assistente 1", "A001", 2500.0);
        funcionarios[2] = new Vendedor("Vendedor 1", "V001", 2000.0, 500.0);
        funcionarios[3] = new Vendedor("Vendedor 2", "V002", 2000.0, 700.0);
        funcionarios[4] = new Vendedor("Vendedor 3", "V003", 2000.0, 600.0);

        double folhaSalarial = 0;
        
        for (Funcionario funcionario : funcionarios) {
            folhaSalarial += funcionario.calculaSalario();
        }

        System.out.println("Folha Salarial Total: " + folhaSalarial);
    }
}

package estudosp3;

public class Assistente extends Funcionario implements Imprimivel {
	public Assistente(String nome, String matricula, Double salario_base) {
		super(nome, matricula, salario_base);
	}

	public double calculaSalario() {
		return getSalario_base();
	}

	@Override
	public void mostrarDados() {
		System.out.println("\nNome: " +getNome());
		System.out.println("\nMatricula: " +getMatricula());
		System.out.println("\nSalario: " +calculaSalario());
	}
}

package estudosp3;

public abstract class Funcionario {
	private String nome;
	private String matricula;
	private Double salario_base;
	
	public Funcionario(String nome, String matricula, Double salario_base) {
		setNome(nome);
		setMatricula(matricula);
		setSalario_base(salario_base);
	}
	
	public abstract double calculaSalario();
	
	public String getNome() {
		return nome;
	}
	public void setNome(String nome) {
		this.nome = nome;
	}

	public String getMatricula() {
		return matricula;
	}

	public void setMatricula(String matricula) {
		this.matricula = matricula;
	}

	public Double getSalario_base() {
		return salario_base;
	}

	public void setSalario_base(Double salario_base) {
		this.salario_base = salario_base;
	}
	
}

package estudosp3;

public class Gerente extends Funcionario implements Imprimivel {
	public Gerente(String nome, String matricula, Double salario_base) {
		super(nome, matricula, salario_base);
	}

	public double calculaSalario() {
		return (super.getSalario_base()*2);
	}

	@Override
	public void mostrarDados() {
		System.out.println("\nNome: " +getNome());
		System.out.println("\nMatricula: " +getMatricula());
		System.out.println("\nSalario: " +calculaSalario());
	}
}

package estudosp3;

public interface Imprimivel {
	void mostrarDados();
}

package estudosp3;

public class Vendedor extends Funcionario implements Imprimivel {
	private Double comissao;
	public Vendedor(String nome, String matricula, Double salario_base, Double comissao) {
		super(nome, matricula, salario_base);
		setComissao(comissao);
	}

	public double calculaSalario() {
		return (getSalario_base() + comissao);
	}

	public Double getComissao() {
		return comissao;
	}

	public void setComissao(Double comissao) {
		this.comissao = comissao;
	}

	public void mostrarDados() {
		System.out.println("\nNome: " +getNome());
		System.out.println("\nMatricula: " +getMatricula());
		System.out.println("\nComissão: " +getComissao());
		System.out.println("\nSalario: " +calculaSalario());
	}
	
}
