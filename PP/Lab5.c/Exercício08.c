#include <stdio.h>

int main() 
{
    int numeros[10];
    int i, j, eh_repetido;
    printf("Digite 10 numeros diferentes:\n");
    for (i = 0; i < 10; i++) {
        do {
            eh_repetido = 0;
            scanf("%d", &numeros[i]);
            for (j = 0; j < i; j++) 
            {
                if (numeros[i] == numeros[j]) 
                {
                    eh_repetido = 1;
                    printf("Esse numero ja foi digitado. Digite outro numero:\n");
                    break;
                }
            }
        } while (eh_repetido == 1);
    }
    printf("O vetor final, sem repeticoes, eh: ");
    for (i = 0; i < 10; i++) 
    {
        printf("%d ", numeros[i]);
    }
    return 0;
}
