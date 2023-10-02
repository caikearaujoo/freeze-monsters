#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *vet, i;

    vet = (int*) calloc (5, sizeof(int));
    if (vet == NULL)
    {
        printf("\nErro ao alocar memoria.");
        exit(1);
    }

    for (i = 0; i < 5; i++)
    {
        printf("\nDigite um valor: ");
        scanf("%d", &(*(vet + i)));
    }

    printf("\nVetor: [");
    for (i = 0; i < 5; i++)
    {
        printf(" %d ", *(vet + i));
    }
    printf("]");

    free(vet);

    return 0;
}
