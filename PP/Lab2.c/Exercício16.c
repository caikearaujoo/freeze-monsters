#include <stdio.h>
#include <math.h>

int main() {
    int n=0;
    printf("\nDigite um numero inteiro entre 1 e 12 ");
    scanf("%d", &n);

    if ((n<0) || (n>12))
    {
        printf("\nValor invalido");
    }
    switch(n)
    {
        case 1:
        printf("\nJaneiro.");break;
        case 2:
        printf("\nFevereiro.");break;
        case 3:
        printf("\nMarço.");break;
        case 4:
        printf("\nAbril.");break;
        case 5:
        printf("\nMaio.");break;
        case 6:
        printf("\nJunho.");break;
        case 7:
        printf("\nJulho.");break;
        case 8:
        printf("\nAgosto.");break;
        case 9:
        printf("\nSetembro.");break;
        case 10:
        printf("\nOutubro.");break;
        case 11:
        printf("\nNovembro.");break;
        case 12:
        printf("\nDezembro.");break;
        default:
        printf("\nNumero invalido.");
    }
    

return 0;
}
