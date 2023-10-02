#include <stdio.h>
#include <stdlib.h>

int dobro (int x) 
{
    return x*2;
}
int main ()
{     
int n1, n2;
printf("\nEscreva um numero: ");
scanf("%d", &n1 );
n2 = dobro(n1);
printf("\nO dobro do numero digitado eh %d . ", n2);
return 0;
}
