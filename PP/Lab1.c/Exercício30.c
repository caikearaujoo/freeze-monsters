#include<stdio.h>
#include<stdlib.h>
int main () {
float r,c;

r=0;
c=0;

printf("\nDigite um valor em real e a cotacao do real para dolar:");
scanf("%f",&r);
scanf("%f",&c);

float T;
T= r/c;

printf("\nO valor em real convertido para dolar eh: %f",T);
printf("\n");
system("pause");

return (0);
}
