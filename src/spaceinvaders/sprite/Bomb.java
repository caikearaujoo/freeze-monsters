package spaceinvaders.sprite;

import javax.swing.ImageIcon;

import spriteframework.sprite.BadSprite;

public class Bomb extends BadSprite {

    private boolean destroyed;

    public Bomb(int x, int y) {

        initBomb(x, y);
    }

    private void initBomb(int x, int y) {

        setDestroyed(true);

        this.x = x;
        this.y = y;

        // Carrega a imagem corretamente
        java.net.URL imgUrl = getClass().getResource("/spaceinvaders/images/bomb.png");
        if (imgUrl == null) {
            throw new RuntimeException("Arquivo bomb.png não encontrado em spaceinvaders/images/");
        }
        setImage(new ImageIcon(imgUrl).getImage());
    }

    public void setDestroyed(boolean destroyed) {

        this.destroyed = destroyed;
    }

    public boolean isDestroyed() {

        return destroyed;
    }
    
    
}
