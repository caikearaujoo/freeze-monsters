package janelas;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JTextField;

import lab01.classes.Itens;
import lab01.classes.Livros;
import lab01.classes.Revistas;

public class janelaRevistas extends JFrame implements ActionListener {
    JLabel labelTitulo = new JLabel("Título:");
    JTextField textoTitulo = new JTextField(30);

    JLabel labelAutor = new JLabel("Autor:");
    JTextField textoAutor = new JTextField(30);

    JLabel labelLancamento = new JLabel("Ano de lançamento:");
    JTextField numLancamento = new JTextField(5);

    JLabel labelPaginas = new JLabel("Número de páginas:");
    JTextField numPaginas = new JTextField(5);

    JLabel labelTipo = new JLabel("Tipo(Escreva revista:");
    JTextField tipo = new JTextField(15);

    JButton btnIncluir = new JButton("Incluir");
    JButton btnListar = new JButton("Listar");
    JButton btnLivros = new JButton("Livros");

    public janelaRevistas() {
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setSize(600, 400);
        this.setResizable(false);
        this.setLocationRelativeTo(null);
        this.setLayout(null); // Usar layout absoluto

        // Configuração dos labels e text fields
        labelTitulo.setBounds(20, 20, 100, 20);
        textoTitulo.setBounds(150, 20, 400, 25);

        labelAutor.setBounds(20, 60, 100, 20);
        textoAutor.setBounds(150, 60, 400, 25);

        labelLancamento.setBounds(20, 100, 150, 20);
        numLancamento.setBounds(150, 100, 100, 25);

        labelPaginas.setBounds(20, 140, 150, 20);
        numPaginas.setBounds(150, 140, 100, 25);

        labelTipo.setBounds(20, 180, 100, 20);
        tipo.setBounds(150, 180, 150, 25);

        // Configuração dos botões
        btnIncluir.setBounds(50, 250, 100, 30);
        btnListar.setBounds(200, 250, 100, 30);
        btnLivros.setBounds(350, 250, 100, 30);

        // Adicionando componentes ao frame
        this.add(labelTitulo);
        this.add(textoTitulo);
        this.add(labelAutor);
        this.add(textoAutor);
        this.add(labelLancamento);
        this.add(numLancamento);
        this.add(labelPaginas);
        this.add(numPaginas);
        this.add(labelTipo);
        this.add(tipo);
        this.add(btnIncluir);
        this.add(btnListar);
        this.add(btnLivros);

        // Adicionando ActionListener aos botões
        btnIncluir.addActionListener(this);
        btnListar.addActionListener(this);
        btnLivros.addActionListener(this);

        this.setVisible(true);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        JButton source = (JButton) e.getSource();

        if (source.getText().equals("Incluir")) {
            try {
                String titulo = textoTitulo.getText();
                String autor = textoAutor.getText();
                int anoLancamento = Integer.parseInt(numLancamento.getText());
                int numPaginasInt = Integer.parseInt(numPaginas.getText());

                if (!titulo.isEmpty() && !autor.isEmpty() && !numLancamento.getText().isEmpty() &&
                    !numPaginas.getText().isEmpty() && !tipo.getText().isEmpty()) {
                    String tipoTexto = tipo.getText().toLowerCase();
                    if (tipoTexto.equals("livro")) {
                        Itens livro = new Livros(titulo, autor, anoLancamento, numPaginasInt, tipoTexto);
                        Itens.adicionarItem(livro); // Adiciona o item à lista
                    } else if (tipoTexto.equals("revista")) {
                        Itens revista = new Revistas(titulo, autor, anoLancamento, numPaginasInt, tipoTexto);
                        Itens.adicionarItem(revista); // Adiciona o item à lista
                    }

                    // Limpar campos
                    textoTitulo.setText("");
                    textoAutor.setText("");
                    numLancamento.setText("");
                    numPaginas.setText("");
                    tipo.setText("");

                    JOptionPane.showMessageDialog(this, "Item incluído com sucesso!");
                } else {
                    JOptionPane.showMessageDialog(this, "Por favor, preencha todos os campos.");
                }
            } catch (NumberFormatException ex) {
                JOptionPane.showMessageDialog(this, "Erro ao preencher os campos numéricos.");
            }
        } else if (source.getText().equals("Livros")) {
            this.dispose();
            new janelaLivros();
        } else if (source.getText().equals("Listar")) {
            this.dispose();
            new janelaListagem();
        }
    }

    public static void main(String[] args) {
        new janelaRevistas();
    }
}
