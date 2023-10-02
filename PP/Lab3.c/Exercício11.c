#include <stdio.h>
int main () 
{
    int numeros=0;
    int n_positivo=0;
    int contagem=0;

    printf ("\nDigite um numero inteiro positivo N:");
    scanf ("%d", &n_positivo);
    for (contagem=0;contagem<=n_positivo;contagem++) 
    {
        printf("\n%d", numeros);
        numeros++;
    }

}
