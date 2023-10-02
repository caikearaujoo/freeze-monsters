#include<stdio.h>
#include<stdlib.h>
int main () {
float C;

C=0;

printf("\nDigite uma temperatura em graus celsius:");
scanf("%f", &C); 

float K;
K= C+273.15;

printf("\nA temperatura digitada convertida em graus Kelvin eh: %f", K);
printf("\n");
system("pause");

return (0);
}
