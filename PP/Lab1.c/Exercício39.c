#include<stdio.h>
#include<stdlib.h>
int main () {
float v;

v=780.000;

float p1,p2,p3;
p1=0.46*v;
p2=0.32*v;
p3=0.22*v;

printf("\nSendo o premio de um concurso 780.000 reais, o premio vai ser dividido em:");
printf("\n");
printf("\nO premio do primeiro colocado vai ser:%f reais",p1);
printf("\nO premio do segundo colocado vai ser:%f reais",p2);
printf("\nO premio do terceiro colocado vai ser:%f reais",p3);
printf("\n");
system("pause");

return (0);
}
