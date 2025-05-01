#include<stdio.h>
#include <math.h>
float pitagoras(float a, float b);
int main ()
{
    float cateto_a, cateto_b;
    printf("\nDigite o tamanho do cateto a: \n");
    scanf ("%f", &cateto_a);
    printf("\nDigite o tamanho do cateto b: \n");
    scanf ("%f", &cateto_b);    
    float resposta = pitagoras (cateto_a, cateto_b);
    
    printf("\nA hipotenusa desse triangulo eh: %.2f", resposta);

return 0;
}
float pitagoras(float a, float b)
{
    float hipotenusa = sqrt ((pow(a,2)+pow(b,2)));
    return hipotenusa;
}
