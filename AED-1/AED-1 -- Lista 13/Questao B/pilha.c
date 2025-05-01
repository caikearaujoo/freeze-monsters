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

Pilha *criar()
{
    Pilha *p = (Pilha *) malloc(sizeof(Pilha));

    p->topo = NULL;
    return p;
}

void limpar(Pilha *p)
{
    if (p == NULL) return;
    int num;

    while(pilhaVazia(p) != 0) pop(p, &num);

    free(p);
    p = NULL;
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

int consultar(Pilha *p,int *n1)
{
    if (p == NULL) return 2;

    if(pilhaVazia(p) == 0) return 1;

    No *temp = p->topo;
    *n1 = temp->num;

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

int compara(Pilha *p1, Pilha *p2)
{
    if ((p1 == NULL) || (p2 == NULL)) return 2;

    if ((pilhaVazia(p1) == 0) && (pilhaVazia(p2) == 0)) return 0;

    if(tamanho(p1) != tamanho(p2)) return -1;

    int num1 = 0, num2 = 0;

    while(pilhaVazia(p1) != 0)
    {
        pop(p1, &num1);
        pop(p2, &num2);
        if(num1 != num2) return -1;
    }

    return 0;
}

