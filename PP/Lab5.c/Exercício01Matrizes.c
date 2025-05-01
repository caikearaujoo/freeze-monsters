#include <stdio.h>

int main() 
{
    int mat[4][4];
    int i, j, count = 0;

    for (i = 0; i < 4; i++) 
    {
        for (j = 0; j < 4; j++) 
        {
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
            if (mat[i][j] > 10) 
            {
                count++;
            }
        }
    }

    printf("A matriz possui %d valores maiores que 10.\n", count);

    return 0;
}
