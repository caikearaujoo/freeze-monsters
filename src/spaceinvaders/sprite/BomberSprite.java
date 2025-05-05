package spaceinvaders.sprite;

import spriteframework.sprite.BadSprite;
import spriteframework.sprite.BadnessBoxSprite;

import java.util.LinkedList;
import javax.swing.ImageIcon;

public class BomberSprite extends BadnessBoxSprite {
    private Bomb bomb;

    public BomberSprite(int x, int y) {
        initBomber(x, y);
    }

    private void initBomber(int x, int y) {
        this.x = x;
        this.y = y;

        /* APAGAR DEPOIS
        java.net.URL imageUrl = getClass().getResource("/spaceinvaders/images/alien.png");
        if (imageUrl == null) {
            System.err.println("Erro: Imagem do alien não encontrada!");
            return;
        }
        ImageIcon ii = new ImageIcon(imageUrl);
        setImage(ii.getImage()); */

        ImageIcon alienImg = new ImageIcon(this.getClass().getResource("/spaceinvaders/images/alien.png"));
        setImage(alienImg.getImage());

        bomb = new Bomb(x, y);
    }

    public Bomb getBomb() {
        return bomb;
    }

	@Override
	public LinkedList<BadSprite> getBadnesses() {
		LinkedList<BadSprite> aBomb = new LinkedList<BadSprite>();
		aBomb.add(bomb);
		return aBomb;
	}
}
