#include <stdlib.h>
#include <stdio.h>

void maiornumero (int vet [], int n, int *maior, int *contagem);

int main ()
{
    int n, *p, i;
    printf("\nDigite o tamanho do vetor desejado: ");
    scanf ("%d", &n);
    
    p = (int*) malloc (n*sizeof(int));
    
    if (p == NULL)
    {
        printf("\nErro de memoria insuficiente.");
        exit (1);
    }
    
    for (i=0; i<n; i++)
    {
        printf("\nDigite o valor da posicao %d: ", i);
        scanf ("%d", &p[i]);
    }

    int maior = p[0], contagem = 0;
    int *p2, *p3;
    p2 = &maior;
    p3 = &contagem;
    maiornumero (p, n, p2, p3);

    printf("\nO maior numero eh %d e ele apareceu %d vezes", maior, contagem);

    return 0;
}

void maiornumero (int vet [], int n, int *maior, int *contagem)
{
    int j;
    for (j=0; j<n; j++)
    {
        if (*maior < vet [j])
        {
            *maior = vet[j];
            *contagem = 1;
        }
        else if (vet[j] == *maior)
        {
            (*contagem)++;
        }
    }
}
