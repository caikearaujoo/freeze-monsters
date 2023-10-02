#include <stdio.h>
#include <stdlib.h>

struct data
{
    int dia;
    int mes;
    int ano;
};
typedef struct data data;

void funcao(data jorge);

int main()
{
    data arroz;

    printf("\nDigite uma data: ");
    scanf("%d", &arroz.dia);
    printf("\nDigite um mes: ");
    scanf("%d", &arroz.mes);
    printf("\nDigite um ano: ");
    scanf("%d", &arroz.ano);
    funcao(arroz);

    return 0;

}

void funcao(data jorge)
{

    printf("\nA data digitada eh: %d / %d / %d ", jorge.dia, jorge.mes, jorge.ano);

}
