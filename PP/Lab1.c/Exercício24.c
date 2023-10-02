#include<stdio.h>
#include<stdlib.h>
int main () {
float M;

M=0;

printf("\nDigite uma area em metros quadrados:");
scanf("%f", &M); 

float A;
A=M*0.000247;

printf("\nA area digitada em acres eh: %f", A);
printf("\n");
system("pause");

return (0);
}
