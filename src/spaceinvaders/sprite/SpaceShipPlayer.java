package spaceinvaders.sprite;

import spriteframework.Commons;

import javax.swing.*;
import java.awt.*;
import java.awt.event.KeyEvent;

// alteração: nova classe player, com implementação própria para space invaders
public class SpaceShipPlayer extends spriteframework.sprite.Player {
    public SpaceShipPlayer() {
        super();  // chama o construtor da classe Player
        loadImage();  // carrega a imagem específica do Woody
        getImageDimensions();  // obtém as dimensões da imagem
        resetState();  // define a posição inicial (herdado de Player)
    }

    protected void loadImage() {
        try {
            // Carrega a imagem usando o caminho absoluto do recurso
            java.net.URL imageUrl = getClass().getResource("/spaceinvaders/images/player.png");

            if (imageUrl == null) {
                throw new RuntimeException("Arquivo de imagem não encontrado: player.png");
            }

            ImageIcon icon = new ImageIcon(imageUrl);

            // Verifica se a imagem foi carregada corretamente
            if (icon.getImageLoadStatus() != java.awt.MediaTracker.COMPLETE) {
                throw new RuntimeException("Falha ao carregar a imagem");
            }

            width = icon.getImage().getWidth(null);
            setImage(icon.getImage());

        } catch (Exception e) {
            System.err.println("Erro crítico ao carregar imagem: " + e.getMessage());
            // Encerra o programa se não conseguir carregar a imagem essencial
            System.exit(1);
        }
    }


    @Override
    public void keyPressed(KeyEvent e) {
        int key = e.getKeyCode();

        if (key == KeyEvent.VK_LEFT) {
            dx = -2;
        }

        if (key == KeyEvent.VK_RIGHT) {
            dx = 2;
        }
    }

    public void keyReleased(KeyEvent e) {
        int key = e.getKeyCode();

        if (key == KeyEvent.VK_LEFT) {
            dx = 0;
        }

        if (key == KeyEvent.VK_RIGHT) {
            dx = 0;
        }
    }

    @Override
    protected void resetState() {
        setX(Commons.INIT_PLAYER_X);
        setY(Commons.INIT_PLAYER_Y);
    }
}
