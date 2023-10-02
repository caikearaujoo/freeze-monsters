#include <stdio.h>

void calc_esfera(float *R, float *area, float *volume);

int main() 
{
    float raio, area, volume;
    float *p1,*p2,*p3;
    p1 = &raio, p2 = &area, p3 = &volume;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    calc_esfera(p1, p2, p3);

    printf("Area da superficie: %.2f\n", area);
    printf("Volume: %.2f\n", volume);

    return 0;
}

void calc_esfera(float *R, float *area, float *volume) 
{
    *area = 4 * 3.14 * (*R) * (*R);
    *volume = (4.0 / 3.0) * 3.14159 * (*R) * (*R) * (*R);
}
