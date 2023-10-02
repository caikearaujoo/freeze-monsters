#include<stdio.h>
#include <math.h>
float volume (float h, float r);
int main ()
{
    float altura, raio;
    printf("\nDigite a altura: \n");
    scanf ("%f", &altura);
    printf("\nDigite o tamanho o raio: \n");
    scanf ("%f", &raio);    
    float resposta = volume (altura, raio);
    
    printf("\nO volume eh : %.2f", resposta);

return 0;
}
float volume (float h, float r)
{
    float v= 3.141592* r * r * h;
    return v;
}
