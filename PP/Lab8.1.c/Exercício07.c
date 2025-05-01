#include<stdio.h>
int main ()
{
    int n1,n2,n3;
    int *pn1 = &n1;
    int *pn2 = &n2;
    int *pn3 = &n3;

    printf("\nDigite o valor do inteiro: ");
    scanf("%d", &(*pn1));
    printf("\nDigite o valor do outro inteiro: ");
    scanf("%d", &(*pn2));
    printf("\nDigite o valor do outro inteiro: ");
    scanf("%d", &(*pn3));

      if (n1>n2>n3)
      {
        printf("\n%d %d %d");
      }
      else if ( (*pn1 > *pn2) && (*pn2 > *pn3))
      {
        printf("\n%d > %d > %d", *pn1, *pn2, *pn3);
      }
      else if ((*pn1 > *pn3) && (*pn3 > *pn2))
      {
        printf("\n%d > %d > %d", *pn1, *pn3, *pn2);
      }
      else if ( (*pn2 > *pn1) && (*pn1 > *pn3))
      {
        printf("\n%d > %d > %d", *pn2, *pn1, *pn3);
      }
      else if ( (*pn2 > *pn3) && (*pn3 > *pn1))
      {
        printf("\n%d > %d > %d", *pn2, *pn3, *pn1);
      }
      else if ( (*pn3 > *pn2) && (*pn2 > *pn1))
      {
        printf("\n%d > %d > %d", *pn3, *pn2, *pn1);
      }
      else if ( (*pn3 > *pn1) && (*pn1> *pn2))
      {
        printf("\n%d > %d > %d", *pn3, *pn1, *pn2);
      }
    return 0;
}
