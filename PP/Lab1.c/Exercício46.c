#include<stdio.h>
#include<stdlib.h>
int main () {

int n1, d1, d2, d3;
n1=0;

printf("\nInsira um numero positivo de 3 digitos:");
printf("\n");
scanf("%d",&n1);

d1= (n1/100);
d2= (n1%100)/10;
d3= (n1%10);

int d4= (d3*100)+(d2*10)+d1;

printf("\nO numero digitado com os digitos invertidos eh:%d.\n", d4);
printf("\n");
system("pause");

return (0);
}
