#include <stdio.h>
#include <stdlib.h>

int main()
{
    double vetor[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    char nome[15] = "Carla Faria";
    int i;

    for(i = 0; *(nome + i) != '\0'; i++)
    {
        printf("%c", *(nome + i));
    }

    printf("\n");

    printf("\nVetor: [ ");
    for(i = 0; i < 10; i++)
    {
        printf(" -- %lf -- ", *(vetor + i));
    }
    printf("]");
    return 0;
}
