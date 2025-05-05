package freezemonster;

import spriteframework.AbstractBoard;
import spriteframework.MainFrame;

import java.awt.EventQueue;
import java.awt.Dimension;

public class FreezeMonsterGame extends MainFrame {

    public FreezeMonsterGame() {
        super("Freeze Monster");
        //setSize(300, 400); // Novo tamanho (largura x altura)
        setPreferredSize(new Dimension(600, 600));
        setLocationRelativeTo(null);
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
