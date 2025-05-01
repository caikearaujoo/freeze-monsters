#include<stdio.h>
#include<stdlib.h>
int main () {
float L;

L=0;

printf("\nDigite um volume em litros:");
scanf("%f", &L); 

float M;
M= L/1000;

printf("\nO volume digitado em metros cubicos eh: %f", M);
printf("\n");
system("pause");

return (0);
}
