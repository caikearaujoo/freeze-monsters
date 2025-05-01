#ifndef COMPANHIAAEREA_H_INCLUDED
#define COMPANHIAAEREA_H_INCLUDED

typedef struct no_cidade
{
    char sigla[4];
    char nome[100];
    struct cidade* prox;

} no_cidade;

typedef struct no_rota
{
    char origem[4];
    char destino[4];
    float preco;
    struct no_rota* prox;

} no_rota;

typedef struct companhiaAerea
{
    no_cidade* cidades;
    no_rota* rotas;
} companhiaAerea;

void adicionarCidade(companhiaAerea* companhia, char* sigla, char* nome);

void adicionarRota(companhiaAerea* companhia, char* origem, char* destino, float preco);

void maisBarata(companhiaAerea* companhia);

void maisCara(companhiaAerea* companhia);

float preco(companhiaAerea* companhia, char* origem, char* destino);

#endif // COMPANHIAAEREA_H_INCLUDED
