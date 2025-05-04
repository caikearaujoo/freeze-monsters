package spaceinvaders.sprite;

import java.util.LinkedList;

import javax.swing.ImageIcon;

import spriteframework.sprite.BadSprite;
import spriteframework.sprite.BadnessBoxSprite;

public class BomberSprite extends BadnessBoxSprite {

    private Bomb bomb;

    public BomberSprite(int x, int y) {

        initBomber(x, y);
    }

    private void initBomber(int x, int y) {
        this.x = x;
        this.y = y;

        // Caminho corrigido considerando sua estrutura
        java.net.URL imageUrl = getClass().getResource("/spaceinvaders/images/alien.png");
        if (imageUrl == null) {
            System.err.println("Erro: Imagem do alien não encontrada!");
            return;
        }
        ImageIcon ii = new ImageIcon(imageUrl);
        setImage(ii.getImage());

        bomb = new Bomb(x, y); // Inicializa a bomba
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
