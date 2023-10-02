#include <stdio.h>
int main ()
{
    int vet [5];
    int *p;
    int valor;
    p = &vet[0];
    printf("\nDigite o valor: ");
    scanf ("%d", &valor);
    for (p=&vet[0]; vet[4]!= valor; p++)
    {
        *p = valor;
        printf(" %d ", *(p));
    }
    return 0;
}
