package freezemonsters.sprite;

import javax.swing.ImageIcon;

import spriteframework.sprite.BadSprite;

import java.awt.*;

public class Gosma extends BadSprite {
    private boolean destroyed;

    public Gosma(int x, int y, int rand) {

        initGosma(x, y, rand);
    }

    private void initGosma(int x, int y, int rand) {

        setDestroyed(true);

        this.x = x;
        this.y = y;

        String gosmaImg = "images/gosma.png";
        ImageIcon ii = new ImageIcon(gosmaImg);
        Image gosmaImage = ii.getImage().getScaledInstance(15, 15, Image.SCALE_DEFAULT);
        setImage(gosmaImage);

        this.dx = rand;
    }

    public void setDestroyed(boolean destroyed) {

        this.destroyed = destroyed;
    }

    public boolean isDestroyed() {

        return destroyed;
    }
}
