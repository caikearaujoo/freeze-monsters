#include <stdio.h>

int ordena (int *a, int *b, int *c);

int main ()
{
    int n1, n2, n3;
    int *p1, *p2, *p3;

    p1 = &n1;
    p2 = &n2;
    p3 = &n3;

    printf ("digite o valor de X: ");
    scanf ("%d", p1);
    printf ("digite o valor de Y: ");
    scanf ("%d", p2);
    printf ("digite o valor de Z: ");
    scanf ("%d", p3);

    if (ordena (p1, p2, p3) == 1)
    {
        printf ("\nOs valor sao iguais, %d %d %d", *p1, *p2, *p3);
    } else
    {
        printf ("\nvalores ordenados: %d %d %d", *p1, *p2, *p3);
    }

    return 0;
}

int ordena (int *a, int *b, int *c)
{
    int temp;

    if ((*a == *b) && (*a == *c))
    {
        return 1;
    } else {
        if ((*a < *b) && (*b < *c))
        {
            *a = *a;
            *b = *b;
            *c = *c;
        } else if ((*a < *c) && (*c < *b))
        {
            temp = *b;
            *a = *a;
            *b = *c;
            *c = temp;
        } else if ((*b < *a) && (*a < *c))
        {
            temp = *a;
            *a = *b;
            *b = temp;
            *c = *c;
        } else if ((*b < *c) && (*c < *a))
        {
            temp = *a;
            *a = *b;
            *b = *c;
            *c = temp;
        } else if ((*c < *a) && (*a < *b))
        {
            temp = *a;
            *a = *c;
            *c = *b;
            *b = temp;
        } else if ((*c < *b) && (*b < *a))
        {
            temp = *a;
            *a = *c;
            *b = *b;
            *c = temp;
        }

        return 0;
    }
}
