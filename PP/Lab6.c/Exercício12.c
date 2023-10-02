#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_NAIPES 4
#define NUM_VALORES 13

typedef struct 
{
    int naipe;
    int valor;
} Carta;

void distribuirCartas(Carta *baralho, Carta *jogador1, Carta *jogador2) 
{
    int numCartas = NUM_NAIPES * NUM_VALORES;
    int cartasPorJogador = 3;

    for (int i = 0; i < numCartas; i++) 
    {
        int j = rand() % numCartas;
        Carta temp = baralho[i];
        baralho[i] = baralho[j];
        baralho[j] = temp;
    }

    for (int i = 0; i < cartasPorJogador; i++) 
    {
        jogador1[i] = baralho[i];
        jogador2[i] = baralho[i + cartasPorJogador];
    }
}

void exibirCartasJogador(Carta *jogador, int numCartas) 
{
    for (int i = 0; i < numCartas; i++) {
        printf("Carta %d: Naipe %d, Valor %d\n", i+1, jogador[i].naipe, jogador[i].valor);
    }
}

int main() 
{
    srand(time(NULL));

    Carta baralho[NUM_NAIPES * NUM_VALORES];
    int index = 0;

    for (int naipe = 0; naipe < NUM_NAIPES; naipe++) 
    {
        for (int valor = 0; valor < NUM_VALORES; valor++) 
        {
            baralho[index].naipe = naipe;
            baralho[index].valor = valor;
            index++;
        }
    }
    Carta jogador1[3];
    Carta jogador2[3];

    distribuirCartas(baralho, jogador1, jogador2);
    printf("Cartas do Jogador 1:\n");
    exibirCartasJogador(jogador1, 3);

    printf("\nCartas do Jogador 2:\n");
    exibirCartasJogador(jogador2, 3);

    return 0;
}
   

