#ifndef ENCADEIA_H_INCLUDED
#define ENCADEIA_H_INCLUDED

#define MAX 100

typedef struct aluno
{
    int mat;
    char nome[30];
    float n1;
}aluno;

typedef struct lista lista;

lista *criar();

void limpar(lista *l);

int inseririnicio(lista *l,aluno it);

int inserirfim(lista *l,aluno it);

int inserirposicao(lista *l,aluno it,int pos);

int removerinicio(lista *l);

int removerfim(lista *l);

int removerposicao(lista *l,int pos);

int removeritem(lista *l,aluno it);

int buscaritemchave(lista *l, int chave, struct aluno *retorno);

int buscarposicao(lista *l, int posicao, aluno *retorno);

int listavazia(lista *l);

int listacheia(lista *l);

int tamanho(lista *l);

void mostrar(lista *l);

int contemitem(lista *l, aluno it);

lista *concatenacao (lista *l1, lista *l2);

void maiornota(lista *l);

void removeprimeiros(lista *l, int n);

#endif // ENCADEIA_H_INCLUDED
