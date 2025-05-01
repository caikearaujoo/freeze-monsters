#include<stdio.h>
#include<stdlib.h>
int main () {
float A;

A=0;

printf("\nDigite uma area em acres:");
scanf("%f", &A); 

float M;
M=A*4048.58;

printf("\nA area digitada em metros quadrados eh: %f", M);
printf("\n");
system("pause");

return (0);
}
