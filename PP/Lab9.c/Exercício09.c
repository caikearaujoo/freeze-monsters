#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int *vet = NULL;
    int num;
    int tamanho = 0;
    int i;

    do 
    {
        printf("\nDigite um numero (digite valor negativo para parar): ");
        scanf("%d", &num);

        if (num >= 0) 
        {
            tamanho++;
            vet = (int *) realloc(vet, tamanho * sizeof(int));
            vet[tamanho-1] = num;
        }
    } while (num >= 0);

    printf("Vetor lido:\n");
    for (i = 0; i < tamanho; i++) 
    {
        printf("%d ", *(vet+1));
    }
    printf("\n");

    free(vet);

    return 0;
}
