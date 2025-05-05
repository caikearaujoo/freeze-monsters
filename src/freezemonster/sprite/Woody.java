package freezemonster.sprite;

import spriteframework.Commons;
import spriteframework.sprite.Player;

import java.awt.Image;
import java.awt.event.KeyEvent;
import javax.swing.ImageIcon;

public class Woody extends Player {
    private int width;
    private int direcao_woody = 3;      // 1 = esq, 2 = dir, 3 = cima, 4 = baixo

    public Woody() {
        //super();                      // chama o construtor da classe Player
        loadImage();                    // carrega a imagem específica do Woody
        getImageDimensions();           // obtém as dimensões da imagem
        resetState();                   // define a posição inicial (herdado de Player)
    }

    protected void loadImage() {
        ImageIcon woodyImg = new ImageIcon(this.getClass().getResource("/freezemonster/images/woody.png"));
        woodyImg.getImage().getScaledInstance(30, 60, Image.SCALE_DEFAULT);
        width = woodyImg.getImage().getWidth(null);
        setImage(woodyImg.getImage());

        /* APAGAR DEPOIS
        ImageIcon ii = new ImageIcon("/freezemonster/images/woody.png");
        Image woody = ii.getImage().getScaledInstance(30, 60, Image.SCALE_DEFAULT);
        width = ii.getImage().getWidth(null); // Define a largura desejada
        setImage(woody); */
    }

    @Override
    protected void moveY() {
        // hook method: woody pode andar no eixo y
        y += dy;
    }

    @Override
    protected void checkBoundsY() {
        if (y <= 2)
            y = 2;
        if (y >= Commons.BOARD_WIDTH - 2 * width)
            y = Commons.BOARD_WIDTH - 2 * width;
    }

    public void keyPressed(KeyEvent e) { 
        super.keyPressed(e);
        int key = e.getKeyCode();

        if (key == KeyEvent.VK_UP)
            dy = -2;
        if (key == KeyEvent.VK_DOWN)
            dy = 2;
    }

    @Override
    public void keyReleased(KeyEvent e) {
        super.keyReleased(e);
        int key = e.getKeyCode();

        if (key == KeyEvent.VK_UP || key == KeyEvent.VK_DOWN)
            dy = 0;
    }

    @Override
    protected void resetState() {
        setX(Commons.BOARD_WIDTH / 2);          // centralizado horizontalmente
        setY(Commons.BOARD_HEIGHT - 100);       // perto da parte inferior
    }
}
