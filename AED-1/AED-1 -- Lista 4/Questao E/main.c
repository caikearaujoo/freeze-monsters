#include <stdio.h>
#include <stdlib.h>

void alocacao(int n, int numero, int** vet);

int main()
{
    int tamanhovet, valor, *vetor, i;

    printf("\nDigite o tamanho do vetor desejado: ");
    scanf("%d", &tamanhovet);

    printf("\nDigite um valor para preencher o vetor: ");
    scanf("%d", &valor);

    alocacao(tamanhovet, valor, &vetor);

    printf("\nVetor: [");
    for (i = 0; i < tamanhovet; i++)
    {
        printf(" %d ", vetor[i]);
    }
    printf("]");

    free(vetor);

    return 0;
}

void alocacao(int n, int numero, int** vet)
{
    int i;

    *vet = (int*) calloc(n, sizeof(int));
    if (*vet == NULL)
    {
        printf("\nErro de alocacao de memoria.");
        return;
    }

    for (i = 0; i < n; i++)
    {
        (*vet)[i] = numero;
    }
}
