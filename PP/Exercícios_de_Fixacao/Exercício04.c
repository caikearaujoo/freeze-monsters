#include <stdio.h> 

int main ()
{
    double vet [10];
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("\nDigite um valor para a posicao %d do vetor: ", i);
        scanf("%lf", &*(vet+i));
    }

    printf("\n[");
    for (i = 0; i < 10; i++)
    {
        printf(" %.2lf ", *(vet+i)); 
    }
    printf("]");

    return 0;
}
