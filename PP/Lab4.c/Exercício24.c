#include <stdio.h>

void imprimir_triangulo(int n);

int main() 
{
    int n=0;
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    imprimir_triangulo(n);
    return 0;
}
void imprimir_triangulo(int n) 
{
    int linhas, colunas, espacos;

// N=5
    for (linhas = 1; linhas <= n; linhas++) 
    {
        for (espacos = 1; espacos <= n - linhas; espacos++) 
        {
            printf(" ");
        }
        for (colunas = 1; colunas <= 2 * linhas - 1; colunas++) 
        {
            printf("*");
        }
        printf("\n");
    }
}
