#include<stdio.h>
#include<stdlib.h>
int main () {

int n;
n=0;

printf("\nVisto que um encanador trabalha a 30 reais por dia, digite quantos dias voce gostaria de contratar seus servicos para sua empresa para descobrir o total liquido a ser pago pos o desconto de 8 por cento do imposto de renda:");
printf("\n");
scanf("%d",&n);
float v=((n*30)*0.92);

printf("\nO valor liquido a ser pago ao encanador eh %f reais", v);
printf("\n");
system("pause");

return (0);
}
