#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{    
    FILE *fp = NULL, *fp2 = NULL, *fp3 = NULL;
    char str[100], str2[100], caractere;

    printf ("Digite o nome do arquivo 1: ");
    fgets (str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';

    fp = fopen(str, "r");
    if (fp == NULL)
    {
        printf ("\nErro ao abrir o arquivo.");
        exit(1);
    }

    printf ("Digite o nome do arquivo 2: ");
    fgets (str2, 100, stdin);
    str2[strcspn(str2, "\n")] = '\0';

    fp2 = fopen(str2, "r");
    if (fp2 == NULL)
    {
        printf ("\nErro ao criar o arquivo.");
        exit(1);
    }

    fp3 = fopen("arq", "a");
    while ( (caractere = fgetc(fp)) != EOF )
    {
        fprintf (fp3, "%c", caractere);
    }

    while ( (caractere = fgetc(fp2)) != EOF )
    {
        fprintf (fp3, "%c", caractere);
    }

    fclose (fp);
    fclose (fp2);
    fclose (fp3);
    
    return 0;
}
