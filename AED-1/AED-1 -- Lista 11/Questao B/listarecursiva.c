#include "listarecursiva.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct no
{
    int valor;
    struct no* prox;
}No;

typedef struct no* Lista;

Lista *criar()
{
    Lista *l = (Lista*) malloc(sizeof(Lista));

    *l = NULL;

    return l;
}

int listaVazia(Lista *l)
{
    if (l == NULL) return 2;

    if(*l == NULL) return 0;

    return 1;
}

int inserirFim(Lista *l, int num)
{
    if (l != NULL)
    {
        No *no = (No*)malloc(sizeof(No));
        no->valor = num;
        no->prox = NULL;

        if (*l == NULL)
        {
            *l = no;
        }

        No *nolista = (*l);

        while (nolista->prox != NULL)
        {
            nolista = nolista->prox;
        }

        nolista->prox = no;

        return 0;
    }
}


int ultimoElemento(Lista *l, int *num)
{
    if (l == NULL) return 2;

    No *no = (*l);

    if(no->prox == NULL)
    {
        no->valor = *num;
        return 0;
    }

    return ultimoElemento(&(no->prox), *num);
}

int inserirInicio(Lista *l, int num)
{
    if (l == NULL) return 2;

    No *no = (No*) malloc(sizeof(No));
    no->valor = num;

    no->prox = (*l);
    (*l) = no;

    return 0;
}

int somaElementos(Lista *l)
{
    No *no = (*l);

    if(no->prox == NULL) return no->valor;

    return (no->valor + somaElementos(&(no->prox)));
}

void mostrarReversa(Lista *l)
{
    No *no = *l;

    if (no != NULL)
    {
        mostrarReversa(&(no->prox));
        printf("%d", no->valor);
    }
}


int removeOcorrencias(Lista *l, int num)
{
    if(l != NULL)
    {
        No *no = (*l);

        if(no == NULL) return 0;

        if(no->valor == num) return (1 + removeOcorrencias(&(no->prox), num));

        return removeOcorrencias(&(no->prox), num);
    }
}

int incrementar(Lista *l)
{
    No *n = (*l);

    if(n == NULL) return inserirFim(l,1);

    n->valor++;

    if(n->valor == 2)
    {
        n->valor = 0;
        return incrementar(&(n->prox));
    }

    return 0;
}
