package freezemonster.sprite;

import spriteframework.Commons;
import spriteframework.sprite.BadSprite;

import javax.swing.ImageIcon;
import java.awt.*;

public class Gosma extends BadSprite {
    // parte desenvolvida anteriormente
    private boolean destroyed;

    public Gosma(int x, int y, int i) {
        initGosma(x, y, i);
    }

    private void initGosma(int x, int y, int i) {
        /* 
        A gosma é criada inicialmente como "destruída" (destroyed = true). 
        Quando o monstro decide atirar, ele "reativa" a gosma com setDestroyed(false)
        */
        setDestroyed(true); 
        this.x = x;
        this.y = y;

        String gosmaImg = "/freezemonster/images/gosma.png";
        ImageIcon ii = new ImageIcon(gosmaImg);
        Image gosmaImage = ii.getImage().getScaledInstance(15, 15, Image.SCALE_DEFAULT); //redimensionamento da imagem
        setImage(gosmaImage);

        this.dx = i; //define o dx dela como o aleatorio gerado no Monster
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
}
