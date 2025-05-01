#include <stdio.h>
#include <math.h>

struct CoordenadaPolar 
{
    float raio;
    float argumento;
};

struct CoordenadaCartesiana 
{
    float x;
    float y;
};

struct CoordenadaCartesiana converterParaCartesiano(struct CoordenadaPolar polar) 
{
    struct CoordenadaCartesiana cartesiano;
    cartesiano.x = polar.raio * cos(polar.argumento);
    cartesiano.y = polar.raio * sin(polar.argumento);
return cartesiano;
}

int main() 
{
    struct CoordenadaPolar polar;
    struct CoordenadaCartesiana cartesiano;

    printf("Digite as coordenadas polares:\n");
    printf("Raio: ");
    scanf("%f", &polar.raio);
    printf("Argumento (em radianos): ");
    scanf("%f", &polar.argumento);

    cartesiano = converterParaCartesiano(polar);

    printf("\nCoordenadas cartesianas:\n");
    printf("x: %.2f\n", cartesiano.x);
    printf("y: %.2f\n", cartesiano.y);

    return 0;
}
