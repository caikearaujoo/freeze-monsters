package freezemonster.sprite;

import freezemonster.Commons;
import spriteframework.sprite.BadSprite;

import javax.swing.ImageIcon;
import java.awt.Image;

public class Ray extends BadSprite {
    private boolean hitRegistered = false; // Novo campo
    // parte desenvolvida anteriormente
    public Ray() {
        //
    }

    public Ray (int x, int y, int i){
        initRay(x, y, i);
    }

    public void markAsHit() {
        this.hitRegistered = true;
        this.setDying(true);
    }

    public boolean hasHit() {
        return hitRegistered;
    }

    public void act() {
        if (!isDestroyed()) {
            x += dx;
            y += dy;

            // Verifica se saiu da tela
            if (x < 0 || x > Commons.BOARD_WIDTH ||
                    y < 0 || y > Commons.BOARD_HEIGHT) {
                setDying(true);
            }
        }
    }

    private void initRay(int x, int y, int direction) {
        try {
            // Carrega e redimensiona a imagem corretamente
            ImageIcon originalIcon = new ImageIcon(getClass().getResource("/freezemonster/images/ray.png"));
            Image scaledImage = originalIcon.getImage().getScaledInstance(
                    Commons.RAY_WIDTH,
                    Commons.RAY_HEIGHT,
                    Image.SCALE_SMOOTH
            );
            setImage(scaledImage);

            // Posicionamento centralizado no jogador
            setX(x + Commons.PLAYER_WIDTH/2 - Commons.RAY_WIDTH/2);
            setY(y - Commons.RAY_HEIGHT);

            switch(direction) {
                case 1: // Esquerda
                    dx = -Commons.RAY_SPEED;
                    dy = 0;
                    break;
                case 2: // Direita
                    dx = Commons.RAY_SPEED;
                    dy = 0;
                    break;
                case 3: // Cima
                    dx = 0;
                    dy = -Commons.RAY_SPEED;
                    break;
                case 4: // Baixo
                    dx = 0;
                    dy = Commons.RAY_SPEED;
                    break;
                default: // Padrão (para cima)
                    dx = 0;
                    dy = -Commons.RAY_SPEED;
            }


            getImageDimensions(); // Atualiza as dimensões do sprite

        } catch (Exception e) {
            System.err.println("Erro ao carregar imagem do raio: " + e.getMessage());
            // Fallback opcional (se necessário)
            setImage(new ImageIcon(new byte[0]).getImage());
        }
    }
}
