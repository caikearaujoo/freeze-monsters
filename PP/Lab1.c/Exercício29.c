#include<stdio.h>
#include<stdlib.h>
int main () {
float n1,n2,n3,n4;

n1=0;
n2=0;
n3=0;
n4=0;

printf("\nDigite quatros valores:");
scanf("%f",&n1);
scanf("%f",&n2);
scanf("%f",&n3);
scanf("%f",&n4);

float R;
R=(n1+n2+n3+n4)/4;

printf("\nA media aritmetica dos valores digitados eh: %f", R);
printf("\n");
system("pause");

return (0);
}
