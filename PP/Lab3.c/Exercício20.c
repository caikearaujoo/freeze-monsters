#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i, j, soma_primos = 2, raiz_quadrada, primo;


    for (i = 3; i <= 2000000; i += 2) 
    {
        primo = 1;
        raiz_quadrada = sqrt(i); 
        for (j = 3; j <= raiz_quadrada; j += 2) { 
            if (i % j == 0) 
            {
                primo = 0;
                break;
            }
        }

        if (primo) {
            soma_primos += i;
        }
    }

    printf("A soma dos primos abaixo de 2 milhoes eh: %d\n\n", soma_primos);

    return 0;
}
