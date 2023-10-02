#include <stdio.h>

#define V 5 
#define A 5 

typedef struct 
{
    int origem;
    int destino;
} Voo;

typedef struct 
{
    int codigo;
    int voos_saida;
    int voos_chegada;
} Aeroporto;

int main() 
{
    Voo voos[V];
    Aeroporto aeroportos[A];
    int i;

    printf("Informe os voos:\n");
    for (i = 0; i < V; i++) 
    {
        printf("Voo %d\n", i + 1);
        printf("Código de origem: ");
        scanf("%d", &voos[i].origem);
        printf("Código de destino: ");
        scanf("%d", &voos[i].destino);

        if (voos[i].origem < 0 || voos[i].origem >= A || voos[i].destino < 0 || voos[i].destino >= A) 
        {
            printf("Código de aeroporto inválido!\n");
            i--; 
        }
    }

    for (i = 0; i < A; i++) 
    {
        aeroportos[i].codigo = i;
        aeroportos[i].voos_saida = 0;
        aeroportos[i].voos_chegada = 0;
    }

    for (i = 0; i < V; i++) 
    {
        aeroportos[voos[i].origem].voos_saida++;
        aeroportos[voos[i].destino].voos_chegada++;
    }

    printf("\nRelatório de voos por aeroporto:\n");
    printf("Código\tVoos de Saída\tVoos de Chegada\n");
    for (i = 0; i < A; i++) 
    {
        printf("%d\t%d\t\t%d\n", aeroportos[i].codigo, aeroportos[i].voos_saida, aeroportos[i].voos_chegada);
    }

    return 0;
}
