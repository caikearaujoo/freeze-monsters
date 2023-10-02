#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{    
    FILE *fp = NULL;
    char str[100], caractere, procura[100];
    int i = 0, j = 0, k = 0, w = 0;

    printf ("digite o nome do arquivo: ");
    fgets (str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';

    fp = fopen(str, "r");
    if (fp == NULL)
    {
        printf ("\nErro ao abrir o arquivo.");
        exit(1);
    }

    while (fscanf(fp, "%s", procura) == 1)
    {
            i++;
    }

    fseek (fp, 0, SEEK_SET);

    while ((caractere = fgetc(fp)) != EOF)
    {
        j++;
        if (caractere == '\n')
        {
            k++;
        }
        if (caractere >= 'a' && caractere <= 'z' || caractere >= 'A' && caractere >= 'Z' )
        {
            w++;
        }
    }

    printf("\n O arquivo possui %d caracteres", j);
    printf("\n O arquivo possui %d linhas", k+1);
    printf("\n O arquivo possui %d palavras", i);
    printf("\n O arquivo possui %d letras", w);

    fclose(fp);

    return 0;
}
