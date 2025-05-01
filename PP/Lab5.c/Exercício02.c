#include <stdio.h>
#include <stdlib.h>

int main()
{
int vet [8];
int soma = 0;
int i=0;
for (i = 0; i<8 ; i++)
{
    printf("\nDigite um valor para armazenar na array: ");
    scanf ("%d", &vet[i]);
}
int i2=0;
int i3=0;
printf("\nEscolha uma posicao do vetor de 0 a 7: ");
scanf ("%d", &i2);
printf("\nEscolha uma posicao do vetor de 0 a 7: ");
scanf ("%d", &i3);
if (((i2<0) || (i2>7)) || ((i3<0) || (i3>7)))
{
    printf("Posicao invalida.");
}
else
{
    soma = vet[i2]+vet[i3];
    printf("\nA soma dos valores dessas posicoes eh: %d", soma);
}
return 0;
}
