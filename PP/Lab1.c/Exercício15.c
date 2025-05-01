#include<stdio.h>
#include<stdlib.h>
int main () {
float R;

R=0;

printf("\nDigite um angulo em radianos:");
scanf("%f", &R); 

float pi;
pi=3.141592;
float G;
G= R*180/pi;

printf("\nO angulo digitado em graus eh: %f", G);
printf("\n");
system("pause");

return (0);
}
