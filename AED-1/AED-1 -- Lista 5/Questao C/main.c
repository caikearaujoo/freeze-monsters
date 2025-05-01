#include <stdio.h>
#include <stdlib.h>

int main()
{
    int linhas, colunas, i, j, k = 0, tamanho;
    int **mat, *aux;

    printf("Digite o numero de linhas da matriz desejada: ");
    scanf("%d", &linhas);

    printf("Digite o numero de colunas da matriz desejada: ");
    scanf("%d", &colunas);

    mat = (int **) calloc(linhas, sizeof(int *));
    if (mat == NULL)
    {
        printf("\nErro.");
        exit(1);
    }
    for (i = 0; i < linhas; i++)
    {
        mat[i] = (int *)calloc(colunas, sizeof(int));
        if (mat[i] == NULL)
        {
            printf("\nErro.");
            exit(1);
        }
    }

    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            printf("Digite o valor para a posicao [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    aux = (int*) calloc (1, sizeof(int));

    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            aux[k] = mat[i][j];
            k++;
            aux = (int*)realloc (aux, k * (sizeof(int)));
        }
    }

    tamanho = k;
    for (i = 0; i < tamanho; i++)
    {
        for (j = i + 1; j < tamanho; j++)
        {
            if (aux[i] == aux[j])
            {
                for (k = j; k < tamanho; k++)
                {
                    aux[k] = aux[k+1];
                }
                j--;
                tamanho --;
                aux = (int*)realloc (aux, tamanho * (sizeof(int)));
            }
        }
    }


    printf("\nVetor com os valores da matriz: [");
    for (i = 0; i < tamanho; i++)
    {
        printf(" %d ", aux[i]);
    }
    printf("]");
    for (i = 0; i < linhas; i++)
    {
        free(mat[i]);
    }
    free(mat);

    return 0;
}
