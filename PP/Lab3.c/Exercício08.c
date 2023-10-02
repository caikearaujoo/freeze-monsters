#include <stdio.h>

int main() {
    int n,qntd;
    int numero=1;
    
    printf("\nDigite um numero inteiro n:");
    scanf("%d", &n);
    printf("\nOs N numeros naturais impares sao:");

    for (qntd=1;qntd<=n;qntd++) 
    {
        printf("\n%d", numero);
        numero+=2;
    }

    
    return 0;
}
