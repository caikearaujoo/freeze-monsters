#include<stdio.h>
#include <math.h>
float volume (float v, float r);
int main ()
{
    float raio=0;
    float volum3 =0;
    printf("\nDigite o raio da esfera: ");
    scanf("%f", &raio);
    volum3 = volume (0, raio);
    printf("\nO volume da esfera eh %.2f", volum3);

return 0;
}
float volume (float v, float r)
{
    v= (4.0/3.0 * 3.14) * pow (r,3);
    return v;
}
