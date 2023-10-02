#include <stdio.h>
#include <math.h>

int main() {
    float n;

    printf("Digite um numero (digite um valor negativo ou zero para finalizar o codigo): ");
    scanf("%f", &n);

    while(n > 0) {
        float quadrado = pow(n, 2);
        float cubo = pow(n, 3);
        float raiz = sqrt(n);

        printf("\nNumero: %.2f ao quadrado: %.2f, ao cubo: %.2f, e sua raiz quadrada: %.2f\n", n, quadrado, cubo, raiz);

        printf("\nDigite um numero (digite um valor negativo ou zero para finalizar o codigo): ");
        scanf("%f", &n);
    }

    return 0;
}
