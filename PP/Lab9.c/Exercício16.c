#include <stdio.h>

int main() {
    int N, M;

    printf("Digite o número de linhas (N): ");
    scanf("%d", &N);
    printf("Digite o número de colunas (M): ");
    scanf("%d", &M);
    
    int matriz[N][M];
    printf("Digite os elementos da matriz %dx%d:\n", N, M);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    int transposta[M][N];
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            transposta[i][j] = matriz[j][i];
        }
    }

    printf("\nMatriz %dx%d:\n", N, M);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("\nMatriz transposta %dx%d:\n", M, N);
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", transposta[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
