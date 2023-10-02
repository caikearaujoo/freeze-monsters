#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{    
    FILE *fp = NULL, *fp2 = NULL;
    char str[100], str2[100], caractere;

    printf ("Digite o nome do arquivo: ");
    fgets (str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';

    fp = fopen(str, "r");
    if (fp == NULL)
    {
        printf ("\nErro ao abrir o arquivo.");
        exit(1);
    }

    printf ("Digite o nome do arquivo que deseja criar: ");
    fgets (str2, 100, stdin);
    str2[strcspn(str2, "\n")] = '\0';

    fp2 = fopen(str2, "w");
    if (fp2 == NULL)
    {
        printf ("\nErro ao criar o arquivo");
        exit(1);
    }

    while ( (caractere = fgetc(fp)) != EOF )
    {
        if (caractere >= 97 && caractere <= 122 )
        {
            caractere -= 32;
        }

        fprintf (fp2, "%c", caractere);
    }

    return 0;
}
