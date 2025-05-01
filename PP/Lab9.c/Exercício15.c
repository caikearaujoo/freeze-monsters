#include <stdio.h>
#include <stdlib.h>

void lerMatriz(int **matriz, int linhas, int colunas) {
    int i, j;

    printf("Digite os elementos da matriz:\n");
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
}

void encontrarMaioresNumeros(int **matriz, int linhas, int colunas) {
    int i, j;
    int maior1 = matriz[0][0], maior2 = matriz[0][0], maior3 = matriz[0][0];
    int linhaMaior1 = 0, colunaMaior1 = 0;
    int linhaMaior2 = 0, colunaMaior2 = 0;
    int linhaMaior3 = 0, colunaMaior3 = 0;

    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            if (matriz[i][j] > maior1) {
                maior3 = maior2;
                linhaMaior3 = linhaMaior2;
                colunaMaior3 = colunaMaior2;

                maior2 = maior1;
                linhaMaior2 = linhaMaior1;
                colunaMaior2 = colunaMaior1;

                maior1 = matriz[i][j];
                linhaMaior1 = i;
                colunaMaior1 = j;
            } else if (matriz[i][j] > maior2) {
                maior3 = maior2;
                linhaMaior3 = linhaMaior2;
                colunaMaior3 = colunaMaior2;

                maior2 = matriz[i][j];
                linhaMaior2 = i;
                colunaMaior2 = j;
            } else if (matriz[i][j] > maior3) {
                maior3 = matriz[i][j];
                linhaMaior3 = i;
                colunaMaior3 = j;
            }
        }
    }

    printf("Os três maiores números são:\n");
    printf("Maior: %d, Linha: %d, Coluna: %d\n", maior1, linhaMaior1, colunaMaior1);
    printf("Segundo maior: %d, Linha: %d, Coluna: %d\n", maior2, linhaMaior2, colunaMaior2);
    printf("Terceiro maior: %d, Linha: %d, Coluna: %d\n", maior3, linhaMaior3, colunaMaior3);
}

int main() {
    int N, M;
    int i;
    int **matriz;

    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &N);

    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &M);

    matriz = (int **) malloc(N * sizeof(int *));
    for (i = 0; i < N; i++) {
        matriz[i] = (int *) malloc(M * sizeof(int));
    }

    lerMatriz(matriz, N, M);

    encontrarMaioresNumeros(matriz, N, M);

    for (i = 0; i < N; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}
