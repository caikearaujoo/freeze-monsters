#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ( ) 
{
    FILE *fp = NULL;
    char nome[100], caracter, desejado;
    int qntd = 0;

    printf ("Digite o nome do arquivo: ");
    fgets (nome, 100, stdin);
    nome[strcspn(nome, "\n")] = '\0';

    fp = fopen(nome, "r");
    if (fp == NULL)
    {
        printf ("Erro ao abrir o arquivo!!");
        exit(1);
    }

    printf ("Digite o caracter que deseja procurar: ");
    scanf (" %c", &desejado);


    while ((caracter = fgetc(fp)) != EOF) 
    {
        if (caracter == desejado)
        {
            qntd++;
        } 
    }

    printf ("O caractere '%c' aparece %d vezes no arquivo indicado.", desejado, qntd);

    fclose (fp);

    return 0;
}
