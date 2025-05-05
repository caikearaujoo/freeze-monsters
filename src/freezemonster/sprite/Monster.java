package freezemonster.sprite;

import freezemonster.Commons;
import spaceinvaders.sprite.Bomb;
import spriteframework.sprite.BadSprite;
import spriteframework.sprite.BadnessBoxSprite;

import java.awt.*;
import java.util.LinkedList;
import java.util.Random;
import javax.swing.ImageIcon;

public class Monster extends BadnessBoxSprite {
    // parte desenvolvida anteriormente
    private Gosma gosma;
    private ImageIcon congeladoImage;
    private Random rand = new Random();

    public Monster(int x, int y) {
        initMonster(x, y);
    }

    private void initMonster(int x, int y) {
        this.x = x;
        this.y = y;

        dx = rand.nextInt(2) - 1; // Valores: -1, 0 ou 1 (antes era -1 a 1)
        dy = rand.nextInt(2) - 1; // Valores: -1, 0 ou 1

        if (dx == 0 && dy == 0) { //Se ambos forem 0 no rand, garante que pelo menos vai andar pra alguma direção
            dx = 1; // Movimento padrão para direita
        }

        int monsterType = rand.nextInt(9) + 1;
        // Define os caminhos das imagens
        String monsterPath = String.format("/freezemonster/images/monster%d.png", monsterType);
        String congeladoPath = String.format("/freezemonster/images/monster%dbg.png", monsterType);

        // Cria a gosma com direção aleatória
        this.gosma = new Gosma(x, y);

        // Carrega e redimensiona a imagem normal do monstro
        ImageIcon monsterIcon = new ImageIcon(getClass().getResource(monsterPath));
        Image monsterImage = monsterIcon.getImage().getScaledInstance(50, 50, Image.SCALE_SMOOTH);
        setImage(monsterImage);

        // Carrega e redimensiona a imagem congelada
        ImageIcon congeladoIcon = new ImageIcon(getClass().getResource(congeladoPath));
        Image congeladoImg = congeladoIcon.getImage().getScaledInstance(50, 50, Image.SCALE_SMOOTH);
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
        y += dy; // Movimento no Y (EXCLUSIVO para o Freeze Monsters)

        // Limites horizontais
        if (x <= Commons.BORDER_LEFT) {
            x = Commons.BORDER_LEFT;
            dx = -dx; // Inverte direção (opcional)
        } else if (x + getImageWidth() > Commons.BOARD_WIDTH - Commons.BORDER_RIGHT) {
            x = Commons.BOARD_WIDTH - Commons.BORDER_RIGHT - getImageWidth();
            dx = -dx;
        }

        // Limites verticais, tomando como base os limites horizontais que ja existiam
        if (y <= Commons.BORDER_TOP) {
            y = Commons.BORDER_TOP;
            dy = -dy; // Inverte direção (opcional)
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
        return congeladoImage;
    }

    public void setCongeladoImage(ImageIcon congeladoImage) {
        this.congeladoImage = congeladoImage;
    }

    public Gosma getGosma() {
        return gosma;
    }

    public void setGosma(Gosma gosma) {
        this.gosma = gosma;
    }
}