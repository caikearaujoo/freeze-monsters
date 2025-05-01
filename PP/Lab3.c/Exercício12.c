#include <stdio.h>

int main() {
    int num, soma_divisores = 0;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    
    printf("Divisores de %d (exceto ele próprio): ", num);
    
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
            soma_divisores += i;
        }
    }
    
    printf("\nSoma dos divisores de %d: %d", num, soma_divisores);
    
    return 0;
}
