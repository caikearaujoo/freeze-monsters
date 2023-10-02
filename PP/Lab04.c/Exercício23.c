#include <stdio.h>

void imprimir(int n);

int main() {
    int n;
    printf("Digite um valor para n: ");
    scanf("%d", &n);
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
            printf("*");
        }
        printf("\n");
    }

    for (linhas = n-1; linhas >= 1; linhas--) 
    {
        for (colunas = 1; colunas <= linhas; colunas++) 
        {
            printf("*");
        }
        printf("\n");
    }
}

