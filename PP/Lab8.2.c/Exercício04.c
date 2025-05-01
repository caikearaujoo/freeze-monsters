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
        if (*(p+i)% 2 == 0)
        {
            printf("\n%p", (p+i));
        }
    }
    return 0;
}
