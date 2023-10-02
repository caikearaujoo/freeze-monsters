#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
float n1;
n1=0;
printf("\nDigite um numero");
scanf("%f",&n1);
if(n1>0)
{
 float n2=pow(n1,2);
 float n3=sqrt(n1);
  printf("O numero digitado ao quadrado eh %0.2f e sua raiz quadrada eh %0.2f e", n2,n3);
}
else{
printf("O numero eh invalido");
}
return 0;
}
