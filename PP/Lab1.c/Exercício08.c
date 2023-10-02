#include<stdio.h>
#include<stdlib.h>
int main () {
float K;

K=0;

printf("\nDigite uma temperatura em Kelvin:");
scanf("%f", &K); 

float C;
C= K-273.15;

printf("\nA temperatura digitada convertida em graus celsius eh: %f", C);
printf("\n");
system("pause");

return (0);
}
