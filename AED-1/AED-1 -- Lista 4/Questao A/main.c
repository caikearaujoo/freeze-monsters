#include <stdio.h>
#include <stdlib.h>

void funcao(int n, int vet[], int* maior, float *media);

int main()
{
    int n, *vet, maior = 0;
    float media = 0;

    printf("\nDigite o tamanho do vetor desejado: ");
    scanf("%d", &n);

    vet = (int*) calloc(n, sizeof(int));
    if (vet == NULL)
    {
        printf("\nErro de alocacao de memoria.");
    }

    funcao(n, vet, &maior, &media);

    printf("\nA media eh: %.2f", media);
    printf("\nO maior valor eh: %d", maior);

    free(vet);

    return 0;


}

void funcao(int n, int vet[], int* maior, float *media)
{
    int i;
    float soma;
    for (i = 0; i < n; i++)
    {
        printf("\nDigite um valor: ");
        scanf("%d", &vet[i]);
    }
    *maior = vet[0];
    for (i = 0; i < n; i++)
    {
        if (*maior < vet[i])
        {
            *maior = vet[i];
        }
        soma += vet[i] * (1.0);
    }
    *media = soma / n;

}
