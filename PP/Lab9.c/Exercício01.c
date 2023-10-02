#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int *p = NULL;
    p = (int*) calloc(5, sizeof(int));
    if (p == NULL) 
    {
        printf("\nErro de falta de memoria.");
        exit (1);
    }
    for (int i=0; i<5; i++)
    {
        printf("\nDigite um valor para ser armazenado em um vetor: ");
        scanf("%d", &p[i]);
    }
    printf("\n[ ");
    for (int i=0; i<5; i++)
    {
        printf("%d ", *(p+i));
    }
    printf("]");
    
    free (p);

    return 0;
}
