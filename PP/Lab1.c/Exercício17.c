#include<stdio.h>
#include<stdlib.h>
int main () {
float C;

C=0;

printf("\nDigite um comprimento em centimetros:");
scanf("%f", &C); 

float P;
P= C/2.54;

printf("\nO comprimento digitado em polegadas eh: %f", P);
printf("\n");
system("pause");

return (0);
}
