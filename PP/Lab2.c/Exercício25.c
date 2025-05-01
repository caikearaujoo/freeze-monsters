#include <stdio.h>
#include <math.h>

int main() {
    float a=0;
    float b=0;
    float c=0;
    printf("\nDigite o valor da variavel a:");
    scanf("%f", &a);
    printf("\nDigite o valor da variavel b:");
    scanf("%f", &b);
    printf("\nDigite o valor da variavel c:");
    scanf("%f", &c);
    if (a==0)
    {
        printf("\nNao eh equacao do segundo grau.");
    }
    float x=0;
    if (((b*b)-(4*a*c))<0)
    {
        printf("\nNao existe raiz real.");
    }
   if (((b*b)-(4*a*c))==0)
   {
    x=(-b/2*a);
    printf("\nRaiz unica: %.2f", x);
   }
   else 
   {
    if (((b*b)-(4*a*c))>0)
    {
        float x1 = ((-b)+((b*b)-(4*a*c)))/2*a;
        float x2 = ((-b)-((b*b)-(4*a*c)))/2*a;
        printf("\nAs raizes sao: %.2f e %.2f", x1, x2);
    }
   }

return 0;
}
