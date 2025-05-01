#include <stdio.h>

int formar_triangulo(float a, float b, float c);
void tipo_triangulo(float a, float b, float c);

int main() {
    float a, b, c;

    printf("Digite os tres lados que voce deseja ter no triangulo:\n");
    scanf("%f %f %f", &a, &b, &c);

    if (formar_triangulo(a, b, c)) 
    {
        tipo_triangulo(a, b, c);
    } else 
    {
        printf("Os lados informados nao formam um triangulo, pois fogem da regra.\n");
    }

    return 0;
}
int formar_triangulo(float a, float b, float c) 
{
    if ((a < b + c) && (b < a + c) && (c < a + b)) {
        return 1; 
    } else {
        return 0; 
    }
}
void tipo_triangulo(float a, float b, float c) 
{
    if (a == b && b == c) {
        printf("Equilatero\n");
    } else if (a == b || a == c || b == c) {
        printf("Isosceles\n");
    } else {
        printf("Escaleno\n");
    }
}
