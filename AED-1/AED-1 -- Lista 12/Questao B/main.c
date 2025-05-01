#include "filaencadeada.h"

#include <stdio.h>
#include <stdlib.h>

int main()
{
    Fila *f1 = criar();
    Fila *f2 = criar();

    inserir(f1, 10);
    inserir(f1, 10);
    inserir(f1, 10);

    inserir(f2, 20);
    inserir(f2, 20);
    inserir(f2, 20);

    printf("\nLista 1: ");
    mostrar(f1);

    printf("\nLista 2: ");
    mostrar(f2);

    printf("\nINTERSECCAO DE LISTAS:" );

    Fila *f3 = intercalar(f1, f2);
    mostrar(f3);

    return 0;
}
