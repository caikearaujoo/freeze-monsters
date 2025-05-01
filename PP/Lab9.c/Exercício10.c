#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tamanho;
    double *vet;
    int i;

    printf("Digite o tamanho do vetor (maior ou igual a 10): ");
    scanf("%d", &tamanho);

    if (tamanho < 10) 
    {
        printf("Tamanho invalido. O tamanho do vetor deve ser maior ou igual a 10.\n");
        exit(1);
    }

    vet = (double*) malloc(tamanho * sizeof(double));

    srand(time(NULL));
    for (i = 0; i < 10; i++) 
    {
        *(vet+i) = (double) (rand() % 101);
    }

    printf("Valores dos 10 primeiros elementos:\n");
    for (i = 0; i < 10; i++) 
    {
        printf("%.2f ", vet[i]);
    }
    printf("\n");

    free(vet);

    return 0;
}
