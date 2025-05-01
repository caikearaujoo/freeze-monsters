#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED

typedef struct pilha Pilha;

typedef struct no No;

Pilha *criar();

void limpar (Pilha *p);

int push(Pilha *p, int num);

int pop(Pilha *p, int *num);

void mostrar(Pilha *p);

int consultar(Pilha *p, int *n1);

int tamanho(Pilha *p);

int pilhaVazia(Pilha *p);

int compara(Pilha *p1, Pilha *p2);

#endif // PILHA_H_INCLUDED
