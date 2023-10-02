#include<stdio.h>
#include<stdlib.h>
int main () {
float J;

J=0;

printf("\nDigite uma distancia em jardas:");
scanf("%f", &J); 

float M;
M=0.91*J;

printf("\nA distancia digitada em metros eh: %f", M);
printf("\n");
system("pause");

return (0);
}
