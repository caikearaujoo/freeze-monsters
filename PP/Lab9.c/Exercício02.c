#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int *p = NULL, n;
    
    printf ("\nDigite o tamanho do vetor desejado: ");
    scanf("%d", &n);

    p = (int*) calloc(n, sizeof(int));
    if (p == NULL) 
    {
        printf("\nErro de falta de memoria.");
        exit (1);
    }
    for (int i=0; i<n; i++)
    {
        printf("\nDigite um valor para ser armazenado em um vetor: ");
        scanf("%d", &p[i]);
    }
    printf("\n[ ");
    for (int i=0; i<n; i++)
    {
        printf("%d ", *(p+i));
    }
    printf("]");
    
    free (p);

    return 0;
}
