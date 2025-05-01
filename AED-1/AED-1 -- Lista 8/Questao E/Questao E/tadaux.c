#include "companhiaaerea.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void adicionarCidade(companhiaAerea* companhia, char* sigla, char* nome)
{
    no_cidade* novaCidade = (no_cidade*)malloc(sizeof(no_cidade));

    strcpy(novaCidade->sigla, sigla);

    strcpy(novaCidade->nome, nome);

    novaCidade->prox = companhia->cidades;

    companhia->cidades = novaCidade;
}

void adicionarRota(companhiaAerea* companhia, char* origem, char* destino, float preco)
{
    no_rota* novaRota = (no_rota*)malloc(sizeof(no_rota));

    strcpy(novaRota->origem, origem);

    strcpy(novaRota->destino, destino);

    novaRota->preco = preco;

    novaRota->prox = companhia->rotas;

    companhia->rotas = novaRota;
}

void maisBarata(companhiaAerea* companhia)
{
    no_rota* rota = companhia->rotas;
    if (rota == NULL)
    {
        printf("Nenhuma rota cadastrada.\n");
        return;
    }

    float menorPreco = rota->preco;

    char inicioBarata[4], fimBarata[4];

    strcpy(inicioBarata, rota->origem);

    strcpy(fimBarata, rota->destino);

    while (rota != NULL)
    {
        if (rota->preco < menorPreco)
        {
            menorPreco = rota->preco;

            strcpy(inicioBarata, rota->origem);
            strcpy(fimBarata, rota->destino);

        }
        rota = rota->prox;
    }

    printf("A rota mais barata é de %s para %s com preco %.2f.\n", inicioBarata, fimBarata, menorPreco);
}

void maisCara(companhiaAerea* companhia)
{
    no_rota* rota = companhia->rotas;
    if (rota == NULL)
    {
        printf("Nenhuma rota cadastrada.\n");
        return;
    }

    float maiorPreco = rota->preco;

    char inicioCara[4], fimCara[4];

    strcpy(inicioCara, rota->origem);
    strcpy(fimCara, rota->destino);

    while (rota != NULL)
    {
        if (rota->preco > maiorPreco) {
            maiorPreco = rota->preco;
            strcpy(inicioCara, rota->origem);
            strcpy(fimCara, rota->destino);
        }
        rota = rota->prox;
    }

    printf("A rota mais cara é de %s para %s com preco %.2f.\n", inicioCara, fimCara, maiorPreco);
}

float consultarPreco(companhiaAerea* companhia, char* origem, char* destino)
{
    no_rota* rota = companhia->rotas;
    while (rota != NULL)
    {
        if (strcmp(rota->origem, origem) == 0 && strcmp(rota->destino, destino) == 0)
        {
            return rota->preco;
        }
        rota = rota->prox;
    }
    return 1.0;
}
