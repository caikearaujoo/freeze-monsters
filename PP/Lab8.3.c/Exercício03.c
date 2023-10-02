#include <stdio.h>
#include <stdlib.h>

void soma (int *a, int *b);

int main()
{
    int n1, n2;
    int *p1, *p2;
    p1 = &n1;
    p2 = &n2;
    printf("\nDigite dois numeros: ");
    scanf ("%d %d", &n1, &n2);
    soma (p1, p2);
    printf("\nSoma: %d", n1);
    return 0;
}

void soma (int *a, int *b)
{
    *a = *a + *b;
}
