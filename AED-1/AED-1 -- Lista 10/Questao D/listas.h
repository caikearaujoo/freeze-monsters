#ifndef LISTAS_H_INCLUDED
#define LISTAS_H_INCLUDED

typedef struct aluno
{
    char nome[30];
    int mat;
    float nota;
}aluno;

typedef struct lista lista;

typedef struct No No;

lista *criar();

int listavazia(lista *l);

int cadastraraluno(lista *l, aluno it);

int removeraluno(lista *l, int matricula);

void listarcadastrados(lista *l);

int maiornota(lista *l, aluno *a);

void limparlista(lista *l);

int trocaposicao(lista *l, int pos1, int pos2);

#endif // LISTAS_H_INCLUDED
