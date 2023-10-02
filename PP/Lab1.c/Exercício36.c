#include<stdio.h>
#include<stdlib.h>
int main () {
float h,r;

h=0;
r=0;

printf("\nDigite os valores da altura e raio de um cilindro circular:");
scanf("%f",&h);
scanf("%f",&r);

float pi= 3.141592;
float v= (pi*(r*r)*h);

printf("\nO valor do volume do cilindro eh:%f",v);
printf("\n");
system("pause");

return (0);
}
