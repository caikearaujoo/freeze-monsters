package freezemonster.sprite;

import spriteframework.sprite.BadSprite;

import javax.swing.ImageIcon;
import java.awt.Image;

public class Ray extends BadSprite {
    // parte desenvolvida anteriormente
    public Ray() {
        //
    }

    public Ray (int x, int y, int i){
        initRay(x, y, i);
    }

    private void initRay(int x, int y, int i) {
        String rayImg = "/images/ray.png";
        ImageIcon ii = new ImageIcon(rayImg);
        Image rayImage = ii.getImage().getScaledInstance(15, 15, Image.SCALE_DEFAULT);
        setImage(rayImage);

        int H_SPACE = 6;
        setX(x + H_SPACE);

        int V_SPACE = 1;
        setY(y - V_SPACE);

        this.dx = i;
    }
}
