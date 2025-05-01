#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void funcao(char string[]);


int main()
{
    char str[400];
    printf("\nDigite uma string de ate 400 caracteres: ");
    setbuf(stdin, NULL);
    fgets(str, 400, stdin);
    str[strcspn(str, "\n")] = '\0';

    funcao(str);

    return 0;

}

void funcao(char string[])
{
    int i, j, k, tamanho, cont;
    char *vet1;
    int *vet2;

    for (i = 0; string[i] != '\0'; i++)
    {
        if ((string[i] >= 66) && (string[i] <= 90))
        {
            string[i] += 32;
        }
    }

       for (i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == ' ')
        {
            for (j = i; string[j] !='\0'; j++)
            {
                string[j] = string[j + 1];
            }
        }
    }

    vet2 = (int*) calloc (26, sizeof(int));

    for (i = 0; string[i] != '\0'; i++)
    {
        cont = 0;
        if (string[i] != ' ')
        {
              for (j = i + 1; string[j] != '\0'; j++)
            {
                if(string[j] == string[i])
                {
                    cont++;
                    for (k = j; string[k] != '\0'; k++)
                    {
                        string[k] = string[k+1];
                    }
                    j--;
                }
            }
        }
        vet2[i] = cont;
    }

    tamanho = strlen(string);

    vet1 = (char*) calloc (tamanho, sizeof(char));

    for (i = 0; string[i] != '\0'; i++)
    {
            vet1[i] = string[i];
    }

    printf("\n[");
    for (i = 0; i < tamanho; i++)
    {
        printf(" %c ", vet1[i]);
    }
    printf("]");

    vet2 = (int *) realloc (vet2, tamanho * sizeof(int));
    printf("\n[");
    for(i = 0; i < tamanho; i++)
    {
        printf(" %d ", vet2[i]);
    }
    printf("]");

    free(vet1);
    free(vet2);
}
