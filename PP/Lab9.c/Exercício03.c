#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int *p = NULL, n, pares=0, impares=0;
    
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
    for (int i=0; i<n; i++)
    {
        if (*(p+i) % 2 == 0)
        {
            pares++;
        }
        else 
        {
            impares++;
        }
    }
    printf("\nSao %d numeros pares e %d numeros impares.", pares, impares);
    
    free (p);

    return 0;
}
