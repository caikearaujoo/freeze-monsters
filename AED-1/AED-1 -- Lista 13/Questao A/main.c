#include "pilha.h"

#include <stdio.h>
#include <stdlib.h>

//push(11),push(34),pop,pop,push(23),push(45),pop,push(121),push(22),pop,pop.

int main()
{
   Pilha *p = criar();
   int num;

    push(p, 11);
    mostrar(p);

    push(p, 34);
    mostrar(p);

    pop(p, &num);
    mostrar(p);

    pop(p, &num);
    mostrar(p);

    push(p, 23);
    mostrar(p);

    push(p, 45);
    mostrar(p);

    pop(p, &num);
    mostrar(p);

    push(p, 121);
    mostrar(p);

    push(p, 22);
    mostrar(p);

    pop(p, &num);
    mostrar(p);

    pop(p, &num);
    mostrar(p);

    return 0;
}

