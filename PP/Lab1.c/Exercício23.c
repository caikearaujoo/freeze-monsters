#include<stdio.h>
#include<stdlib.h>
int main () {
float M;

M=0;

printf("\nDigite uma distancia em metros:");
scanf("%f", &M); 

float J;
J=M/0.91;

printf("\nA distancia digitada em jardas eh: %f", J);
printf("\n");
system("pause");

return (0);
}
