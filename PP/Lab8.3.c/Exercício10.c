#include <stdio.h>

void somavet(int *array1, int *array2, int *resultado);

int main() 
{
    int array1[5] = {1, 2, 3, 4, 5};
    int array2[5] = {6, 7, 8, 9, 10};
    int resultado[5];

    somavet(array1, array2, resultado);

    printf("Soma dos vetores: ");
    for (int i = 0; i < 5; i++) 
    {
        printf ("\n");
        printf("%d ", resultado[i]);
    }
    return 0;
}

void somavet(int *array1,  int *array2, int *resultado) 
{
    for (int i = 0; i < 5; i++) 
    {
        *(resultado + i) = *(array1 + i) + *(array2 + i);
    }
}
