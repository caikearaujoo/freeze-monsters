package freezemonsters.sprite;

import java.awt.*;
import java.util.LinkedList;
import java.util.Random;
import javax.swing.ImageIcon;

import freezemonsters.Commons;
import spaceinvaders.sprite.Bomb;
import spriteframework.sprite.BadSprite;
import spriteframework.sprite.BadnessBoxSprite;

public class Monster extends BadnessBoxSprite{
    private Gosma gosma;
    private ImageIcon congeladoImage;
    private Random rand = new Random();

    public Monster(int x, int y, String monstroImagem, String congeladoImagem) {

        initMonster(x, y);
    }

    private void initMonster(int x, int y) {
        this.x = x;
        this.y = y;

        int monsterType = rand.nextInt(9) + 1;

        // Define os caminhos das imagens
        String monsterPath = String.format("/images/monster%d.png", monsterType);
        String congeladoPath = String.format("/images/monster%dbg.png", monsterType);

        // Cria a gosma com direção aleatória
        this.gosma = new Gosma(x, y, rand.nextInt(4));

        // Carrega e redimensiona a imagem normal do monstro
        ImageIcon monsterIcon = new ImageIcon(getClass().getResource(monsterPath));
        Image monsterImage = monsterIcon.getImage().getScaledInstance(30, 30, Image.SCALE_SMOOTH);
        setImage(monsterImage);

        // Carrega e redimensiona a imagem congelada
        ImageIcon congeladoIcon = new ImageIcon(getClass().getResource(congeladoPath));
        Image congeladoImg = congeladoIcon.getImage().getScaledInstance(30, 30, Image.SCALE_SMOOTH);
        this.congeladoImage = new ImageIcon(congeladoImg);
    }

    public void die() {
        setImage(congeladoImage.getImage());
        gosma.die();
        setDying(true);
        dx = 0;
        dy = 0;
    }

    public void act() {

        x += dx;
        y += dy;

        if (x <= 2) {

            x = 2;
        }

        if (x >= spriteframework.Commons.BOARD_WIDTH - 2 * width) {

            x = spriteframework.Commons.BOARD_WIDTH - 2 * width;
        }
    }

    @Override
    public LinkedList<BadSprite> getBadnesses() {
        LinkedList<BadSprite> aGosma = new LinkedList<>();
        aGosma.add(gosma);
        return aGosma;
    }


}
