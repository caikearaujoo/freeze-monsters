#include <stdio.h>

struct Eletrodomestico 
{
    char nome[16];
    float potencia;
    float tempoAtivo;
};

int main() {
    struct Eletrodomestico eletrodomesticos[5];
    int i;
    float consumoTotal = 0.0;

    printf("Digite as informações dos eletrodomésticos:\n");
    for (i = 0; i < 5; i++) 
    {
        printf("Eletrodoméstico %d:\n", i + 1);
        printf("Nome: ");
        scanf("%s", eletrodomesticos[i].nome);
        printf("Potência (em kW): ");
        scanf("%f", &eletrodomesticos[i].potencia);
        printf("Tempo ativo por dia (em horas): ");
        scanf("%f", &eletrodomesticos[i].tempoAtivo);
        printf("\n");
    }

    float tempo;
    printf("Digite o tempo (em dias): ");
    scanf("%f", &tempo);

    for (i = 0; i < 5; i++) 
    {
        consumoTotal += eletrodomesticos[i].potencia * eletrodomesticos[i].tempoAtivo * tempo;
    }

    printf("\nConsumo total na casa: %.2f kW\n", consumoTotal);
    printf("Consumo relativo por eletrodoméstico:\n");
    for (i = 0; i < 5; i++) 
    {
        float consumoRelativo = (eletrodomesticos[i].potencia * eletrodomesticos[i].tempoAtivo * tempo) / consumoTotal * 100.0;
        printf("%s: %.2f%%\n", eletrodomesticos[i].nome, consumoRelativo);
    }

    return 0;
}
