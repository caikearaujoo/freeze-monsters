#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void funcao(char str[], int tamanho, char caracter, int* cont);

int main()
{
    char str[100], caracter;
    int tamanho, cont = 0;

    printf("\nDigite uma string: ");
    setbuf(stdin, NULL);
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';
    tamanho = strlen(str);

    setbuf(stdin, NULL);
    printf("\nDigite um caracter: ");
    scanf("%c", &caracter);

    funcao(str, tamanho, caracter, &cont);

    printf("\nNova string: %s, e o caracter foi repetido %d vezes", str, cont);

    return 0;
}

void funcao(char str[], int tamanho, char caracter, int* cont)
{
    int i;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == caracter)
        {
            str[i] = '*';
            (*cont)++;
        }
    }
}
