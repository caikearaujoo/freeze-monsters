#include<stdio.h>
#include<stdlib.h>
int main () {
int n1, n2, n3;

n1=0;
n2=0;
n3=0; 

printf("\nDigite 3 numeros inteiros:");
scanf("%d%d%d", &n1, &n2, &n3); 

int n4;
n4=n1+n2+n3;

printf("\nA soma dos 3 numeros inteiros digitados eh: %d", n4);
printf("\n");
system("pause");

return (0);
}
