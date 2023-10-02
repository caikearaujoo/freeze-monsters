#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include <conio.h>


int main()
{
int qntd=0;
int valor=0;
int soma=0;
while (qntd<10)
    {
    printf("\nDigite um numero inteiro");
    scanf ("%d", &valor);
    qntd ++;
    soma += valor;
}
printf("\nA soma dos valores eh: %d", soma);
return 0;
}
