#include <stdio.h>
#include <stdlib.h>

int verifica (int n1);
int main ()
{    
int n1, resposta;
printf("\nDigite um numero: ");
scanf ("%d", &n1);
verifica (n1);
printf ("\n%d  ", verifica(n1));
return 0;
}
int verifica (int n1)
{
    if (n1<0)
{
    return -1;
}
else if (n1=0)
{
    return 0;
}
else 
{
    return 1;
}
}
