#include<stdio.h>
#include<stdlib.h>
int main () {
float F;

F=0;

printf("\nDigite uma temperatura em fahrenheit:");
scanf("%f", &F); 

float C;
C=5.0*(F- 32)/9;

printf("\nA temperatura digitada convertida em graus celsius eh: %f", C);
printf("\n");
system("pause");

return (0);
}
