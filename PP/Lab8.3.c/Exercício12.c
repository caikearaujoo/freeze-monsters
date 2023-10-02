#include <stdio.h>
#include <stdlib.h>

void encontrarminmax(const int *V, int tamanho, int *min, int *max);

int main() {
    int tamanho;
    printf("Digite o tamanho do array: ");
    scanf("%d", &tamanho);

    int *V = (int *) malloc(tamanho * sizeof(int));
    if (V == NULL) {
        printf("Erro de memoria insuficiente.\n");
        exit (1);
    }

    printf("Digite os valores do array:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &V[i]);
    }

    int min, max;
    encontrarminmax(V, tamanho, &min, &max);
    printf("Valor minimo: %d\n", min);
    printf("Valor maximo: %d\n", max);

    return 0;
}

void encontrarminmax(const int *V, int tamanho, int *min, int *max) {
    *min = V[0];
    *max = V[0];

    for (int i = 1; i < tamanho; i++) {
        if (V[i] < *min) {
            *min = V[i];
        }
        if (V[i] > *max) {
            *max = V[i];
        }
    }
}
