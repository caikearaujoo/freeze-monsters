#include "pilha.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct no
{
    struct no *prox;
    char c;
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


int push(Pilha *p, char caracter)
{
    if (p == NULL) return 2;

    No *no = (No*) malloc(sizeof(No));

    no->c = caracter;
    no->prox = p->topo;

    p->topo = no;
    return 0;
}

int pop(Pilha *p, char *caracter)
{
    if (p == NULL) return 2;

    if (pilhaVazia(p) == 0) return 1;

    No *temp = p->topo;
    *caracter = temp->c;

    p->topo = temp->prox;
    free(temp);

    return 0;
}



int pilhaVazia(Pilha *p)
{
    if (p == NULL) return 2;

    if(p->topo == NULL) return 0;

    return 1;
}

int confereExpressao(Pilha *p, char *str)
{
    if (p == NULL) return 2;
    int i = 0;
    char caracter;

    while(str[i] != '\0') //roda a string inteira
    {
        if ((str[i] == '(') || (str[i] == '{') || (str[i] == '['))
        {
            push(p, str[i]); //coloca na pilha a "abertura" das expressões
        }

        else
        {
            if(pop(p, &caracter) != 0) return 1; //se a pilha estiver vazia, significa que a expressao nao entrou nela

            if((str[i] == '}') && (caracter != '{')) return 1; //se a posicao da string for fechamento, mas o que estiver no topo da pilha não for a abertura, significa que tá errado.
            if((str[i] == ']') && (caracter != '[')) return 1; //idem
            if((str[i] == ')') && (caracter != '(')) return 1; //idem
        }

        i++;
    }
    if(pop(p, &caracter) != 1) return 1; //se ainda tem coisa na pilha, quer dizer que deu errado, pq a "abertura" nao achou seu fechamento.

    return 0;
}
