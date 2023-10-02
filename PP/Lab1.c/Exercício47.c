#include<stdio.h>
#include<stdlib.h>
int main () {

int n1, d1, d2, d3, d4;
n1 = 0;

printf("\nInsira um numero de 4 digitos:");
printf("\n");
scanf("%d",&n1);

d1= n1/1000;
d2= (n1%1000)/100;
d3= (n1%100)/10;
d4= (n1%10);

printf("\nCada digito do numero digitado em uma linha eh:.\n");
printf("%d\n", d1);
printf("%d\n", d2);
printf("%d\n", d3);
printf("%d\n", d4);

printf("\n");
system("pause");

return (0);
}
