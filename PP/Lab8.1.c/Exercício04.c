#include<stdio.h>
int main ()
{
    int n1,n2;
    int *pn1 = &n1;
    int *pn2 = &n2;

    printf("\nDigite o valor do inteiro: ");
    scanf("%d", &n1);
    printf("\nDigite o valor do outro inteiro: ");
    scanf("%d", &n2);

      if (pn1>pn2)
    {
        printf("\nO maior endereco eh %p", pn1);   
    }
    else if (n1<n2)
    {
        printf("\nO maior endereco eh %p", pn2);
    }
    return 0;
}
