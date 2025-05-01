#include <stdio.h>
#include <stdlib.h>

void lerMatriz(float **matriz, int linhas, int colunas) 
{
    int i, j;

    printf("Digite os elementos da matriz:\n");
    for (i = 0; i < linhas; i++) 
    {
        for (j = 0; j < colunas; j++) 
        {
            scanf("%f", &matriz[i][j]);
        }
    }
}

void imprimirMatriz(float **matriz, int linhas, int colunas) 
{
    int i, j;

    printf("Matriz:\n");
    for (i = 0; i < linhas; i++) 
    {
        for (j = 0; j < colunas; j++) 
        {
            printf("%.2f ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() 
{
    int linhas, colunas;
    int i;
    float **matriz;

    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &linhas);

    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &colunas);

    matriz = (float **) malloc(linhas * sizeof(float *));
    for (i = 0; i < linhas; i++) 
    {
        matriz[i] = (float *) malloc(colunas * sizeof(float));
    }

    lerMatriz(matriz, linhas, colunas);

    imprimirMatriz(matriz, linhas, colunas);

    for (i = 0; i < linhas; i++) 
    {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}
