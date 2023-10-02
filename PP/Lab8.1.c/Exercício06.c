#include<stdio.h>
int main ()
{
    int A,B;
    int *pn1 = &A;
    int *pn2 = &B;

    printf("\nDigite o valor do inteiro: ");
    scanf("%d", & (*pn1));
    printf("\nDigite o valor do outro inteiro: ");
    scanf("%d", & (*pn2));

    int soma = (*pn1) + (*pn2);
    int subtracao = (*pn1) - (*pn2);
    int multiplicacao = (*pn1) * (*pn2);
    int divisao = (*pn1) / (*pn2);
    printf ("\nResultado: %d %d %d %d", soma, subtracao, multiplicacao, divisao);
    return 0;
}
