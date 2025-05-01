#include<stdio.h>
#include<stdlib.h>
int main () {

float v,n;
v=0;
n=0;

printf("\nInsira o valor da hora de trabalho em reais de um funcionario e o numero de horas que ele vai trabalhar mensalmente:");
printf("\n");
scanf("%f",&v);
scanf("%f",&n);
float t1 = (v*n)*1.1;

printf("\nO valor a ser pago ao funcionario eh: %f reais.", t1);
printf("\n");
system("pause");

return (0);
}
