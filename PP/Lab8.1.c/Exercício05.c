#include<stdio.h>
int main ()
{
    int A,B;
    int *pn1 = &A;
    int *pn2 = &B;

    printf("\nDigite o valor do inteiro: ");
    scanf("%d", &B);
    printf("\nDigite o valor do outro inteiro: ");
    scanf("%d", &A);

    int resultado = (2*(pn1)) + (2(*pn2));
    printf ("\nResultado: %d", resultado);
    return 0;
}
