#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{    
    FILE *fp = NULL;
    char str[100], caractere, procura[100], palavras [100];
    int i = 0;

    printf ("digite o nome do arquivo: ");
    fgets (str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';

    fp = fopen(str, "r");
    if (fp == NULL)
    {
        printf ("\nErro ao abrir o arquivo.");
        exit(1);
    }

    printf("\nDigite a palavra que quer buscar: ");
    fgets (procura, 100, stdin);
    procura[strcspn(procura, "\n")] = '\0';

    while (fscanf(fp, "%s", procura) == 1)
    {
        if(strcmp(palavras, procura) == 0)
        {
            i++;
        }
    }

    printf("\nA palavra %s aparece %d vezes no arquivo digitado", procura, i);

    fclose (fp);
    return 0;
}
