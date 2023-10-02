#include<stdio.h>
#include<stdlib.h>
int main () {
float L;

L=0;

printf("\nDigite uma massa em libras:");
scanf("%f", &L); 

float Q;
Q=L*0.45;

printf("\nA massa digitada em quilogramas eh: %f", Q);
printf("\n");
system("pause");

return (0);
}
