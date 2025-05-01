#include<stdio.h>
#include<stdlib.h>
int main () {

int t1,h,m,srestantes,s;
t1=0;

printf("\nInsira um tempo em segundos:");
printf("\n");
scanf("%d",&t1);

h= t1/3600;
srestantes= t1%3600;
m= srestantes/60;
s= srestantes%60;

printf("\nO numero tempo digitado em horas,minutos e segundos eh:%d horas, %d minutos e %d segundos.\n", h,m,s);
printf("\n");
system("pause");

return (0);
}
