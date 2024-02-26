#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED

typedef struct pilha Pilha;

typedef struct no No;

typedef struct lista Lista;

Pilha *criar();

int push(Pilha *p, int num);

int pop(Pilha *p, int *num);

void mostrar(Pilha *p);

int tamanho(Pilha *p);

int pilhaVazia(Pilha *p);

int inserirFim(Lista *l, int numero);

int converteBinario(Lista *l, int num);

Lista *criar2();

#endif // PILHA_H_INCLUDED
