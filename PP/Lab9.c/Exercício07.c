#include <stdio.h>
#include <stdlib.h>

int main() {
    int *numeros_sorteados, *bilhete_usuario, *numeros_corretos;
    int i, j, acertos = 0;

    numeros_sorteados = (int *)calloc(6, sizeof(int));
    bilhete_usuario = (int *)calloc(6, sizeof(int));

    printf("Digite os seis numeros sorteados na loteria:\n");
    for (i = 0; i < 6; i++) 
    {
        scanf("%d", &numeros_sorteados[i]);
    }

    printf("Digite os 6 números do seu bilhete:\n");
    for (i = 0; i < 6; i++) 
    {
        scanf("%d", &bilhete_usuario[i]);
    }

    for (i = 0; i < 6; i++) 
    {
        for (j = 0; j < 6; j++) 
        {
            if (bilhete_usuario[i] == numeros_sorteados[j]) 
            {
                acertos++;
                break;
            }
        }
    }

    numeros_corretos = (int *)calloc(acertos, sizeof(int));
    int k = 0;

    for (i = 0; i < 6; i++) 
    {
        for (j = 0; j < 6; j++) 
        {
            if (bilhete_usuario[i] == numeros_sorteados[j]) 
            {
                numeros_corretos[k] = bilhete_usuario[i];
                k++;
                break;
            }
        }
    }

    printf("Numeros corretos: ");
    for (i = 0; i < acertos; i++) 
    {
        printf("%d ", *(numeros_corretos+i));
    }
    printf("\n");

    free(numeros_sorteados);
    free(bilhete_usuario);
    free(numeros_corretos);

    return 0;
}
