#include<stdio.h>
#include<stdlib.h>
int main () {

float vt;
vt=0;

printf("\nInsira um valor total como base para decidir a melhor opcao de pagamento:");
printf("\n");
scanf("%f",&vt);

float v1 = (0.9*vt);
float v2 = (vt/3);
float v3 =(0.9*vt)*0.05;
float v4 =(0.05*vt);
float v5 =(vt/3)*0.05;

printf("\nO valor total a pagar com 10 por cento de desconto eh: %f reais.", v1);
printf("\nO valor de cada parcela, caso seja parcelado em 3x sem juros, vai ser %f reais.:", v2);
printf("\nSe a venda for a vista, a comissao vai ser: %f reais.", v3);
printf("\nA comissao de uma parcela vai ser: %f reais e a comissao do valor total das tres parcelas vai ser: %f reais.", v5, v4);
printf("\n");
system("pause");

return (0);
}
