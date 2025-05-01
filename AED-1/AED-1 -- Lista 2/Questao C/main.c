#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **p2, **p1, **p3, i, j;

    p1 = (int **) calloc (3, sizeof(int*));
    for(i = 0; i < 3; i++)
    {
        p1[i] = (int*) calloc (3, sizeof(int));
    }

    if (p1 == NULL)
    {
        printf("\nErro.");
        exit(1);
    }

    p2 = (int **) calloc (3, sizeof(int*));
    for(i = 0; i < 3; i++)
    {
        p2[i] = (int*) calloc (3, sizeof(int));
    }

    if (p2 == NULL)
    {
        printf("\nErro.");
        exit(1);
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\nDigite um valor para a matriz 1: ");
            scanf("%d", &p1[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\nDigite um valor para a matriz 2: ");
            scanf("%d", &p2[i][j]);
        }
    }

    p3 = (int **) calloc (3, sizeof(int*));

    for(i = 0; i < 3; i++)
    {
        p3[i] = (int*) calloc (3, sizeof(int));
    }

    if (p3 == NULL)
    {
        printf("\nErro.");
        exit(1);
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            p3[i][j] = p1[i][j] + p2[i][j];
        }
    }

    printf("\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d", p1[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d", p2[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d", p3[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++)
    {
        free (p1[i]);
    }
    free (p1);

    for (i = 0; i < 3; i++)
    {
        free (p2[i]);
    }
    free (p2);

    for (i = 0; i < 3; i++)
    {
        free (p3[i]);
    }
    free (p3);

    return 0;
}
