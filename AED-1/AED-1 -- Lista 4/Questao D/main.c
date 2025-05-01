#include <stdio.h>
#include <stdlib.h>

void multiplicacao(int vet[], int multiplica, int tamanho);
int main()
{
    int *vet, n, multiplica, i;

    printf("\nDigite o tamanho do vetor desejado: ");
    scanf("%d", &n);

    vet = (int*) calloc(n, sizeof(int));
    if (vet == NULL)
    {
        printf("\nErro de alocacao de memoria.");
    }

    for (i = 0; i < n; i++)
    {
        printf("\nDigite um valor: ");
        scanf("%d", &vet[i]);
    }

    printf("\nVetor antigo: [");
    for (i = 0; i < n; i++)
    {
        printf(" %d ", vet[i]);
    }
    printf("]");

    printf("\nDigite um valor para multiplicar o vetor: ");
    scanf("%d", &multiplica);

    multiplicacao(vet, multiplica, n);

    printf("\nVetor novo: [");
    for (i = 0; i < n; i++)
    {
        printf(" %d ", vet[i]);
    }
    printf("]");

    free(vet);
    return 0;
}

void multiplicacao(int vet[], int multiplica, int tamanho)
{
    int i;
    for (i = 0; i < tamanho; i++)
    {
        vet[i] *= multiplica;
    }
}
