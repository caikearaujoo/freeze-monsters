package freezemonsters.sprite;

import javax.swing.ImageIcon;
import java.awt.Image;
import spriteframework.sprite.BadSprite;

public class RaioCongelante extends BadSprite{
    public RaioCongelante(){
    }

    public RaioCongelante (int x, int y, int i){
        initRaio(x, y, i);
    }

    private void initRaio(int x, int y, int i) {
        String raioImg = "/images/ray.png";
        ImageIcon ii = new ImageIcon(raioImg);
        Image raioImage = ii.getImage().getScaledInstance(15, 15, Image.SCALE_DEFAULT);
        setImage(raioImage);

        int H_SPACE = 6;
        setX(x + H_SPACE);

        int V_SPACE = 1;
        setY(y - V_SPACE);

        this.dx = i;
    }
}
