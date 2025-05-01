#include "pilha.h"

#include <stdio.h>
#include <stdlib.h>

int main()
{
    Pilha *p1 = criar();
    Pilha *p2 = criar();

    int teste;

    printf("\nVamos comparar as pilhas: ");
    printf("\nA pilha 1 eh: ");

    push(p1, 10);
    push(p1, 20);
    push(p1, 30);

    mostrar(p1);

    printf("\nA pilha 2 eh: ");

    push(p2, 10);
    push(p2, 20);
    push(p2, 30);
    push(p2, 98);

    mostrar(p2);

    teste = compara(p1, p2);

    if(teste == 2) printf("\nNao alocou.");
    if(teste == -1) printf("\nListas diferentes.");
    if(teste == 1) printf("\nListas vazias.");
    if(teste == 0) printf("\nListas iguais.");

    limpar(p1);
    limpar(p2);

    return 0;

}
