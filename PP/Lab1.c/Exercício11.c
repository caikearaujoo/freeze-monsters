#include<stdio.h>
#include<stdlib.h>
int main () {
float M;

M=0;

printf("\nDigite uma velocidade em m/s:");
scanf("%f", &M); 

float K;
K= M*3.6;

printf("\nA velocidade digitada convertida em quilometros por hora eh: %f", K);
printf("\n");
system("pause");

return (0);
}
