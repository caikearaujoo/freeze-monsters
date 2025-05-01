#include "filaencadeada.h"

#include <stdio.h>
#include <stdlib.h>

//I(10),I(20),R,I(30),I(45),I(21),R,R.

int main()
{
    Fila *f = criar();

    mostrar(f);

    inserir(f, 10);
    mostrar(f);

    inserir(f, 20);
    mostrar(f);

    remover(f);
    mostrar(f);

    inserir(f, 30);
    mostrar(f);

    inserir(f, 45);
    mostrar(f);

    inserir(f, 21);
    mostrar(f);

    remover(f);
    remover(f);

    return 0;
}
