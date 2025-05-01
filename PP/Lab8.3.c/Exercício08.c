#include <stdio.h>
#include <stdlib.h>
int numerosnegativos(float *vet, int n);

int main()
{
    int n, i;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    
    float *p = (float*) malloc(n * sizeof(float));
    if (p == NULL)
    {
        printf("Erro de memoria insuficiente.");
        exit (1);
    }
    
    for (i = 0; i < n; i++)
    {
        printf("Digite o valor da posicao %d: ", i);
        scanf("%f", &p[i]);
    }

    int qntdnegativos = numerosnegativos(p, n);
    printf("Quantidade de numeros negativos: %d\n", qntdnegativos);

    return 0;
}

int numerosnegativos(float *vet, int n)
{
    int i, count = 0;
    for (i = 0; i < n; i++)
    {
        if (vet[i] < 0)
        {
            count++;
        }
    }
    return count;
}
