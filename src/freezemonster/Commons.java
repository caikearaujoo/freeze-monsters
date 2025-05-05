package freezemonster;

public interface Commons extends spriteframework.Commons {
    // Dimensões do jogo (herdadas do framework)
    // BOARD_WIDTH = 1000 (já definido no framework)
    // BOARD_HEIGHT = 900 (já definido no framework)

    // Bordas
    int BORDER_TOP = 20;
    int BORDER_BOTTOM = 20;
    int BORDER_LEFT = 5;
    int BORDER_RIGHT = 30;
    // Player (Woody)
    int PLAYER_WIDTH = 50;
    int PLAYER_HEIGHT = 100;
    int BOARD_WIDTH = 1000;
    int BOARD_HEIGHT = 900;
    int PLAYER_INIT_X = BOARD_WIDTH / 2 - PLAYER_WIDTH/2; // Centralizado
    int PLAYER_INIT_Y = BOARD_HEIGHT - PLAYER_HEIGHT - 20; // 20px do fundo

    // Monstros
    int MONSTER_WIDTH = 30;
    int MONSTER_HEIGHT = 30;
    int MONSTER_INIT_X = 150;
    int MONSTER_INIT_Y = 50;



    // Gosma (tiros dos monstros)
    int GOSMA_WIDTH = 30;
    int GOSMA_HEIGHT = 30;

    // Raio (tiro do Woody)
    int RAY_WIDTH = 30;
    int RAY_HEIGHT = 30;
    int RAY_SPEED = 5; // Velocidade do raio

    // Controles de dificuldade
    int NUMBER_OF_MONSTERS_TO_DESTROY = 10;
    int CHANCE_TO_SHOOT = 5; // 5% de chance por frame
    int MONSTER_SPEED = 2; // Velocidade base dos monstros


    // Outras constantes
    int DELAY = 17; // Tempo entre frames (ms)
    int GROUND = BOARD_HEIGHT - 50; // Linha de referência (se necessário)
}