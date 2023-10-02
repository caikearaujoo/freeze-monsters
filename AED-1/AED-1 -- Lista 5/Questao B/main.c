#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *vet, tamanho, j, numero, opcao = 1, i;

    vet = (int*) calloc(1, sizeof(int));

    if (vet == NULL)
    {
        printf("\nErro.");
        exit(1);
    }

    while(opcao == 1)
    {
        i = 0;
        do
    {
        printf("\nDigite um valor para armazenar em um vetor(Digite -1 para parar): ");
        scanf("%d", &vet[i]);
        if (vet[i] != -1)
        {
            if (vet[i] == vet[i-1])
            {
                continue;
            }
            else
            {
               vet = (int *) realloc (vet, (i + 1));
            i++;
            }
        }
        tamanho = i;
    }while(vet[i] != -1);

    printf("\nVetor digitado sem os valores repetidos consecutivos: [");
    for (i = 0; i < tamanho; i++)
    {
        printf(" %d ", vet[i]);
    }
    printf("]");
    printf("\nO tamanho do vetor eh: %d", tamanho);

    printf("\nGostaria de preencher outro vetor? Digite 1 para sim, qualquer outra coisa para nao: ");
    scanf("%d", &opcao);
    }

    free (vet);

    return 0;
}
