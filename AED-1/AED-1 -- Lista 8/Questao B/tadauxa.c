#include "encadeia.h"

#include <stdio.h>
#include <stdlib.h>

struct no
{
    aluno valor;
    struct no *prox;
};
typedef struct no no;

struct lista
{
    no *inicio;
};
typedef struct lista lista;

lista *criar ( )
{
    lista *l;
    l = (lista *) malloc (sizeof(lista));
    l->inicio = NULL;

    return l;
}

int listavazia (lista *l)
{
    if (l == NULL)
        return 2;   //lista não alocada

    if (l->inicio == NULL)
        return 0;   //lista vazia

    return 1;       //lista não vazia
}

int inseririnicio (lista *l, aluno it)
{
    if (l == NULL)
        return 2;   //lista não alocada

    no *n = (no *) malloc (sizeof(no));
    n->valor = it;
    n->prox = l->inicio;
    l->inicio = n;

    return 0;
}

int inserirfim(lista *l, aluno it)
{
    if (l == NULL) return 2;

    if (listavazia(l) == 0) return inseririnicio(l,it);

    no *nolista = l->inicio;

    while (nolista->prox != NULL) nolista = nolista->prox;

    no *n = (no*) malloc (sizeof(no));
    n->valor = it;

    n->prox = nolista->prox;

    nolista->prox = n;

    return 0;
}

int inserirposicao(lista *l,aluno it,int pos)
{

    if(l==NULL) return 2;

    if(pos<0) return 3;

    if((listavazia(l)==0)||(pos==0)) return inseririnicio(l,it);

    no *nolista = l->inicio;

    int p = 1;

    while((nolista->prox != NULL)&&(p != pos))
    {
        p++;
        nolista = nolista->prox;
    }

    no *n = (no*)malloc(sizeof(no));

    n->valor = it;

    n->prox = nolista->prox;

    nolista->prox = n;

    return 0;
}

int removerinicio(lista *l)
{
    if(l==NULL) return 2;

    if(listavazia(l)==0) return 1;

    no *nolista = l->inicio;

    l->inicio = nolista->prox;

    free(nolista);

    return 0;
}

int removerfim(lista *l)
{

    if(l==NULL) return 2;

    if(listavazia(l)==0) return 1;

    no *noauxiliar = NULL;

    no *nolista = l->inicio;

    while(nolista->prox != NULL)
    {
        noauxiliar = nolista;
        nolista = nolista->prox;
    }

    if(noauxiliar == NULL) l->inicio = NULL;

    else noauxiliar->prox = NULL;

    free(nolista);

    return 0;
}

int buscaritemchave(lista *l,int chave,aluno *retorno)
{
    if(l==NULL) return 2;

    no *nolista = l->inicio;

    while((nolista!=NULL))
    {
        if((nolista->valor).mat == chave) //suspeito by Amanda Duarte Garcia
        {
            *retorno = nolista->valor;
            return 0;
        }
        nolista = nolista->prox;
    }

    return 1;
}

void limpar(lista *l)
{
    while(listavazia(l)!=0)
    {
        removerinicio(l);
    }
}

void mostrar(lista *l)
{
    if(l!=NULL)
    {
        printf("[");

        no *nolista = l->inicio;

        while(nolista != NULL)
        {
                printf(" {%d",nolista->valor.mat);
                printf("%s, ",nolista->valor.nome);
                printf("%.2f",nolista->valor.n1);
                nolista = nolista->prox;
        }

        printf("]\n");
    }
}

int removerposicao(lista *l,int pos)
{
    if(l == NULL) return 2;

    if(listavazia(l) == 0) return 1;

    if(pos < 0) return 3;

    int i = 0;

    no *noaux = NULL;
    no *nolista = l->inicio;

    while ((nolista-> prox != NULL) && (i != pos))
    {
        noaux = nolista;
        nolista = nolista->prox;
        i++;
    }

    if (noaux == NULL)
    {
        return removerinicio(l);
    }

    else
    {
        noaux->prox = nolista->prox;
    }

    free(nolista);

    return 0;
}

int removeritem(lista *l,aluno it)
{
    if (l == NULL) return 2;

    if(listavazia(l) == 0) return 1;

    no *nolista = l->inicio;

    int i = 0;

    while(nolista != NULL)
    {
        if(nolista->valor.mat == it.mat)
        {
           removerposicao(l, i);
        }

        else i++;

        nolista = nolista->prox;
    }
    return 0;
}

int buscarposicao(lista *l, int posicao, aluno *retorno)
{
    if (l == NULL) return 2;

    if(listavazia(l) == 0) return 1;

    no *nolista = l->inicio;

    int i = 0;

    while(nolista != NULL)
    {
        if(i == posicao)
        {
            *retorno = nolista->valor;
        }
        else i++;

        nolista = nolista->prox;
    }
    return 0;
}

int contemitem(lista *l, aluno it)
{
    if (l == NULL) return 2;

    if(listavazia(l) == 0) return 1;

    no *n = l->inicio;

    while(n != NULL)
    {
        if(n->valor.mat == it.mat)
        {
            return 0;
        }
        n = n->prox;
    }
    return 1;
}

lista *concatenacao (lista *l1, lista *l2)
{
    if ((l1 == NULL) || (l2 == NULL)) return 2;

    if((listavazia(l1) == 0) || (listavazia(l2) == 0)) return 1;

    lista *aux = criar();

    no *n = l1->inicio;

    while(n != NULL)
    {
        inserirfim(aux, n->valor);
        n = n->prox;
    }

    n = l2->inicio;

    while(n != NULL)
    {
        inserirfim(aux, n->valor);
        n = n->prox;
    }
    return aux;
}

int maiornota(lista *l)
{
    if (l == NULL) return 2;

    if(listavazia(l) == 0) return 1;

    no *nolista = l->inicio;
    int i = 0;
    int maior = nolista->valor.n1;

    while (nolista != NULL)
    {
        if (nolista->valor.n1 > maior)
        {
            maior = nolista->valor.n1;
            i = 0;
        }
        nolista = nolista->prox;
        i++;
    }

    nolista = l->inicio;

    int contador = 0;
    while (contador < i)
    {
        nolista = nolista->prox;
        contador++;
    }

    printf("\nO aluno com a maior nota da lista eh: ");
    printf("\nNome: %s", nolista->valor.nome);
    printf("\nMatricula: %d", nolista->valor.mat);
    printf("\nNota: %d\n", nolista->valor.n1);
}
