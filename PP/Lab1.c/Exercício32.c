#include<stdio.h>
#include<stdlib.h>
int main () {
int n1;

n1=0;

printf("\nDigite um numero inteiro:");
scanf("%d",&n1);

int T = ((n1 * 3)+ 1)+((n1 *2) -1); 

printf("\nA soma do sucessor de seu triplo com o antecessor de seu dobro eh: %d",T);
printf("\n");
system("pause");

return (0);
}
