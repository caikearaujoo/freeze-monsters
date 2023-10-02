#include<stdio.h>
#include<stdlib.h>
int main () {
float M;

M=0;

printf("\nDigite um volume em metros cubicos:");
scanf("%f", &M); 

float L;
L= 1000*M;

printf("\nO volume digitado em litros eh: %f", L);
printf("\n");
system("pause");

return (0);
}
