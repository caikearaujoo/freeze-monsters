package freezemonster;

import freezemonster.sprite.Gosma;
import freezemonster.sprite.Monster;
import freezemonster.sprite.Ray;
import freezemonster.sprite.Woody;
import spriteframework.AbstractBoard;
import spriteframework.sprite.BadSprite;
import spriteframework.sprite.Player;

import javax.swing.*;
import java.awt.*;
import java.awt.event.KeyEvent;
import java.util.LinkedList;
import java.util.Random;

public class FreezeMonsterBoard extends AbstractBoard {
    private Ray raio;
    private Random random;
    private int deaths = 0;

    @Override
    protected Player createPlayer() {
        return new Woody();
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
        raio = new Ray(0, 0, 0); // dx=0 para movimento vertical
        raio.die();
    }

    private void drawRaio(Graphics g) {
        if (raio.isVisible()) {
            g.drawImage(raio.getImage(), raio.getX(), raio.getY(), this);
        }
    }

    @Override
    protected void drawOtherSprites(Graphics g) {
        drawRaio(g);
        drawGosmas(g);
    }

    @Override
    protected void update() {
        checkGameStatus();
        updatePlayer();
        updateRay();
        updateMonstersAndGosmas();
    }

    private void checkGameStatus() {
        if (deaths == spaceinvaders.Commons.NUMBER_OF_ALIENS_TO_DESTROY) {
            endGame("Game won!");
        }
    }

    private void updatePlayer() {
        for (Player player : players) {
            player.act();
            checkPlayerCollision(player);
        }
    }

    private void updateRay() {
        if (raio.isVisible()) {
            raio.setY(raio.getY() - 4); // Move o raio para cima

            checkRayCollisions();

            if (raio.getY() < 0) {
                raio.die();
            }
        }
    }

    private void updateMonstersAndGosmas() {
        for (BadSprite bad : badSprites) {
            Monster monster = (Monster) bad;

            if (monster.isVisible() && !monster.isDying()) {
                monster.act();
                tryToShootGosma(monster);
                updateGosma(monster);
            }
        }
    }

    private void tryToShootGosma(Monster monster) {
        if (random.nextInt(100) < 2 && monster.getGosma().isDestroyed()) {
            monster.getGosma().setDestroyed(false);
            monster.getGosma().setX(monster.getX());
            monster.getGosma().setY(monster.getY());
        }
    }

    private void updateGosma(Monster monster) {
        Gosma gosma = monster.getGosma();
        if (!gosma.isDestroyed()) {
            gosma.act();

            // Verifica se gosma saiu da tela
            if (gosma.getY() > Commons.BOARD_HEIGHT) {
                gosma.setDestroyed(true);
            }
        }
    }

    private void checkPlayerCollision(Player player) {
        for (BadSprite bad : badSprites) {
            Monster monster = (Monster) bad;

            // Colisão com monstro
            if (monster.isVisible() && player.getRect().intersects(monster.getRect())) {
                player.die();
                endGame("Game Over! Monster collision!");
            }

            // Colisão com gosma
            if (!monster.getGosma().isDestroyed() &&
                    player.getRect().intersects(monster.getGosma().getRect())) {
                player.die();
                monster.getGosma().setDestroyed(true);
                endGame("Game Over! Hit by gosma!");
            }
        }
    }

    private void checkRayCollisions() {
        for (BadSprite bad : badSprites) {
            Monster monster = (Monster) bad;
            if (monster.isVisible() && raio.getRect().intersects(monster.getRect())) {
                monster.die();
                deaths++;
                raio.die();
                break; // Raio acerta apenas 1 monstro
            }
        }
    }

    private void endGame(String message) {
        inGame = false;
        timer.stop();
        this.message = message;
    }

    @Override
    protected void processOtherSprites(Player player, KeyEvent e) {
        if (e.getKeyCode() == KeyEvent.VK_SPACE && inGame && !raio.isVisible()) {
            raio = new Ray(player.getX(), player.getY(), 0);
        }
    }

    private void drawGosmas(Graphics g) {
        for (BadSprite bad : badSprites) {
            Monster monster = (Monster) bad;
            Gosma gosma = monster.getGosma();
            if (!gosma.isDestroyed()) {
                g.drawImage(gosma.getImage(), gosma.getX(), gosma.getY(), this);
            }
        }
    }
}