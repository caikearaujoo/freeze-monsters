#include <stdio.h>

int main() 
{
    int numeros[6];
    int i, qtd_impares = 0, soma_pares = 0;
    printf("Digite 6 numeros inteiros:\n");
    for (i = 0; i < 6; i++) {
        scanf("%d", &numeros[i]);
        if (numeros[i] % 2 == 0) {
            printf("%d eh par\n", numeros[i]);
            soma_pares += numeros[i];
        } else {
            printf("%d eh impar\n", numeros[i]);
            qtd_impares++;
        }
    }
    printf("A soma dos numeros pares eh: %d\n", soma_pares);
    printf("A quantidade de numeros impares eh: %d\n", qtd_impares);
    return 0;
}
