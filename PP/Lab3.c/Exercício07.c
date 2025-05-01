#include <stdio.h>
#include <stdlib.h>


int main()
{
float media=0;
int qntd=0;
int valor=0;
int soma=0;
while (qntd<10)
    {
    printf("\nDigite um numero inteiro positivo:\n");
    scanf("%d", &valor);
    if (valor>=0) 
    {
    qntd++;
    soma += valor;
    }
    else 
    { 
        continue;
    }
    }
    media = soma/(qntd);
printf("\nA media dos valores positivos eh: %f",media);
return 0;
}

