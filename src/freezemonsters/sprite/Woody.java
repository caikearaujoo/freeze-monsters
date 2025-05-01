package freezemonsters.sprite;

import freezemonsters.Commons;
import java.awt.Graphics;
import java.awt.Image;
import java.awt.event.KeyEvent;
import javax.swing.*;
import javax.swing.ImageIcon;
import spriteframework.sprite.Player;

public class Woody extends Player{
    private int width;
    private int direcao_woody = 3; // 1 = esq, 2 = dir, 3 = cima, 4 = baixo
    public Woody(){
        loadImage();
        getImageDimensions();
        resetState();
    }

    protected void loadImage(){
        ImageIcon ii = new ImageIcon("/images/woody.png");
        Image woody = ii.getImage().getScaledInstance(30, 60, Image.SCALE_DEFAULT);
        width = ii.getImage().getWidth(null); // Define a largura desejada
        setImage(woody);
    }

    public void keyPressed(KeyEvent e) { //agora, sobrescrevendo o método keyPressed para que ande no eixo X e eixo Y

        int key = e.getKeyCode();

        if (key == KeyEvent.VK_LEFT) {
            direcao_woody = 1;
            dx = -2;
        }

        if (key == KeyEvent.VK_RIGHT) {
            direcao_woody = 2;
            dx = 2;
        }

        if (key == KeyEvent.VK_UP) {
            direcao_woody = 3;
            dy = -2;
        }

        if (key == KeyEvent.VK_DOWN) {
            direcao_woody = 4;
            dy = 2;
        }
    }

    public void keyReleased(KeyEvent e) { // se soltar a tecla, nao anda pra lugar nenhum

        int key = e.getKeyCode();

        if (key == KeyEvent.VK_LEFT) {
            dx = 0;
        }

        if (key == KeyEvent.VK_RIGHT) {
            dx = 0;
        }
        if (key == KeyEvent.VK_UP) {
            dy = 0;
        }

        if (key == KeyEvent.VK_DOWN) {
            dy = 0;
        }
    }

    public void act() {
        x += dx;
        y += dy;

        // Limites horizontais (sem rebote, trava na borda)
        if (x <= Commons.BORDER_LEFT) {
            x = Commons.BORDER_LEFT;
        }
        else if (x >= Commons.BOARD_WIDTH - Commons.BORDER_RIGHT - getImageWidth()) {
            x = Commons.BOARD_WIDTH - Commons.BORDER_RIGHT - getImageWidth();
        }

        // Limites verticais (sem rebote, trava na borda)
        if (y <= Commons.BORDER_TOP) {
            y = Commons.BORDER_TOP;
        }
        else if (y >= Commons.BOARD_HEIGHT - Commons.BORDER_BOTTOM - getImageHeight()) {
            y = Commons.BOARD_HEIGHT - Commons.BORDER_BOTTOM - getImageHeight();
        }
    }


    public int getDirecao_woody() {
        return direcao_woody;
    }

    public void setDirecao_woody(int direcao_woody) {
        this.direcao_woody = direcao_woody;
    }

    public int getWidth() {
        return width;
    }

    public void setWidth(int width) {
        this.width = width;
    }
}
