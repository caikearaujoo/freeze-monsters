#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int dia, mes, ano;
    const int ANO_ATUAL = 2023;

    printf("Digite a data de nascimento no formato DD MM AAAA: ");
    scanf("%d %d %d", &dia, &mes, &ano);

    if (ano > ANO_ATUAL) {
        printf("Data invalida: ano maior que o ano atual.\n");
        return 0;
    }

    if (mes < 1 || mes > 12) {
        printf("Data invalida: mes invalido.\n");
        return 0;
    }

    switch(mes) {
        case 2:
            if (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0)) {
                if (dia < 1 || dia > 29) {
                    printf("Data invalida: dia invalido para fevereiro em ano bissexto.\n");
                    return 0;
                }
            } else {
                if (dia < 1 || dia > 28) {
                    printf("Data invalida: dia invalido para fevereiro em ano nao bissexto.\n");
                    return 0;
                }
            }
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if (dia < 1 || dia > 30) {
                printf("Data invalida: dia invalido para o mes %d.\n", mes);
                return 0;
            }
            break;
        default:
            if (dia < 1 || dia > 31) {
                printf("Data invalida: dia invalido para o mes %d.\n", mes);
                return 0;
            }
            break;
    }

    printf("Data valida.\n");
    return 0;
}
