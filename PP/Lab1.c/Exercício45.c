#include<stdio.h>
#include<stdlib.h>
int main () {

char letra_maiuscula;
letra_maiuscula=0;

printf("\nInsira uma letra maiuscula para que seja convertida em minuscula:");
printf("\n");
scanf("%c",&letra_maiuscula);

char letra_minuscula = letra_maiuscula + 32;
printf("\nA letra digitada convertida em minuscula eh: %c.", letra_minuscula);

printf("\n");
system("pause");

return (0);
}
