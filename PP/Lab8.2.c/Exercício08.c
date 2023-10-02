#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A, *B, **C, ***D;
    B = &A;
    printf ("\nDigite um valor: ");
    scanf ("%d", &A);
    printf("\n%d", *B*2);
    C = &B;
    printf("\n%d", **C*3);
    D = &C;
    printf("\n%d", ***D*4);
    return 0;
}
