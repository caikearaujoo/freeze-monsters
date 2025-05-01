#include <stdio.h>
int main ()
{
    int vet [5];
    int i;
    int *p;
    p = &vet[0];
    for (i=0; i<5; i++)
    {
        printf("\nDigite o valor: ");
        scanf ("%d",(p+i));
    }
    for (i=0; i<5; i++)
    {
        *(p+i) = 2*(*(p+i));
        printf("\n%d",*(p+i) );
    }
    return 0;
}
