package spriteframework.sprite;

import javax.swing.ImageIcon;

import spriteframework.Commons;

import java.awt.Image;
import java.awt.event.KeyEvent;

// alteração: classe abstrata, cada jogo define os próprios keyPressed e keyRelease, e act
public abstract class Player extends Sprite {
    private int width;

    // alteração: construtor recebe a imagem do player
    public Player(String img) {
        loadImage(img);
		getImageDimensions();
		resetState();
    }

    protected void loadImage (String img) {
        ImageIcon ii = new ImageIcon(this.getClass().getResource(img));
        width = ii.getImage().getWidth(null);
        setImage(ii.getImage());
    }

    public abstract void act();

    public abstract void keyPressed(KeyEvent e);

    public abstract void keyReleased(KeyEvent e);

    private void resetState() {

        setX(Commons.INIT_PLAYER_X);
        setY(Commons.INIT_PLAYER_Y);
    }
}
