#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int *vet;
    int i, conta_zeros=0;

    vet = (int *) calloc(1500, sizeof(int));

    for (i = 0; i < 1500; i++) 
    {
        if (*(vet+i) == 0) 
        {
            conta_zeros++;
        }
    }

    printf("Quantidade de zeros no vetor apos verificacao: %d\n", conta_zeros);

    for (i = 0; i < 1500; i++) 
    {
        *(vet+i) = i;
    }

    printf("Os primeiros 10 elementos sao: \n");
    for (i = 0; i < 10; i++) 
    {
        printf("%d ", (*vet+i));
    }
    printf("\n");

    printf("Ultimos 10 elementos:\n");
    for (i = 1490; i < 1500; i++) 
    {
        printf("%d ", *(vet+i));
    }
    printf("\n");

    free(vet);

    return 0;
}
