#include <stdio.h>
#include <stdlib.h>

int potencia (int x, int y);
int fatorial(int n);

int main()
{
    int x, n, i;
    float e = 0.0;

    printf("\nDigite o valor que euler vai estar elevado: ");
    scanf("%d" ,&x);
    printf("\nDigite o numero de parcelas: ");
    scanf("%d", &n);


    for (i = 0; i <= n; i++)
    {
        e += (potencia(x, i) / (fatorial(i)*(1.0)));
    }

    printf("\ne^%d = %f", x, e);

    return 0;

}

int potencia (int x, int y)
{

    int i, numero = x;

    if (y == 0)
    {
        return 1;
    }

       for (i = 1; i < y; i++)
    {
        numero *= x;
    }
        return numero;
}

int fatorial(int n)
{
    int acc, i;
    acc=  1;
    for (i = n; i > 0; i--)
    {
         acc = acc * i;
    }
    return acc;
}
