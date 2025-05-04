package freezemonster;

import freezemonster.sprite.Woody;
import spriteframework.AbstractBoard;
import spriteframework.sprite.Player;

import java.awt.*;
import java.awt.event.KeyEvent;

public class FreezeMonsterBoard extends AbstractBoard {

    protected Player createPlayer() {
        return new Woody();  // Implementação diferente
    }

    @Override
    protected void createBadSprites() {

    }

    @Override
    protected void createOtherSprites() {

    }

    @Override
    protected void drawOtherSprites(Graphics g) {

    }

    @Override
    protected void update() {

    }

    @Override
    protected void processOtherSprites(Player player, KeyEvent e) {

    }
}
