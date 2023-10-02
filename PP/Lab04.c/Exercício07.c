#include<stdio.h>
#include <math.h>
float conversao (float celsius);
int main ()
{
    float celsius;
    printf("\nDigite uma temperatura em graus celsius: \n");
    scanf ("%f", &celsius);
    
    float resposta = conversao (celsius);
    
    printf("\nA temperatura digitada, em fahreinheit eh: %.2f", resposta);

return 0;
}
float conversao (float celsius)
{
    float fahreinheit = celsius * (9.0/5.0) + 32.0;
    return fahreinheit;
}
