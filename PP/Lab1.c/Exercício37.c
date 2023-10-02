#include<stdio.h>
#include<stdlib.h>
int main () {
float v;

v=0;

printf("\nDigite o valor de um produto qualquer:");
scanf("%f",&v);

float d = 0.88*v;

printf("\nO valor produto com 12 por cento de desconto eh:%f",d);
printf("\n");
system("pause");

return (0);
}
