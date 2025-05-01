#ifndef LISTAS_H_INCLUDED
#define LISTAS_H_INCLUDED


typedef struct aluno
{
    int mat;
    char nome[30];
    float n1;
}aluno;

typedef struct lista lista;

void limpar(lista *l);

int tamanho(lista *l);

void mostrar(lista *l);

int listavazia(lista *l);

int listacheia(lista *l);

int inseririnicio(lista *l, aluno it);

int inserirfim(lista *l, aluno it);

int removerinicio(lista *l);

int inserirposicao(lista *l,aluno it,int pos);

int removerfim(lista *l);

int removerposicao(lista *l, int pos);

int removeritem(lista *l, int it);

int buscaritem(lista *l, int chave, aluno *it);

int buscarposicao(lista *l, int pos, int *it);

int removercentral(lista *l);

lista *interseccao(lista *l1, lista *l2);

int inserirfim2(lista *l, aluno it);

#endif // LISTAS_H_INCLUDED
