#include<stdio.h>
#include<stdlib.h>
int main () {
float a,b;

a=0;
b=0;

printf("\nDigite os valores dos catetos de um triangulo:");
scanf("%f",&a);
scanf("%f",&b);

float c= sqrt((a*a)+(b*b));

printf("\nO valor da hipotenusa desse triangulo eh:%f",c);
printf("\n");
system("pause");

return (0);
}
