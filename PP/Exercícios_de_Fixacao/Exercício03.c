#include <stdio.h> 

int main ()
{
    int vet [10], i;

    for (i = 0; i < 10; i++)
    {
        printf("\nDigite um valor para a posicao %d do vetor: ", i);
        scanf("%d", &*(vet+i));
    }

    printf("\n[");
    for (i = 9; i >= 0; i--)
    {
        printf(" %d ", *(vet+i)); 
    }
    printf("]");

    return 0;
}
