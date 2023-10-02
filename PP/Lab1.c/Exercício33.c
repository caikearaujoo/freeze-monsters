#include<stdio.h>
#include<stdlib.h>
int main () {
float l;

l=0;

printf("\nDigite o comprimento do lado de um quadrado:");
scanf("%f",&l);

float A= (l*l);

printf("\nA área do quadrado eh: %f metros quadrados",A);
printf("\n");
system("pause");

return (0);
}
