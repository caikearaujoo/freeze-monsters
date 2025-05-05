package freezemonster.sprite;

import spriteframework.Commons;
import spriteframework.sprite.BadSprite;

import javax.swing.ImageIcon;
import java.awt.*;

public class Gosma extends BadSprite {
    private boolean destroyed;

    public Gosma(int x, int y, int i) {
        initGosma(x, y, i);
    }

    private void initGosma(int x, int y, int i) {
        /* APAGAR DEPOIS
        A gosma é criada inicialmente como "destruída" (destroyed = true). 
        Quando o monstro decide atirar, ele "reativa" a gosma com setDestroyed(false)
        */
        setDestroyed(true);

        this.x = x;
        this.y = y;

        /* APAGAR DEPOIS
        String gosmaImg = "/freezemonster/images/gosma.png";
        ImageIcon ii = new ImageIcon(gosmaImg);
        Image gosmaImage = ii.getImage().getScaledInstance(15, 15, Image.SCALE_DEFAULT); //redimensionamento da imagem
        setImage(gosmaImage); */

        ImageIcon gosmaImg = new ImageIcon(this.getClass().getResource("/freezemonster/images/gosma.png"));
        gosmaImg.getImage().getScaledInstance(15, 15, Image.SCALE_DEFAULT);
        setImage(gosmaImg.getImage());

        this.dx = i; //define o dx dela como o aleatorio gerado no Monster
    }

    public void act() {
        if (!destroyed) {
            x += dx;   // x += dx * 1 ???
            y += dy;

            if (x <= 0 || x >= Commons.BOARD_WIDTH ||
                    y <= 0 || y >= Commons.BOARD_HEIGHT) {
                setDestroyed(true);
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
