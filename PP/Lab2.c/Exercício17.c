#include <stdio.h>
#include <math.h>

int main() {
    float base_maior=0;
    float base_menor=0;
    float h=0;
    printf("\nDigite a base maior de um trapezio:");
    scanf("%f", &base_maior);
    printf("\nDigite a base menor de um trapezio:");
    scanf("%f", &base_menor);
     printf("\nDigite a altura de um trapezio:");
    scanf("%f", &h);
    if ((base_maior<=0) || (base_menor<=0))
    {
        printf("\nValores invalidos");
    }
    else {
        float area_trapezio = (((base_maior+base_menor)*h)/2);
        printf("\nA area do trapezio eh %.2f", area_trapezio);
    }

return 0;
}
