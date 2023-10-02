#include <stdio.h>
#include <stdlib.h>

int **alocarMatriz(int linhas, int colunas) 
{
    int **matriz = (int **) malloc(linhas * sizeof(int *));
    int i;

    for (i = 0; i < linhas; i++) 
    {
        matriz[i] = (int *) malloc(colunas * sizeof(int));
    }

    return matriz;
}

void lerMatriz(int **matriz, int linhas, int colunas) 
{
    int i, j;

    printf("Digite os elementos da matriz:\n");
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
}

int verificarValor(int **matriz, int linhas, int colunas, int valor) 
{
    int i, j;

    for (i = 0; i < linhas; i++) 
    {
        for (j = 0; j < colunas; j++) 
        {
            if (matriz[i][j] == valor) 
            {
                return 1;  
            }
        }
    }

    return 0;
}

void liberarMatriz(int **matriz, int linhas) 
{
    int i;

    for (i = 0; i < linhas; i++) 
    {
        free(matriz[i]);
    }

    free(matriz);
}

int main() {
    int linhas, colunas;
    int valor;
    int **matriz;
    int resultado;

    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &linhas);

    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &colunas);

    matriz = alocarMatriz(linhas, colunas);

    lerMatriz(matriz, linhas, colunas);

    printf("Digite um valor para verificar na matriz: ");
    scanf("%d", &valor);

    resultado = verificarValor(matriz, linhas, colunas, valor);

    if (resultado) {
        printf("O valor %d está presente na matriz.\n", valor);
    } else {
        printf("O valor %d não está presente na matriz.\n", valor);
    }

    liberarMatriz(matriz, linhas);

    return 0;
}
