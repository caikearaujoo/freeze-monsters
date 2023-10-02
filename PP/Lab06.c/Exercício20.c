#include <stdio.h>

struct dma 
{
    int dia;
    int mes;
    int ano;
};

int calcularDias(struct dma data1, struct dma data2) {
    int dias1 = data1.dia + 30 * data1.mes + 365 * data1.ano;
    int dias2 = data2.dia + 30 * data2.mes + 365 * data2.ano;
    return dias2 - dias1;
}

int main() {
    struct dma data1, data2;

    printf("Digite a primeira data (dia, mês, ano): ");
    scanf("%d %d %d", &data1.dia, &data1.mes, &data1.ano);

    printf("Digite a segunda data (dia, mês, ano): ");
    scanf("%d %d %d", &data2.dia, &data2.mes, &data2.ano);

    int diasDecorridos = calcularDias(data1, data2);

    printf("Número de dias decorridos entre as duas datas: %d\n", diasDecorridos);

    return 0;
}
