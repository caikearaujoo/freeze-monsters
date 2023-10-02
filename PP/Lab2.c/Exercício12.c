#include <stdio.h>
#include <math.h>

int main() {
    int n=0;

    printf("\nDigite um numero inteiro.");
    scanf("%d", &n);
    if (n>0)
    {
        float n2= log10(n);
        printf("\nO logaritmo do numero eh %.2f.", n2);
    }
    else
    {
        printf("\nNumero invalido.");
    }
return 0;
}
