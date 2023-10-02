#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ( ) 
{
    FILE *fp = NULL;
    char nome[100], caracter;
    int consoantes = 0, vogais = 0;

    printf ("Digite o nome do arquivo: "); 
    fgets (nome, 100, stdin);
    nome[strcspn(nome, "\n")] = '\0';

    fp = fopen(nome, "r"); 
    if (fp == NULL) 
    {
        printf ("erro ao abrir o arquivo");
        exit(1);
    }

    while ((caracter = fgetc(fp)) != EOF) 
    {
        if (((caracter >= 65) && (caracter <= 90 )) || ((caracter >= 97) && (caracter <= 122)))
        {
            if ((caracter != 'A') && (caracter != 'a') && (caracter != 'E') && (caracter != 'e') && (caracter != 'I') && (caracter != 'i') && (caracter != 'O') && (caracter != 'o') && (caracter != 'U') && (caracter != 'u'))
            {
                consoantes++;
            }
            else 
            {
                vogais++;
            }
        } 
    }

    printf ("o arquivo possui %d consoantes e %d vogais.", consoantes, vogais);

    fclose (fp);

    return 0;
}
