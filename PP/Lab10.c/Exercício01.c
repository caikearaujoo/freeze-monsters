#include <stdio.h>            
#include <stdlib.h>                 

int main ( )
{    
    FILE *fp = NULL;                
    fp = fopen ("arq.txt", "w");

    if (fp == NULL)                 
    {
        printf ("\nErro: abertura do arquivo invalida.");
        exit(1);
    }

    char caracter;                 
    printf ("Digite abaixo quaisquer caracteres que desejar e, caso queira encerrar, digite 0:\n");

    while (1)                       
    {
        scanf (" %c", &caracter);

        if (caracter == '0')
        {
            break;
        }

        fputc (caracter, fp);
    }

    fclose (fp);

    fp = fopen ("arq.txt", "r");
    if (fp == NULL)
    {
        printf ("\nErro: abertura de arquivo invalida.");
        exit(1);
    }

    printf ("\nCaracteres registrados: \n");
    char leitura;
    while ((leitura = fgetc(fp)) != EOF)
    {
        printf ("%c", leitura);
    }

    fclose (fp);

    return 0;
}
