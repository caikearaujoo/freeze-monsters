#include<stdio.h>
#include<stdlib.h>
int main () {
float M;

M=0;

printf("\nDigite uma distancia em milhas:");
scanf("%f", &M); 

float K;
K= M*1.61;

printf("\nA distancia digitada convertida em quilometros eh: %f", K);
printf("\n");
system("pause");

return (0);
}
