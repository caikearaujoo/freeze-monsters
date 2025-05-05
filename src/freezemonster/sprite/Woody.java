package freezemonster.sprite;

import spriteframework.Commons;
import spriteframework.sprite.Player;

import java.awt.Graphics;
import java.awt.Image;
import java.awt.event.KeyEvent;
import javax.swing.*;
import javax.swing.ImageIcon;

public class Woody extends Player {
    // parte desenvolvida anteriormente
    private int width;
    private int direcao_woody = 3; // 1 = esq, 2 = dir, 3 = cima, 4 = baixo

    public Woody() {
        super();  // chama o construtor da classe Player
        loadImage();  // carrega a imagem específica do Woody
        getImageDimensions();  // obtém as dimensões da imagem
        resetState();  // define a posição inicial (herdado de Player)
    }

    protected void loadImage() {
        ImageIcon ii = new ImageIcon("/freezemonster/images/woody.png");
        Image woody = ii.getImage().getScaledInstance(30, 60, Image.SCALE_DEFAULT);
        width = ii.getImage().getWidth(null); // Define a largura desejada
        setImage(woody);
    }

    @Override
    protected void moveY() { //sobrescrevendo o hook method moveY para que o Woody possa andar também no eixo Y.
        y += dy;  // adiciona movimento em Y
    }

    //mesma coisa de sobrescrever o hook method
    @Override
    protected void checkBoundsY(){
        if (y <= 2)
            y = 2;
        if (y >= Commons.BOARD_WIDTH - 2 * width)
            y = Commons.BOARD_WIDTH - 2 * width;
    }

    public void keyPressed(KeyEvent e) { 
        //agora, sobrescrevendo o método keyPressed para que ande no eixo X e eixo Y
        super.keyPressed(e);  // mantém o movimento em X
        int key = e.getKeyCode();
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
        setX(Commons.BOARD_WIDTH / 2); // Centralizado horizontalmente
        setY(Commons.BOARD_HEIGHT - 100); // Perto da parte inferior
    }
}
