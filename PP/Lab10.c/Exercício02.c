#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

int main ( ) 
{
    FILE *fp = NULL;
    char nome[100], caracter;
    int linhas = 0;

    printf ("Digite o nome do arquivo: ");
    setbuf (stdin,NULL);
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
        if (caracter == '\n') 
        {
            linhas++;
        }
    }

    printf ("o arquivo possui %d linhas", (linhas + 1));

    fclose (fp);

    return 0;
}
