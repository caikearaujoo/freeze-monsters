#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int lotomania[50], usuario[50], aux, i, j, k = 0;
    float porcent;
    int *acertos;
    srand(time(NULL));

    for (i = 0; i < 50; i++)
    {
        lotomania[i] = (rand() % 100) + 1;
        for (j = 0; j < i; j++)
        {
            if (lotomania[i] == lotomania[j])
            {
                i--;
                break;
            }
        }
    }

    printf ("\nDigite os numeros apostados:\n");

    for (i = 0; i < 50; i++)
    {
        printf ("%d. = ", (i + 1));
        scanf("%d", &usuario[i]);
    }

   acertos = (int *) calloc (1, (sizeof(int)));

   if (acertos == NULL)
   {
       printf("\nErro de alocacao de memoria.");
       exit(1);
   }

    printf("\nNumeros do usuario: [");
    for (i = 0; i < 50; i++)
    {
        printf(" %d ", usuario[i]);
    }

    printf("]");

    for (i = 0; i < 50; i++)
    {
        for (j = 0; j < 50; j++)
        {
           if (lotomania[i] == usuario[j])
            {
                acertos[k] = lotomania[i];
                k++;

                acertos = (int *) realloc (acertos, (k * (sizeof(int))));
                if (acertos == NULL)
                {
                    printf("\nErro de alocacao.");
                    exit(1);
                }
            }
        }
    }

    printf("\nNumeros sorteados: [");
    for (i = 0; i < 50; i++)
    {
        printf(" %d ", lotomania[i]);
    }
    if (((i+1) % 5) == 0)
    {
        printf("\n");
    }
    printf("]");

    printf("\nO usuario acertou: [");
    for (i = 0; i < k; i++)
    {
        printf(" %d ", acertos[i]);
    }
    printf("]");

    porcent = (((k * 1.0)/50) * 100);
    printf("\nA porcentagem de acertos eh: %.2f%%", porcent);

    free (acertos);

    return 0;
}
