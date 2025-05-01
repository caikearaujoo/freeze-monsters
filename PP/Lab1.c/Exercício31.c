#include<stdio.h>
#include<stdlib.h>
int main () {
int n1;

n1=0;

printf("\nDigite um numero inteiro:");
scanf("%d",&n1);

int n2,n3;
n2= n1-1;
n3= n1+1;

printf("\nO antecessor de %d eh %d\n",n1,n2);
printf("\nO sucessor de %d eh %d\n",n1,n3);


printf("\n");
system("pause");

return (0);
}
