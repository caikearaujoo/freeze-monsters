#include <stdio.h>

int main()
{
    int valores[6];
    int *ptr = NULL;
    int i;

    ptr = valores;

    for (i = 0; i < 6; i++)
    {
        printf("Digite o valor de valores[%d]: ", i);
        scanf("%d", &ptr[i]);
    }

    printf("\nValores obtidos:");
    printf("\nVetor: ");
    for (i = 0; i < 6; i++)
    {
        printf("%d (%p) ", ptr[i], &ptr[i]);
    }

    return 0;
}
