#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, soma = 0, qntd = 0;

    do
    {
        printf("\nDigite um valor:(Se deseja sair, digite 10)\n");
        scanf("%d", &n);
        if ( n > 10 )
        {
            soma += n;
        }
        else if ( n < 10)
        {
            qntd++;
        }
    }while (n != 10);

    printf("\nA soma dos numeros maiores que 10 eh %d e a quantidade de numeros menores que 10 eh %d", soma, qntd);

    return 0;
}
