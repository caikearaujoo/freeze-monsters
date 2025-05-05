package freezemonster.sprite;

import freezemonster.Commons;
import spriteframework.sprite.BadSprite;
import spriteframework.sprite.BadnessBoxSprite;

import java.awt.*;
import java.util.LinkedList;
import java.util.Random;
import javax.swing.ImageIcon;

public class Monster extends BadnessBoxSprite {
    private Gosma gosma;
    private ImageIcon congeladoImg;
    private Random rand = new Random();

    public Monster(int x, int y) {
        initMonster(x, y);
    }

    private void initMonster(int x, int y) {
        this.x = x;
        this.y = y;

        dx = rand.nextInt(2) - 1; // valores: -1, 0 ou 1 (antes: -1 a 1)
        dy = rand.nextInt(2) - 1; // valores: -1, 0 ou 1

        if (dx == 0 && dy == 0) {
            // se ambos forem 0 no rand, garante que pelo menos vai andar para direita
            dx = 1;
        }

        int monsterType = rand.nextInt(9) + 1;
        String monsterPath = String.format("/freezemonster/images/monster%d.png", monsterType);
        String congeladoPath = String.format("/freezemonster/images/monster%dbg.png", monsterType);

        ImageIcon monsterImg = new ImageIcon(this.getClass().getResource(monsterPath));
        monsterImg.getImage().getScaledInstance(30, 30, Image.SCALE_SMOOTH);
        setImage(monsterImg.getImage());

        congeladoImg = new ImageIcon(this.getClass().getResource(congeladoPath));
        congeladoImg.getImage().getScaledInstance(30, 30, Image.SCALE_SMOOTH);

        this.gosma = new Gosma(x, y, rand.nextInt(4));  // gosma com direção aleatória

        /* APAGAR DEPOIS
        // Carrega e redimensiona a imagem normal do monstro
        ImageIcon monsterIcon = new ImageIcon(getClass().getResource(monsterPath));
        Image monsterImage = monsterIcon.getImage().getScaledInstance(30, 30, Image.SCALE_SMOOTH);
        setImage(monsterImage);

        // Carrega e redimensiona a imagem congelada
        ImageIcon congeladoIcon = new ImageIcon(getClass().getResource(congeladoPath));
        Image congeladoImg = congeladoIcon.getImage().getScaledInstance(30, 30, Image.SCALE_SMOOTH);
        this.congeladoImage = new ImageIcon(congeladoImg); */
    }

    public void die() {
        setImage(congeladoImg.getImage());
        gosma.die();
        setDying(true);
        dx = 0;
        dy = 0;
    }

    public void act() {
        x += dx;
        y += dy;

        // limites horizontais
        if (x <= Commons.BORDER_LEFT) {
            x = Commons.BORDER_LEFT;
            dx = -dx;
        } else if (x + getImageWidth() > Commons.BOARD_WIDTH - Commons.BORDER_RIGHT) {
            x = Commons.BOARD_WIDTH - Commons.BORDER_RIGHT - getImageWidth();
            dx = -dx;
        }

        // limites verticais
        if (y <= Commons.BORDER_TOP) {
            y = Commons.BORDER_TOP;
            dy = -dy;
        } else if (y + getImageHeight() > Commons.BOARD_HEIGHT - Commons.BORDER_BOTTOM) {
            y = Commons.BOARD_HEIGHT - Commons.BORDER_BOTTOM - getImageHeight();
            dy = -dy;
        }
    }

    @Override
    public LinkedList<BadSprite> getBadnesses() {
        LinkedList<BadSprite> aGosma = new LinkedList<>();
        aGosma.add(gosma);
        return aGosma;
    }

    public Random getRand() {
        return rand;
    }

    public void setRand(Random rand) {
        this.rand = rand;
    }

    public ImageIcon getCongeladoImage() {
        return congeladoImg;
    }

    public void setCongeladoImg(ImageIcon congeladoImg) {
        this.congeladoImg = congeladoImg;
    }

    public Gosma getGosma() {
        return gosma;
    }

    public void setGosma(Gosma gosma) {
        this.gosma = gosma;
    }
}
