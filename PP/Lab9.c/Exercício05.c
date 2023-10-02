#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p = NULL, n;
    int numero, i, count = 0;

    printf ("\nDigite o tamanho do vetor desejado: ");
    scanf("%d", &n);

    p = (int*) calloc(n, sizeof(int));
    if (p == NULL)
    {
        printf("\nErro de falta de memoria.");
        exit (1);
    }
    for (i=0; i<n; i++)
    {
        printf("\nDigite um valor para ser armazenado em um vetor: ");
        scanf("%d", &p[i]);
    }
    printf("\nDigite um numero: ");
    scanf ("%d", &numero);
    for (i=0; i<n; i++)
    {
        if(*(p+i) % numero == 0)
        {
            count++;
        }
    }
    printf("\nExistem %d numeros multiplos de %d no vetor digitado.\n\n", count, numero);
    for (i=0; i<n; i++)
    {
        if (*(p+i) % numero == 0)
        {
            printf("%d\n", *(p+i));
        }
    }
    return 0;
}
