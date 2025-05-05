package freezemonster.sprite;
import freezemonster.Commons;
import spriteframework.sprite.Player;

import java.awt.Graphics;
import java.awt.Image;
import java.awt.event.KeyEvent;
import javax.swing.*;
import javax.swing.ImageIcon;

public class Woody extends Player {
    // parte desenvolvida anteriormente
    private int width;
    private int direcao_woody; // 1 = esq, 2 = dir, 3 = cima, 4 = baixo

    public Woody() {
        super();  // chama o construtor da classe Player
        setVisible(true);
        loadImage();  // carrega a imagem específica do Woody
        getImageDimensions();  // obtém as dimensões da imagem
        resetState();  // define a posição inicial (herdado de Player)
    }

    protected void loadImage() {
        try {
            ImageIcon ii = new ImageIcon(getClass().getResource("/freezemonster/images/woody.png"));
            Image woody = ii.getImage().getScaledInstance(
                    Commons.PLAYER_WIDTH,
                    Commons.PLAYER_HEIGHT,
                    Image.SCALE_SMOOTH
            );
            setImage(woody);
            getImageDimensions(); // Atualiza width e height
        } catch (Exception e) {
            System.err.println("Erro ao carregar Woody: " + e.getMessage());
            // Fallback
            setImage(new ImageIcon(new byte[0]).getImage());
        }
    }

    @Override
    protected void moveY() { //sobrescrevendo o hook method moveY para que o Woody possa andar também no eixo Y.
        y += dy;  // adiciona movimento em Y
    }

    //mesma coisa de sobrescrever o hook method
    @Override
    protected void checkBoundsY(){
        if (y <= Commons.BORDER_TOP)
            y = Commons.BORDER_TOP;
        if (y >= Commons.BOARD_HEIGHT - Commons.PLAYER_HEIGHT) // Use PLAYER_HEIGHT (60)
            y = Commons.BOARD_HEIGHT - Commons.PLAYER_HEIGHT;
    }

    public void keyPressed(KeyEvent e) { 
        //agora, sobrescrevendo o método keyPressed para que ande no eixo X e eixo Y
        super.keyPressed(e);  // mantém o movimento em X
        int key = e.getKeyCode();
        if (key == KeyEvent.VK_UP) {
            dy = -2;
            direcao_woody = 3; // Cima
        }
        if (key == KeyEvent.VK_DOWN) {
            dy = 2;
            direcao_woody = 4; // Baixo
        }
        if (key == KeyEvent.VK_LEFT) {
            direcao_woody = 1; // Esquerda
        }
        if (key == KeyEvent.VK_RIGHT) {
            direcao_woody = 2; // Direita
        }
        if (key == KeyEvent.VK_UP)    dy = -2;
        if (key == KeyEvent.VK_DOWN)  dy = 2;
    }

    public void keyReleased(KeyEvent e) { 
        // se soltar a tecla, nao anda pra lugar nenhum
        super.keyReleased(e);
        int key = e.getKeyCode();
        if (key == KeyEvent.VK_UP || key == KeyEvent.VK_DOWN)
            dy = 0;
    }

    protected void resetState() {
        setX(Commons.BOARD_WIDTH / 2 - (Commons.PLAYER_WIDTH/2)); // Centralizado
        setY(Commons.BOARD_HEIGHT - Commons.PLAYER_HEIGHT - 20); // 20px do fundo

    }


    public int getDirecao_woody() {
        return direcao_woody;
    }
}
