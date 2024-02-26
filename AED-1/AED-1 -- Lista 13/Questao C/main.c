#include "pilha.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    Pilha *p = criar();
    int retorno;
    char str[10];

    setbuf(stdin, NULL);

    printf("\nDigite uma expressao numerica para conferir se seus delimitadores estao corretos : ");

    fgets(str, 10, stdin);
    str[strcspn(str, "\n")] = '\0';

    retorno = confereExpressao(p, str);

    if(retorno == 0) printf("\nA expressao esta bem escrita.");
    if(retorno == 1) printf("\nA expressao esta errada.");

    return 0;
}
