#include <stdio.h>

int main() {
    int dia, mes, ano, bissexto;

    printf("Digite a data no formato dia/mes/ano: ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    bissexto = ((ano % 4 == 0) && (ano % 100 != 0)) || (ano % 400 == 0);

    if (mes < 1 || mes > 12) {
        printf("Data invalida: mes fora do intervalo [1,12]\n");
        return 0;
    }

    switch (mes) {
        case 2:
            if (bissexto && dia > 29) {
                printf("Data invalida: fevereiro tem 29 dias em anos bissextos\n");
                return 0;
            } else if (!bissexto && dia > 28) {
                printf("Data invalida: fevereiro tem 28 dias em anos nao bissextos\n");
                return 0;
            }
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if (dia > 30) {
                printf("Data invalida: mes %d tem no maximo 30 dias\n", mes);
                return 0;
            }
            break;
        default:
            if (dia > 31) {
                printf("Data invalida: mes %d tem no maximo 31 dias\n", mes);
                return 0;
            }
            break;
    }

    printf("Data valida!\n");

    return 0;
}
