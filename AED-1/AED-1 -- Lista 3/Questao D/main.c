#include <stdio.h>
#include <stdlib.h>

int funcao(int a, int b, int*quociente, int*resto);

int main()
{
    int n1, n2, quociente, resto, retorno;

    printf("\nDigite dois valores: ");
    scanf("%d %d", &n1, &n2);

    retorno = funcao(n1, n2, &quociente, &resto);

    if(retorno == -1)
    {
        printf("\nImpossivel dividir por zero.");
        exit(1);
    }

    else if (retorno == 0)
    {
        printf("\nO quociente eh: %d", quociente);
        printf("\nO resto eh: %d", resto);
        exit(1);
    }

    return 0;
}

int funcao(int a, int b, int*quociente, int*resto)
{
    *quociente = a / b;
    *resto = a % b ;

        if (b == 0)
    {
        return -1;
    }

        if (b != 0)
    {
        return 0;
    }
}
