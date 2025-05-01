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
{printf("\nO numero %d eh maior que %d e a diferença entre eles eh %d", n1,n2);
}
else
{
if (n2>n1)
{
printf("\nO numero %d eh maior que %d", n2,n1);
}
else
{
printf("\Numeros iguais");
}
}
return 0;
}
