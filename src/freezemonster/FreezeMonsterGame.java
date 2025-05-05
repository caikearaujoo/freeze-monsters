package freezemonster;

import spriteframework.AbstractBoard;
import spriteframework.MainFrame;
import java.awt.EventQueue;
import java.awt.Dimension;

public class FreezeMonsterGame extends MainFrame {

    public FreezeMonsterGame() {
        super("Freeze Monster");
        setSize(800, 600); // Novo tamanho (largura x altura)
        setPreferredSize(new Dimension(800, 600));
        setLocationRelativeTo(null); // Centraliza a janela
        pack();
    }

    @Override
    protected AbstractBoard createBoard() {
        return new FreezeMonsterBoard();
    }

    public static void main(String[] args) {
        EventQueue.invokeLater(() -> {
            FreezeMonsterGame game = new FreezeMonsterGame();
            game.setVisible(true);
        });
    }
}