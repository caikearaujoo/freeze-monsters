package lab01;

import javax.swing.JFrame;
import javax.swing.JTextArea;
import javax.swing.JTextField;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JButton;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.ArrayList;

public class Biblioteca {

	public static void main(String[] args) {
		JFrame frame = new JFrame("Itens da biblioteca"); //o frame é o maior, engloba tudo
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE); //fechar quando aperta no X
		frame.setSize(400, 400); //tamanho
		frame.setVisible(true); //visibilidade true
		
		JLabel labelTitulo = new JLabel("Título:"); //criar um Label(é um textinho) pro titulo
		labelTitulo.setBounds(20, 20, 100, 20); //coordenadas
		frame.add(labelTitulo); //adicionar esse elemento ao nosso frame

		JTextField textoTitulo = new JTextField(); //criar um textField(area pra escrever) pro titulo
		textoTitulo.setBounds(120, 20, 200, 20); //coordenadas
		frame.add(textoTitulo); //adicionar ao frame

		JLabel labelAutor = new JLabel("Autor:"); //criar uma label pro autor tambem
		labelAutor.setBounds(20, 60, 100, 20); //coordenadas
		frame.add(labelAutor); //adicionar ao frame

		JTextField textoAutor = new JTextField(); //textField pro autor
		textoAutor.setBounds(120, 60, 200, 20); //coordenadas
		frame.add(textoAutor); //adicionar ao frame
		
		JLabel labelLancamento = new JLabel("Ano de lancamento:"); //criar uma label pro ano de lancamento tambem
		labelLancamento.setBounds(20, 100, 100, 20); //coordenadas
		frame.add(labelLancamento); //adicionar ao frame

		JTextField numLancamento = new JTextField(); //textField pro lancamento
		numLancamento.setBounds(120, 100, 200, 20); //coordenadas
		frame.add(numLancamento); //adicionar ao frame
		
		JLabel labelPaginas = new JLabel("Número de páginas:"); //criar uma label pro ano de lancamento tambem
		labelPaginas.setBounds(20, 140, 100, 20);; //coordenadas
		frame.add(labelPaginas); //adicionar ao frame

		JTextField numPaginas = new JTextField(); //textField pras paginas
		numPaginas.setBounds(120, 140, 200, 20);; //tamanho
		frame.add(numPaginas); //adicionar ao frame
		
		JLabel labelTipo = new JLabel("Tipo:"); //criar uma label pro ano de lancamento tambem
		labelTipo.setBounds(20, 180, 100, 20);; //coordenadas
		frame.add(labelTipo); //adicionar ao frame

		JTextField tipo = new JTextField(); //textField pras paginas
		tipo.setBounds(120, 180, 200, 20); //tamanho
		frame.add(tipo); //adicionar ao frame
		
		
		JButton btnIncluir = new JButton("Incluir"); //criacao do botao de inclusao
		btnIncluir.setBounds(120, 300, 100, 30); // coordenadas
		frame.add(btnIncluir); //adicionar ao frame
		
		JTextArea listaArea = new JTextArea(); //regiao para listar os itens
		listaArea.setBounds(20, 220, 350, 70); // Ajuste para evitar sobreposição
		frame.add(listaArea);

		ArrayList<Itens> itens = new ArrayList<>();
		
		btnIncluir.addActionListener(new ActionListener() { //actionListener é o que faz o botao entender o toque
		    public void actionPerformed(ActionEvent e) { //ativa o botao
		        try { //tentar pegar as informacoes, caso contrario, catch
		            String titulo = textoTitulo.getText(); 
		            String autor = textoAutor.getText();
		            int anoLancamento = Integer.parseInt(numLancamento.getText());
		            int numPaginasInt = Integer.parseInt(numPaginas.getText());
		            String tipoTexto = tipo.getText();

		            if (!titulo.isEmpty() && !autor.isEmpty() && !numLancamento.getText().isEmpty() && !numPaginas.getText().isEmpty() && !tipo.getText().isEmpty()) {
		               if(tipoTexto == "livro") {
		            	   Itens livro = new Livros(titulo, autor, anoLancamento, numPaginasInt, tipoTexto);
		            	   itens.add(livro);
		               }
		               else if(tipoTexto =="revista") {
		            	   Itens revista = new Revistas(titulo, autor, anoLancamento, numPaginasInt, tipoTexto);
		            	   itens.add(revista);
		               }
		           

		                // Limpa os campos de entrada
		                textoTitulo.setText("");
		                textoAutor.setText("");
		                numLancamento.setText("");
		                numPaginas.setText("");
		                tipo.setText("");

		                JOptionPane.showMessageDialog(frame, "Item incluído com sucesso!"); //Mensagem de validacao
		            } else {
		                JOptionPane.showMessageDialog(frame, "Por favor, preencha todos os campos para incluir um item."); //Mensagem de erro
		            }
		        } catch (NumberFormatException ex) {
		            JOptionPane.showMessageDialog(frame, "Existem erros no momento de preencher os campos!!"); //O catch vai pegar um erro fora do tratado no if
		        }
		    }
		});
		
		JButton btnListar = new JButton("Listar itens"); //botão para listar itens
		btnListar.setBounds(230, 300, 100, 30); // coordenadas
		frame.add(btnListar); //adicionar ao frame

		btnListar.addActionListener(new ActionListener() {
		    public void actionPerformed(ActionEvent e) {
		        listaArea.setText(""); // limpa o texto antes de listar p usuario
		        for (Itens material : itens) {
		            listaArea.append(material.toString() + "\n"); // mostra os itens no formato definido em toString(metodo que eu defini la em itens)
		        }
		    }
		});
	}

}
