#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include <conio.h>


int main()
{
    int contador;
    for (contador=1;contador<=100;contador++)
    {
        printf("\n%d", contador);
    }
    int contador2 = 0;
    while (contador2<100)
    {
        contador2++;
        printf("\n%d",contador2);
    }
    int contador3=1;
    do
    {
    printf("\n%d", contador3);
    contador3++;
    } while (contador3<101);

return 0;
}
