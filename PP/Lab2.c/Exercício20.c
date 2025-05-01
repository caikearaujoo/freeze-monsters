#include <stdio.h>
#include <math.h>

int main() {
    float a=0;
    float b=0;
    float c=0;
    printf("\nDigite o lado de um triangulo:");
    scanf("%f", &a);
    printf("\nDigite outro lado de um triangulo:");
    scanf("%f", &b);
    printf("\nDigite outro lado de um triangulo:");
    scanf("%f", &c);
    if (a < b + c && b < a + c && c < a + b)
    {
        printf("\nSao valores validos para os lados de um triangulo.");
    }
    if ((a==b) && (a==c))
    {
        printf("\nO triangulo eh equilatero.");
    }
    else 
    {
        if ((a==b) || (a==c) || (b==c))
        {
        printf("\nO triangulo eh isosceles.");
        }
    else 
    {
        if ((a != b) && (a != c) && (b != c))
        {
            printf("\nO triangulo eh escaleno");
        }
    }
    }
return 0;
}
