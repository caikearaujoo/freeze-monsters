#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[5];
    int i=0;
    int j=0;
    int maior=0;
    int menor=0;


    for (i = 0; i<5 ; i++)
    {
        printf("\nDigite um valor para armazenar na array: ");
        scanf ("%d", &vet[i]);
    }

    for (j=1;j<5;j++)
    {
        if (vet[j] < vet[menor])
        {
            menor=j;
        }
        if (vet[j]>vet[maior])
        {
            maior=j;
        }
    }

    printf("\nA posicao com o maior valor eh %d e a posicao com o menor valor eh %d", maior, menor);
    return 0;
}
