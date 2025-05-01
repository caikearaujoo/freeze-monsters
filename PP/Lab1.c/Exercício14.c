#include<stdio.h>
#include<stdlib.h>
int main () {
float G;

G=0;

printf("\nDigite um angulo em graus:");
scanf("%f", &G); 

float pi;
pi=3.141592;
float R;
R= G*pi/180;

printf("\nO angulo digitado em radianos eh: %f", R);
printf("\n");
system("pause");

return (0);
}
