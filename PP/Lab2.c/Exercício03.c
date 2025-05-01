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
 float n2=sqrt(n1);
  printf("A raiz quadrada desse numero eh %0.2f", n2);
}
else{
    float n3=pow(n1,2);
    printf("\nO numero digitado ao quadrado eh %0.2f",  n3);
}
return 0;
}
