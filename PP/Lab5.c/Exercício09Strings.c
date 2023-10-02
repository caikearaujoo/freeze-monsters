#include <stdio.h>

int main() 
{
    char carros[5][20];
    float consumo[5];

    for (int i = 0; i < 5; i++) {
        printf("Digite o modelo do carro da posicao %d: ", i+1);
        scanf("%s", carros[i]);
        printf("Digite o consumo (km/l) do carro %d: ", i+1);
        scanf("%f", &consumo[i]);
    }

    int mais_economico = 0;
    for (int i = 1; i < 5; i++) 
    {
        if (consumo[i] > consumo[mais_economico]) 
        {
            mais_economico = i;
        }
    }
    printf("O carro mais economico eh o modelo %s com consumo de %.2f km/l\n", carros[mais_economico], consumo[mais_economico]);
    
    for (int i = 0; i < 5; i++) 
    {
        printf("O carro modelo %s consome %.2f litros para percorrer 1000 km\n", carros[i], consumo[i]*1000);
    }


return 0;
}
