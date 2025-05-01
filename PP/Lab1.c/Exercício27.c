#include<stdio.h>
#include<stdlib.h>
int main () {
float H;

H=0;

printf("\nDigite uma area em hectares:");
scanf("%f", &H); 

float M;
M = H*10000;

printf("\nA área digitada em metros quadrados eh: %f", M);
printf("\n");
system("pause");

return (0);
}
