#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet [10];
    int i;
    int *p;
    int *maior, *menor;
    maior = &vet[0];
    p = &vet[0];
    maior = &vet[0];
    menor = &vet[0];
    for (i=0; i<10; i++)
    {
        printf("\nDigite um valor: ");
        scanf ("%d", &*(p+i));

       
        if (*(p + i) > *maior)
        {
            maior = (p + i);
        }
        if (*(p + i) < *menor)
        {
            menor = (p + i);
        }
    }
    printf("\nMaior valor eh %d e menor valor eh %d", *maior, *menor);
    return 0;
}
