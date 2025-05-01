#include<stdio.h>
#include<stdlib.h>
int main () {
float K;

K=0;

printf("\nDigite uma distancia em quilometros:");
scanf("%f", &K); 

float M;
M= K/1.61;

printf("\nA distancia digitada convertida em milhas eh: %f", M);
printf("\n");
system("pause");

return (0);
}
