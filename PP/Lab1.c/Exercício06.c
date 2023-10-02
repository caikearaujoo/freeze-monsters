#include<stdio.h>
#include<stdlib.h>
int main () {
float C;

C=0;

printf("\nDigite uma temperatura em graus celsius:");
scanf("%f", &C); 

float F;
F=C*(9.0/5.0)+32;

printf("\nA temperatura digitada convertida em Fahrenheit eh: %f", F);
printf("\n");
system("pause");

return (0);
}
