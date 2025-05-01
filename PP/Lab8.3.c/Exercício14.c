#include <stdio.h>
#include <math.h>

void calcular_raizes(float A, float B, float C, float *X1, float *X2) 
{
    float delta = B * B - 4 * A * C;

    if (delta < 0) 
    {
        *X1 = *X2 = 0;
    } 
    else if (delta == 0) 
    {
        *X1 = *X2 = -B / (2 * A);
    } 
    else 
    {
        *X1 = (-B + sqrt(delta)) / (2 * A);
        *X2 = (-B - sqrt(delta)) / (2 * A);
    }
}

int raizes(float A, float B, float C, float *X1, float *X2) 
{
    if (A == 0) 
    {
        return 0;
    }

    calcular_raizes(A, B, C, X1, X2);

    if (*X1 != *X2) 
    {
        return 2;
    } else 
    {
        return 1;
    }
}

int main() 
{
    float A, B, C;
    float X1, X2;

    printf("Digite os coeficientes A, B e C: ");
    scanf("%f %f %f", &A, &B, &C);

    int num_raizes = raizes(A, B, C, &X1, &X2);

    if (num_raizes == 0) 
    {
        printf("Não existem raízes reais.\n");
    } else if (num_raizes == 1) 
    {
        printf("Existe uma raiz real: X = %.2f\n", X1);
    } else 
    {
        printf("Existem duas raízes reais: X1 = %.2f, X2 = %.2f\n", X1, X2);
    }

    return 0;
}
