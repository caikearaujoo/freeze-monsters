#include<stdio.h>
#include<stdlib.h>
int main () {
float K;

K=0;

printf("\nDigite uma velocidade em km/h:");
scanf("%f", &K); 

float M;
M= K/3.6;

printf("\nA velocidade digitada convertida em metros por segundo eh: %f", M);
printf("\n");
system("pause");

return (0);
}
