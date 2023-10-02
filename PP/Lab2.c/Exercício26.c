#include <stdio.h>
#include <math.h>

int main() {
    float distancia=0;
    float litros=0;
    printf("\nDigite a distancai em km do percurso:");
    scanf("%f", &distancia);
    printf("\nDigite quantos litros de gasolina foram consumidos:");
    scanf("%f", &litros);
    float consumo=(distancia/litros);
    if(consumo<8)
    {
        printf("\nVenda o carro!");
    }
    else 
    {
        if ((consumo>=8) && (consumo<=14))
        {
            printf("\nEconomico!");
        }
        else 
        {
            if (consumo>14)
            {
                printf("\nSuper economico!");
            }
        }
    }

return 0;
}
