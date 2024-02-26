#include "pilha.h"

#include <stdio.h>
#include <stdlib.h>

int main()
{
    Lista *l = criar2();
    int inteiro;

    printf("\nDigite um numero inteiro: ");
    scanf("%d", &inteiro);

    converteBinario(l, inteiro);
    mostrarLista(l);

    return 0;
}
