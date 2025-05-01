#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
int n1,n2;
printf("\nDigite um numero inteiro");
scanf("%d",&n1);
printf("\nDigite outro numero inteiro");
scanf("%d",&n2);
if (n1>n2)
{
int n3=n1-n2;
printf("\nO numero %d eh maior que %d e a diferença entre eles eh %d", n1,n2,n3);
}
else
{
if (n2>n1)
{
int n4=n2-n1;
printf("\nO numero %d eh maior que %d e a diferença entre eles eh %d", n2,n1,n4);
}
else
{
printf("\nOs numeros sao iguais");
}
}
return 0;
}
