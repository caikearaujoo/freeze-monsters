package janelas;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JTextArea;

import lab01.classes.Itens;

public class janelaListagem extends JFrame implements ActionListener{
	
	public janelaListagem() {
		this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);		
		this.setSize(550, 250);										
		this.setResizable(false);										
		this.setLocationRelativeTo(null); 
		
		JTextArea cadastrados = new JTextArea(); //TEXTAREA é uma regiao de multi linhas, ou seja, perfeito p situacao
		cadastrados.setText(Itens.listarItens());		
		cadastrados.setBounds(20, 20, 500, 180); // Define o tamanho e posição
		this.add(cadastrados);
		this.setVisible(true);	
	}
	
	@Override
	public void actionPerformed(ActionEvent e) {
		// TODO Auto-generated method stub
		
	}
	
}
