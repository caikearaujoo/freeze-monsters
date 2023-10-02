#include <stdio.h>

int main ()
{

    int n1=2, n2=5;
    int *p1 = &n1;
    int *p2 = &n2;

    printf("\n Endereco 1: %p e Endereco 2: %p", p1, p2);
    if (p1>p2)
    {
        printf("\nO maior endereco eh %p", p1);   
    }
    else if (p1<p2)
    {
        printf("\nO maior endereco eh %p", p2);
    }

return 0;
}
