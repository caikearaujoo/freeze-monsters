#include<stdio.h>
#include<stdlib.h>
int main () {
float r;

r=0;

printf("\nDigite o comprimento do raio de um circulo:");
scanf("%f",&r);

float pi = 3.141592;
float A = pi*(r*r);

printf("\nA area do circulo eh: %f metros quadrados",A);
printf("\n");
system("pause");

return (0);
}
