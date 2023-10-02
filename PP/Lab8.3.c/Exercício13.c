#include <stdio.h>
#include <stdlib.h>

void lernotas(float *nota1, float *nota2);

void calcularmedias(float nota1, float nota2, float *mediasimples, float *mediaponderada);

int main() 
{
    float nota1, nota2;
    float mediasimples, mediaponderada;

    lernotas(&nota1, &nota2);
    calcularmedias(nota1, nota2, &mediasimples, &mediaponderada);

    printf("Media Simples: %.2f\n", mediasimples);
    printf("Media Ponderada: %.2f\n", mediaponderada);

    return 0;
}

void lernotas(float *nota1, float *nota2) 
{
    do {
        printf("Digite a primeira nota: ");
        scanf("%f", nota1);
    } while (*nota1 < 0 || *nota1 > 10);

    do {
        printf("Digite a segunda nota: ");
        scanf("%f", nota2);
    } while (*nota2 < 0 || *nota2 > 10);
}

void calcularmedias(float nota1, float nota2, float *mediasimples, float *mediaponderada) 
{
    *mediasimples = (nota1 + nota2) / 2;
    *mediaponderada = (nota1 + nota2 * 2) / 3;
}
