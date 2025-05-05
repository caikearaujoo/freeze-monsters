package spaceinvaders.sprite;

import spriteframework.sprite.BadSprite;

import javax.swing.ImageIcon;

public class Shot extends BadSprite {
    /* APAGAR???
    public Shot() {
        this(0, 0);            // valores padrão
        this.die();                  // começa invisível
    } */

    public Shot(int x, int y) {
        initShot(x, y);
    }

    private void initShot(int x, int y) {
        // String shotImg = getClass().getResource("/spaceinvaders/images/shot.png");
        //java.net.URL shotImg = getClass().getResource("/spaceinvaders/images/shot.png");
        //ImageIcon ii = new ImageIcon(shotImg);
        ImageIcon shotImg = new ImageIcon(this.getClass().getResource("/spaceinvaders/images/shot.png"));
        setImage(shotImg.getImage());

        int H_SPACE = 6;
        setX(x + H_SPACE);

        int V_SPACE = 1;
        setY(y - V_SPACE);
    }
}
