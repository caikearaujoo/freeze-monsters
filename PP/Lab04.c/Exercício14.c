#include <stdio.h>

void calcular_consumo(float distancia, float litros);

int main() {
    float distancia, litros;

    printf("Digite a distancia percorrida em km: ");
    scanf("%f", &distancia);

    printf("Digite quantos litros foram consumidos: ");
    scanf("%f", &litros);

    calcular_consumo(distancia, litros);

    return 0;
}
void calcular_consumo(float distancia, float litros) 
{
    float consumo = distancia / litros;

    printf("Consumo: %.2f Km/l\n", consumo);

    if (consumo < 8.0) {
        printf("Venda o carro!\n");
    } else if (consumo >= 8.0 && consumo <= 14.0) {
        printf("Economico!\n");
    } else {
        printf("Super economico!\n");
    }
}
