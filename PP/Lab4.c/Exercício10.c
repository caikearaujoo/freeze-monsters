#include<stdio.h>
#include <math.h>
int comparacao (int n1,int n2);
int main ()
{
    int numero_1,numero_2;
    printf("\nDigite um numero: \n");
    scanf ("%d", &numero_1);
    printf("\nDigite outro numero: \n");
    scanf ("%d", &numero_2);    
    float resposta = comparacao (numero_1, numero_2);

return 0;
}
int comparacao (int n1, int n2)
{
    if (n1>n2)
    {
        printf("\n %d eh maior.", n1);
    }
    else if (n1<n2)
    {
        printf ("\n %d eh maior.", n2);
    }
    else 
    {
        printf ("\nValores iguais.");
    }
}
