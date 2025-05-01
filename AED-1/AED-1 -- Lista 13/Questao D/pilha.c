#include "pilha.h"

#include <stdio.h>
#include <stdlib.h>

typedef struct no
{
    struct no *prox;
    int num;
}No;

typedef struct pilha
{
    No *topo;
}Pilha;

typedef struct lista
{
    No *fim;

}Lista;

int inserirFim(Lista *l, int numero)
{
    if (l == NULL) return 2;

    No *nolista = (No*) malloc(sizeof(No));
    nolista->num = numero;

    if (l->fim == NULL) {
        nolista->prox = nolista;
        l->fim = nolista;
    } else {
        nolista->prox = l->fim->prox;
        l->fim->prox = nolista;
        l->fim = nolista;
    }

    return 0;
}



Lista *criar2()
{
    Lista *l = (Lista*) malloc(sizeof(Lista));
    l->fim = NULL;

    return l;
}

Pilha *criar()
{
    Pilha *p = (Pilha *) malloc(sizeof(Pilha));

    p->topo = NULL;
    return p;
}



int push(Pilha *p, int num)
{
    if (p == NULL) return 2;

    No *no = (No*) malloc(sizeof(No));

    no->num = num;
    no->prox = p->topo;

    p->topo = no;
    return 0;
}

int pop(Pilha *p, int *num)
{
    if(p == NULL) return 2;

    if(pilhaVazia(p) == 0) return 1;

    No *temp = p->topo;
    *num = temp->num;

    p->topo = temp->prox;
    free(temp);

    return 0;
}

int tamanho(Pilha *p)
{
    if (p == NULL) return -1;

    int ct = 0;
    No *no = p->topo;

    while (no != NULL)
    {
        ct++;
        no = no->prox;
    }

    return ct;
}

int pilhaVazia(Pilha *p)
{
    if (p == NULL) return 2;

    if(p->topo == NULL) return 0;

    return 1;
}

void mostrar(Pilha *p)
{
    if (p != NULL)
    {
        printf("\n[");
        No *no = p->topo;

        while(no != NULL)
        {
            printf(" %d ", no->num);
            no = no->prox;
        }

        printf("]\n");
    }
}

void mostrarLista(Lista *l)
{
    if(l != NULL)
    {
        printf("\n[");
        No *nolista = l->fim->prox;
        do
        {
            printf(" %d ", nolista->num);
            nolista = nolista->prox;
        }while(nolista != l->fim->prox);
    }
    printf("\]");
}

int converteBinario(Lista *l, int num)
{
    if(l == NULL) return 2;

    Pilha *p = criar();

    int resto, i, tam, valor;

    while(num > 0)
    {
        resto = num % 2;
        push(p, resto);
        num = num/2;
    }

    tam = tamanho(p);

    for(i = 0; i < tam; i++)
    {
        pop(p, &valor);
        inserirFim(l, valor);
    }

    return 0;
}


