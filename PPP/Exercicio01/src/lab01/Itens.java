package lab01;

public class  Itens {
	private String titulo;
	private String autor;
	private int anoLancamento;
	private int numPaginas;
	private String tipo;

	public Itens(String titulo, String autor, int anoLancamento, int numPaginas, String tipo) {
		this.setTitulo(titulo);
		this.setAutor(autor);
		this.setAnoLancamento(anoLancamento);
		this.setNumPaginas(numPaginas);
		this.setTipo(tipo);
	}
	
	public String toString() {
        return "Título: " + titulo + ", Autor: " + autor + ", Ano: " + anoLancamento +
               ", Páginas: " + numPaginas + ", Tipo: " + tipo;
    }
	
	public String getTitulo() {
		return titulo;
	}

	public void setTitulo(String titulo) {
		this.titulo = titulo;
	}

	public String getAutor() {
		return autor;
	}

	public void setAutor(String autor) {
		this.autor = autor;
	}

	public int getAnoLancamento() {
		return anoLancamento;
	}

	public void setAnoLancamento(int anoLancamento) {
		this.anoLancamento = anoLancamento;
	}

	public int getNumPaginas() {
		return numPaginas;
	}

	public void setNumPaginas(int numPaginas) {
		this.numPaginas = numPaginas;
	}

	public String getTipo() {
		return tipo;
	}

	public void setTipo(String tipo) {
		this.tipo = tipo;
	}
	
	}
