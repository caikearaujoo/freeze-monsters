#ifndef LISTARECURSIVA_H_INCLUDED
#define LISTARECURSIVA_H_INCLUDED

typedef struct no *Lista;

Lista *criar();

int ultimoElemento(Lista *l, int *num);

int inserirInicio(Lista *l, int num);

int somaElementos(Lista *l);

int incrementar(Lista *l);

int removeOcorrencias(Lista *l, int num);

void mostrarReversa(Lista *l);

int inserirFim(Lista *l, int num);

int listaVazia(Lista *l);

#endif // LISTARECURSIVA_H_INCLUDED
