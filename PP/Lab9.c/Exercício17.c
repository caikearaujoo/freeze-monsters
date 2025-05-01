#include <stdio.h>
#include <stdlib.h>

int main() {
    int* vetor = (int*)malloc(10 * sizeof(int));
    int tamanho_atual = 10;
    int posicao = 0; 
    
    int numero;
    printf("Digite os numeros (digite 0 para encerrar): \n");
    scanf("%d", &numero);
    
    while (numero != 0) {
        vetor[posicao] = numero;
        posicao++;
        
        if (posicao == tamanho_atual) {
            int novo_tamanho = tamanho_atual + 10;
            int* novo_vetor = (int*)malloc(novo_tamanho * sizeof(int));

            for (int i = 0; i < tamanho_atual; i++) {
                novo_vetor[i] = vetor[i];
            }

            free(vetor);

            vetor = novo_vetor;
            tamanho_atual = novo_tamanho;
        }
        
        scanf("%d", &numero);
    }

    printf("Vetor lido: ");
    for (int i = 0; i < posicao; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    free(vetor);
    
    return 0;
}
