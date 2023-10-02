#include<stdio.h>
#include<stdlib.h>
int main () {
float M;

M=0;

printf("\nDigite uma area em metros quadrados:");
scanf("%f", &M); 

float H;
H=M*0.0001;

printf("\nA area digitada em hectares eh: %f", H);
printf("\n");
system("pause");

return (0);
}
