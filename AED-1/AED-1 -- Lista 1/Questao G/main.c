#include <stdio.h>
#include <stdlib.h>

int main()
{
    int soma = 0, i, j, mat[5][10], vet[5];
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 10; j++)
        {
            printf("\nDigite um valor para preencher a matriz: ");
            scanf("%d", &mat[i][j]);
        }
    }

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 10; j++)
        {
            soma += mat[i][j];
        }
        vet[i] = soma;
        soma = 0;
    }

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 10; j++)
        {
            mat[i][j] *= vet[i];
        }
    }

    printf ("\nVetor das somas: [");
    for (i=0; i<5; i++)
    {
        printf(" %d ", vet[i]);
    }
    printf ("]");

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 10; j++)
        {
            printf("%d", mat[i][j]);
        }
    printf("\n");
    }
    return 0;


}
