#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    int matriz_cartela[5][5];
    int n_gerados[100] = {0}; 
    int i, j, n_aleatorio;

    srand(time(NULL)); 

    for (i = 0; i < 5; i++) 
    {
        for (j = 0; j < 5; j++) 
        {
            do 
            {
                n_aleatorio = rand() % 100;
            } while (n_gerados[n_aleatorio] != 0);
            
            n_gerados[n_aleatorio] = 1;
            matriz_cartela[i][j] = n_aleatorio;
        }
    }

    printf("Cartela desejada do Bingo:\n");
    for (i = 0; i < 5; i++) 
    {
        for (j = 0; j < 5; j++) 
        {
            printf("%2d ", matriz_cartela[i][j]);
        }
        printf("\n");
    }

    return 0;
}
