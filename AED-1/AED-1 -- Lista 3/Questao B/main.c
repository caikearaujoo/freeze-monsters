#include <stdio.h>
#include <stdlib.h>

void potencia (int x, int y);

int main()
{
    int n1, n2, result;
    printf("\nDigite dois valores: ");
    scanf("%d %d", &n1, &n2);

    potencia (n1, n2);

    return 0;
}

void potencia (int x, int y)
{

    int i, numero = x;

    if (y == 0)
    {
        printf("\n1");
    }

       for (i = 1; i < y; i++)
    {
        numero *= x;
    }

    if (y > 0)
    {
        for (i = 1; i < y; i++)
        {
            numero *= x;
        }
        printf("\n%d", numero);
    }

    if (y < 0)
    {
        y = y * (-1);

        for (i = 1; i < y; i++)
        {
            numero *= x;
        }
        printf("\n1 / %d", numero);
    }
}
