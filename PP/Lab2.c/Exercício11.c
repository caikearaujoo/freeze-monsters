#include <stdio.h>

int main() {
    int n=0;

    printf("\nDigite um numero inteiro maior que zero:");
    scanf("%d", &n);
    if (n>0)
    {
        int a1=(n/100);
        int a2=((n%100)/10);
        int a3= ((n%100)%10);
        int a4= (a1+a2+a3);
        printf("\nA soma dos algorismos eh %d.", a4);
    }
    else
    {
        printf("\nNumero invalido.");
    }
return 0;
}
