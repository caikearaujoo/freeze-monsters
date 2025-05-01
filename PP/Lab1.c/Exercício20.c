#include<stdio.h>
#include<stdlib.h>
int main () {
float Q;

Q=0;

printf("\nDigite uma massa em quilogramas:");
scanf("%f", &Q); 

float L;
L= Q/0.45;

printf("\nA massa digitada em libras eh: %f", L);
printf("\n");
system("pause");

return (0);
}
