#include <stdio.h>
#include <math.h>

void calculaHexagono(float l, float* area, float* perimetro);

int main()
{
    float a, p, lado;

    printf("\nDigite o lado do hexágono: ");
    scanf("%f", &lado);

    calculaHexagono(lado, &a, &p);

    printf("\nO perimetro do hexagono eh: %.2f", p);
    printf("\nA area do hexagono eh: %.2f", a);

    return 0;
}

void calculaHexagono(float l, float* area, float* perimetro)
{
    *area = 6 * (((l * l) * sqrt (3)) / 4);
    *perimetro = 6*l;
}
