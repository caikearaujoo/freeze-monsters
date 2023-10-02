#include<stdio.h>
#include<stdlib.h>
int main () {

float sb;
sb=0;

printf("\nInsira o valor do salario base de um funcionario:");
printf("\n");
scanf("%f",&sb);

float st = (sb*1.05)-(sb*0.07);

printf("\nO valor a ser pago ao funcionario eh: %f reais.", st);
printf("\n");
system("pause");

return (0);
}
