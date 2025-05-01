#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main ()
{
    int **p, linhas, colunas, i, j;
    printf("\nDigite as linhas da matriz desejada: ");
    scanf ("%d", &linhas);
    printf("\nDigite as linhas da matriz desejada: ");
    scanf ("%d", &colunas);

    srand(time (NULL));
    p = (int**) calloc (linhas, sizeof(int*));
    
    for (i = 0; i < linhas; i++)
    {
        p[i] = (int*) calloc (linhas, sizeof(int));
        for (j = 0; j< colunas; j++)
        {
            p[i][j] = rand() % 100;
        }
    }
    for (i=0; i<linhas; i++)
    {
        for (j=0; j<colunas; j++)
        {
            printf(" %d ", p[i][j]);
        }
        printf("\n");
    }

    for (i=0; i<colunas; i++)
    {
        free(p[i]);
    }
    free(p);
    return 0;
}
