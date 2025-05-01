#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j, *p1, cont = 0, jorge;

    printf("\nDigite um valor para n: ");
    scanf("%d", &n);

    p1 = (int*) calloc (n, sizeof(int));

    if (p1 == NULL)
    {
        printf("\nErro.");
    }

    for (i = 0; i < n; i++)
    {
        printf("\nDigite um valor para o vetor: ");
        scanf("%d", &p1[i]);
    }

    for (i = 0; i < n; i++)
    {
        if ((p1[i] % 2) != 0)
        {
            cont++;
            for (j = i; j < n; j++)
            {
                p1[j] = p1[j + 1];
            }
        }
    }

    jorge = n - cont;
    p1 = (int*) realloc (p1, jorge * (sizeof(int)));

    if (p1 == NULL)
    {
        printf("\nErro.");
    }

    printf("\n[");
    for (i = 0; i < jorge; i++)
    {
        printf(" %d ", p1[i]);
    }
    printf("]");

    free(p1);
    return 0;
}
