#include <stdio.h>

int main()
{
    int ano1, ano2, calculo1, calculo2;
    printf("\nDigite o seu ano de nascimento: ");
    scanf("%d", &ano1);
    printf("\nDigite o ano atual: ");
    scanf("%d", &ano2);

    calculo1 = ano2 - ano1;
    calculo2 = 2030 - ano1;

    printf("\nDesconsiderando os meses, sua idade atual eh: %d", calculo1);
    printf("\nDesconsiderando os meses, sua idade em 2030 eh: %d", calculo2);

    return 0;
}
