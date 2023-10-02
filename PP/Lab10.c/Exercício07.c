#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{    
    FILE *fp = NULL, *fp2 = NULL;
    char str[100], caractere;

    printf ("digite o nome do arquivo: ");
    fgets (str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';

    fp = fopen(str, "r");
    if (fp == NULL)
    {
        printf ("\nErro ao abrir o arquivo.");
        exit(1);
    }

    fp2 = fopen("novo.txt", "w");
    if (fp2 == NULL)
    {
        printf ("\nErro ao criar o arquivo");
        exit(1);
    }

    while ( (caractere = fgetc(fp)) != EOF )
    {
        if ((caractere == 'a') || (caractere == 'e') || (caractere == 'i') || (caractere == 'o') || (caractere == 'u'))
        {
            caractere = '*';
        }

        if ((caractere == 'A') || (caractere == 'E') || (caractere == 'I') || (caractere == 'O') || (caractere == 'U'))
        {
            caractere = '*';
        }

        fprintf (fp2, "%c", caractere);
    }

    return 0;
}
