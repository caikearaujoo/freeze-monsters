#include<stdio.h>
#include<stdlib.h>
int main () {
float n1,n2,n3;

n1=0;
n2=0;
n3=0;

printf("\nDigite tres valores:");
scanf("%f",&n1);
scanf("%f",&n2);
scanf("%f",&n3);

float R;
R=(n1*n1)+(n2*n2)+(n3*n3);

printf("\nA soma dos quadrados dos valores digitados eh: %f", R);
printf("\n");
system("pause");

return (0);
}
