#include <stdio.h>

int main() {
    int soma = 0;
    int contagem = 0;
    int i = 2;
    
    while (contagem < 50) {
        soma += i;
        i += 2;
        contagem++;
    }
    
    printf("A soma dos 50 primeiros números pares é: %d", soma);
    
    return 0;
}
