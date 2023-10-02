#include <stdio.h>
#include <stdlib.h>

void quadrado_perfeito (int n1);
int main ()
{    
int n1, resposta;
printf("\nDigite um numero: ");
scanf ("%d", &n1);
quadrado_perfeito(n1);
return 0;
}
void quadrado_perfeito (int n1)
{
    int n2=0;
    float n3;
    n2 = sqrt (n1);
    n3 = sqrt (n1);
    if (n1<=0)
{
    printf("\n Nao eh quadrado perfeito. ");
}
else if (n2==n3)
{
    printf("\n Eh quadrado perfeito");
}
else {
    printf("\n Nao eh quadrado perfeito");
}
}
