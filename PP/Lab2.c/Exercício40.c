#include <stdio.h>

int main() {
    float custo_fabrica, custo_consumidor, comissao, impostos;

    printf("Digite o custo de fábrica do carro: ");
    scanf("%f", &custo_fabrica);

    if (custo_fabrica <= 12000) {
        comissao = custo_fabrica * 0.05;
        impostos = 0;
    }
    else if (custo_fabrica > 12000 && custo_fabrica <= 25000) {
        comissao = custo_fabrica * 0.10;
        impostos = custo_fabrica * 0.15;
    }
    else {
        comissao = custo_fabrica * 0.15;
        impostos = custo_fabrica * 0.20;
    }

    custo_consumidor = custo_fabrica + comissao + impostos;

    printf("O custo ao consumidor é: %.2f", custo_consumidor);

    return 0;
}
