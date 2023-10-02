#include <stdio.h>
#include <math.h>

int main() {
    float x, y, distancia;
    
    printf("Digite a coordenada x: ");
    scanf("%f", &x);
    printf("Digite a coordenada y: ");
    scanf("%f", &y);
    
    distancia = sqrt(x * x + y * y);
    
    printf("A distancia do ponto (%.2f, %.2f) da origem (0, 0) e %f.\n", x, y, distancia);

    return 0;
}
