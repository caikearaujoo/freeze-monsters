package freezemonster.sprite;

import spriteframework.sprite.BadSprite;

import javax.swing.ImageIcon;
import java.awt.Image;

public class Ray extends BadSprite {
    /* APAGAR DEPOIS
    public Ray() {
        //
    } */

    public Ray(int x, int y, int i) {
        initRay(x, y, i);
    }

    private void initRay(int x, int y, int i) {
        /* APAGAR DEPOIS
        String rayImg = "/freezemonster/images/ray.png";
        ImageIcon ii = new ImageIcon(rayImg);
        Image rayImage = ii.getImage().getScaledInstance(15, 15, Image.SCALE_DEFAULT);
        setImage(rayImage); */

        ImageIcon rayImg = new ImageIcon(this.getClass().getResource("/freezemonster/images/ray.png"));
        rayImg.getImage().getScaledInstance(15, 15, Image.SCALE_DEFAULT);
        setImage(rayImg.getImage());

        int H_SPACE = 6;
        setX(x + H_SPACE);

        int V_SPACE = 1;
        setY(y - V_SPACE);

        this.dx = i;
    }
}
