#include<stdio.h>
#include<stdlib.h>
int main () {
float n1;

n1=0;

printf("\nEscreva um numero real:");
scanf("%f", &n1); 

float n2;
n2=n1/5;

printf("\nO quadrado do numero digitado eh: %f", n2);
printf("\n");
system("pause");

return (0);
}
