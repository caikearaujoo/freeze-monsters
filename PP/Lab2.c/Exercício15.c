#include <stdio.h>
#include <math.h>

int main() {
    int n=0;
    printf("\nDigite um numero inteiro entre 1 e 7 ");
    scanf("%d", &n);

    if ((n<0) || (n>7))
    {
        printf("\nValor invalido");
    }
    switch(n)
    {
        case 1:
        printf("\nDomingo.");break;
        case 2:
        printf("\nSegunda-feira.");break;
        case 3:
        printf("\nTerça-feira.");break;
        case 4:
        printf("\nQuarta-feira.");break;
        case 5:
        printf("\nQuinta-feira.");break;
        case 6:
        printf("\nSexta-feira.");break;
        case 7:
        printf("\nSabado.");break;
        default:
        printf("\nNumero invalido.");
    }
    

return 0;
}
