#ifndef LISTAS_H_INCLUDED
#define LISTAS_H_INCLUDED


typedef struct tad
{
	char letra;
	int contagem;
}tad;

typedef struct lista lista;

lista *criar();

void leitura(lista *l);

void busca(lista *l);

void exibe(lista *l);



#endif // LISTAS_H_INCLUDED
