#include<stdio.h>
#include<stdlib.h>
int main () {
float v;

v=0;

printf("\nDigite o valor do salario de um funcionario:");
scanf("%f",&v);

float a= 1.25*v;

printf("\nO valor do salario do funcionario com um aumento de 25 por cento eh:%f",a);
printf("\n");
system("pause");

return (0);
}
