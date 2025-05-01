#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED

typedef struct pilha Pilha;

typedef struct no No;

Pilha *criar();

void limpar (Pilha *p);

int push(Pilha *p, char caracter);

int pop(Pilha *p, char *caracter);

void mostrar(Pilha *p);

int consultar(Pilha *p, int *n1);

int tamanho(Pilha *p);

int pilhaVazia(Pilha *p);

int confereExpressao(Pilha *p, char *str);

#endif // PILHA_H_INCLUDED
