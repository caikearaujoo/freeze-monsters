#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>

int main ( ) 
{
    FILE *fp = NULL;
    char nome[100], caracter;
    int vogais = 0;

    printf ("Digite o nome do arquivo: ");
    fgets (nome, 100, stdin);
    nome[strcspn(nome, "\n")] = '\0';

    fp = fopen(nome, "r");
    if (fp == NULL)
    {
        printf ("Erro ao abrir o arquivo!!");
        exit(1);
    }

    while ((caracter = fgetc(fp)) != EOF) 
    {
        if ((caracter == 'A') || (caracter == 'a') || (caracter == 'E') || (caracter == 'e') || (caracter == 'I') || (caracter == 'i') || (caracter == 'O') || (caracter == 'o') || (caracter == 'U') || (caracter == 'u'))
        {
            vogais++;
        }
    }

    printf ("O arquivo indicado possui %d vogais.", vogais); 

    fclose (fp);

    return 0;
}
