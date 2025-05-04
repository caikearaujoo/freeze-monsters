package freezemonster;

import freezemonster.sprite.Monster;
import freezemonster.sprite.Ray;
import freezemonster.sprite.Woody;
import spriteframework.AbstractBoard;
import spriteframework.sprite.Player;

import java.awt.*;
import java.awt.event.KeyEvent;
import java.util.LinkedList;
import java.util.Random;

public class FreezeMonsterBoard extends AbstractBoard {
    private Ray raio;
    private Random random;
    private int monstersDestroyed;
    private int deaths = 0;

    @Override
    protected Player createPlayer() {
        return new Woody();  // Implementação diferente
    }

    @Override
    protected void createBadSprites() {
        int numMonstros = 10;
        badSprites = new LinkedList<>();
        random = new Random();

        for (int i = 0; i < numMonstros; i++) {
            int x = random.nextInt(Commons.BOARD_WIDTH - 100) + 50;
            int y = random.nextInt(Commons.BOARD_HEIGHT / 2) + 20;
            badSprites.add(new Monster(x, y));
        }
    }

    @Override
    protected void createOtherSprites() {
        raio = new Ray(0, 0, 3); //NAO SEI COMO INICIAR ISSO AQUI, ACHO QUE I = 3
        raio.die(); // começa invisível
    }

    private void drawRaio(Graphics g) {
        if (raio.isVisible()) {

            g.drawImage(raio.getImage(), raio.getX(), raio.getY(), this);
        }
    }

    @Override
    protected void drawOtherSprites(Graphics g) {
        drawRaio(g);
    }

    @Override
    protected void update() {
        if (deaths == spaceinvaders.Commons.NUMBER_OF_ALIENS_TO_DESTROY) {

            inGame = false;
            timer.stop();
            message = "Game won!";
        }

        for (Player player: players)
            player.act();

    }

    @Override
    protected void processOtherSprites(Player player, KeyEvent e) {
        if (e.getKeyCode() == KeyEvent.VK_SPACE && inGame) {
            // só cria novo raio se o atual não estiver visível
            if (!raio.isVisible()) {
                int x = player.getX();
                int y = player.getY();
                raio = new Ray(x, y, 0); // dx=0 para movimento vertical
            }
        }
    }
}
