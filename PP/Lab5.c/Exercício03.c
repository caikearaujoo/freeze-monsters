#include <stdio.h>
#include <stdlib.h>

int main()
{
int vet [6];
int soma = 0;
int i=0;
for (i = 0; i<6 ; i++)
{
    printf("\nDigite um valor para armazenar na array: ");
    scanf ("%d", &vet[i]);
}
int j=0;
for (j=5;j>=0;j--)
{
    printf("\n%d", vet[j]);
}
return 0;
}
