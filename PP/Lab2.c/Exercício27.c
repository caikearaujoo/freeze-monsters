#include <stdio.h>
#include <math.h>

int main() {
    int idade=0;
    printf("\nDigite a idade do nadador:");
    scanf("%d", &idade);
    
    if (idade>=18)
    {
        printf("\nSenior");
    }
    else {
    switch (idade)
    {
        case 5:
        printf("\nInfantil A"); break;
        case 6:
        printf("\nInfantil A"); break;
        case 7:
        printf("\nInfantil A"); break;
        case 8:
        printf("\nInfantil B"); break;
        case 9:
        printf("\nInfantil B"); break;
        case 10:
        printf("\nInfantil B"); break;
          case 11:
        printf("\nJuvenil A"); break;
          case 12:
        printf("\nJuvenil A"); break;
          case 13:
        printf("\nJuvenil A"); break;
        case 14:
        printf("\nJuvenil B"); break;
        case 15:
        printf("\nJuvenil B"); break;
        case 16:
        printf("\nJuvenil B"); break;
        case 17:
        printf("\nJuvenil B"); break;
    }
 }


return 0;
}
