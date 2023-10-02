#include <stdio.h>
#include <stdlib.h>

int soma (int N);

int main()
{
    int numero, result;
    printf("\nDigite um numero: ");
    scanf("%d", &numero);

    result = soma(numero);

    printf("\n%d", result);

    return 0;


}

int soma (int N)
{
    int i, soma = 0;

    for (i = 0; i <= N; i++)
    {
        soma += i;
    }

    return soma;
}
