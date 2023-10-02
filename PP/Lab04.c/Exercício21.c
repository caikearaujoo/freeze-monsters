#include <stdio.h>

void imprimir(int n);

int main() 
{
    int n=0;
    printf("\n Digite quantas linhas deseja: ");
    scanf ("%d", &n);
    imprimir(n);
    return 0;
}

void imprimir(int n) 
{
    int linhas, colunas;
    for (linhas = 1; linhas <= n; linhas++) 
    {
        for (colunas = 1; colunas <= linhas; colunas++) 
        {
            printf("!");
        }
        printf("\n");
    }
}
