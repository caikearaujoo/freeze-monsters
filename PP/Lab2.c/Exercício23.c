#include <stdio.h>
#include <math.h>

int main() {
    int ano=0;
    printf("\nDigite o ano que deseja descobrir se eh bissexto ou nao:");
    scanf("%d", &ano);

if ((ano%400==0) || ((ano%4==0) && (ano%100!=0)))
{
    printf("\nO ano eh bissexto.");
}
else 
{
    printf("\nO ano nao eh bissexto.");
}

return 0;
}
