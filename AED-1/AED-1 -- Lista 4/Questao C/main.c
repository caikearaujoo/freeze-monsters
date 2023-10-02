#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b);
void funcao(int vet[], int tamanho);

int main()
{
    int *vet, tamanho, n;

    printf("\nDigite o tamanho do vetor desejado: ");
    scanf("%d", &n);
    vet = (int*) calloc(n, sizeof(int));
    if (vet == NULL)
    {
        printf("\nErro de alocacao de memoria.");
    }
    tamanho = n;
    for (int i = 0; i < tamanho; i++)
    {
        printf("\nDigite um valor: ");
        scanf("%d", &vet[i]);
    }

    funcao(vet, tamanho);

    printf("\n[");
    for (int i = 0; i < tamanho; i++)
    {
        printf(" %d ", vet[i]);
    }
    printf("]");

    free(vet);

    return 0;

}

void swap(int *a, int *b)
{
    int temp;
    temp = *b;
    *b = *a;
    *a = temp;
}

void funcao(int vet[], int tamanho)
{
    int i, j;
    for (i = 0; i < tamanho; i++)
    {
        for (j = (i+1); j < tamanho; j++)
        {
            swap(&vet[j], &vet[i]);
        }
    }
}
