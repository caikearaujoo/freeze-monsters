#include<stdio.h>
#include<stdlib.h>
int main () {

float alturadegrau, alturatotal;
alturadegrau = 0;
alturatotal = 0;

printf("\nDigite a altura de cada degrau e a altura que voce deseja alcancar:");
printf("\n");
scanf("%f", &alturadegrau);
scanf("%f", &alturatotal);

float ndegraus = alturatotal/alturadegrau;

printf("\nO numero de degraus que voce vai precisar subir eh: %f", ndegraus);
printf("\n");
system("pause");

return (0);
}
