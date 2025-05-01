#include "filaencadeada.h"

#include <stdio.h>
#include <stdlib.h>

int main()
{
    fila *f = criar();

    int num;
    inserir(f, 1);
    inserir(f, 3);

    printf("\nBem vindo ao consultorio !");
    printf("\nA fila de espera atual possui os numeros: ");
    mostrar(f);

    printf("\nDigite um numero diferente dos que ja existem na fila para que seja adicionado a ela: ");
    scanf("%d", &num);
    inserir(f, num);

    printf("\nChamando o proximo da fila... ");
    remover(f, &num);
    printf("\nPaciente de numero %d, entrar no consultorio.\n\n", num);

    printf("\n Aguardando o atendimento...");

    printf("\nO paciente de numero %d ja foi atendido, irei chamar o proximo: ", num);

    printf("\nChamando o proximo da fila... ");
    remover(f, &num);
    printf("\nPaciente de numero %d, entrar no consultorio.\n\n", num);

    printf("\n Aguardando o atendimento...");

    printf("\nO paciente de numero %d ja foi atendido, irei chamar o proximo: ", num);

    printf("\nChamando o proximo da fila... ");
    remover(f, &num);
    printf("\nPaciente de numero %d, entrar no consultorio.\n\n", num);

    printf("\n Aguardando o atendimento...");

    printf("\nO paciente de numero %d ja foi atendido.", num);

    if(fila_vazia(f) == 0) printf("\n\nSem pacientes a serem atendidos. Aguardando o proximo a chegar!!");

    return 0;



}
