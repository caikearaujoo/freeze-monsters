#include <stdio.h>
#include <stdlib.h>

void inverte (int *a, int *b);

int main()
{
    int n1, n2;
    int *p1, *p2;
    p1 = &n1;
    p2 = &n2;
    printf("\nDigite dois numeros: ");
    scanf ("%d %d", &n1, &n2);
    inverte (p1, p2);
    printf("\nValores depois da troca: %d e %d", n1, n2);
    return 0;
}

void inverte (int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
