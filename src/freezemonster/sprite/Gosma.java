package freezemonster.sprite;

import freezemonster.Commons;
import spriteframework.sprite.BadSprite;

import javax.swing.ImageIcon;
import java.awt.*;
import java.util.Random;

public class Gosma extends BadSprite {
    private final Random random;
    // parte desenvolvida anteriormente
    private boolean destroyed;

    public Gosma(int x, int y){
        this.random = new Random();
        initGosma(x, y);
    }

    private void initGosma(int x, int y) {
        /*
        A gosma é criada inicialmente como "destruída" (destroyed = true).
        Quando o monstro decide atirar, ele "reativa" a gosma com setDestroyed(false)
        */
        setDestroyed(true);
        this.x = x;
        this.y = y;

        // Direção horizontal aleatória (-1, 0 ou 1)
        this.dx = random.nextInt(3) - 1;

        // Direção vertical aleatória (-1, 0 ou 1)
        this.dy = random.nextInt(3) - 1;

        // Garante que pelo menos um eixo tenha movimento
        if (dx == 0 && dy == 0) {
            dy = 1; // Movimento padrão para baixo se ambos forem 0
        }

        ImageIcon ii = new ImageIcon(getClass().getResource("/freezemonster/images/gosma.png"));
        Image scaledImage = ii.getImage().getScaledInstance(
                Commons.GOSMA_WIDTH,
                Commons.GOSMA_HEIGHT,
                Image.SCALE_SMOOTH
        );
        setImage(scaledImage);
    }



    public void act() {
        if (!destroyed) {
            // Movimento baseado na direção inicial (dx)
            x += dx * 1; // Velocidade multiplicada por 2 (ajustável)
            y += dy;      // Caso queira movimento diagonal posteriormente
            // Verifica se saiu dos limites da tela
            if (x <= 0 || x >= Commons.BOARD_WIDTH ||
                    y <= 0 || y >= Commons.BOARD_HEIGHT) {
                setDestroyed(true); // Desativa ao sair da tela
            }
        }
    }

    public void setDestroyed(boolean destroyed) {
        this.destroyed = destroyed;
    }

    public boolean isDestroyed() {
        return destroyed;
    }

    public void setDx(int i) {
    }

    public void setDy(int i) {
    }
}
