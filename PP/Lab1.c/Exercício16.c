#include<stdio.h>
#include<stdlib.h>
int main () {
float P;

P=0;

printf("\nDigite um comprimento em polegadas:");
scanf("%f", &P); 

float C;
C= P*2.54;

printf("\nO comprimento digitado em centimetros eh: %f", C);
printf("\n");
system("pause");

return (0);
}
