#include <stdio.h>
#include <stdlib.h>

int main()
{
    float base, altura, area;

    do
    {
        printf("\nDigite o comprimento da base do triangulo(comprimento deve ser maior que zero): ");
        scanf("%f", &base);
        printf("\nDigite o comprimento da altura do triangulo(comprimento deve ser maior que zero): ");
        scanf("%f", &altura);
    }while((base <= 0) || (altura <= 0));

    area = (base * altura)/ 2;

    printf("\nA area do triangulo cujas medidas foram informadas eh: %.2f", area);

    return 0;
}
