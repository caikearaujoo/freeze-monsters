#include <stdio.h>

int main() {
    float preco_antigo, preco_novo, aumento;
    
    printf("Digite o preco antigo do produto: ");
    scanf("%f", &preco_antigo);
    
    if (preco_antigo <= 50) {
        aumento = preco_antigo * 0.05;
    } else if (preco_antigo <= 100) {
        aumento = preco_antigo * 0.1;
    } else {
        aumento = preco_antigo * 0.15;
    }
    
    preco_novo = preco_antigo + aumento;
    
    printf("Preco antigo: R$%.2f\n", preco_antigo);
    printf("Preco novo: R$%.2f\n", preco_novo);
    
    if (preco_novo <= 80) {
        printf("Produto Barato\n");
    } else if (preco_novo <= 120) {
        printf("Produto Normal\n");
    } else if (preco_novo <= 200) {
        printf("Produto Caro\n");
    } else {
        printf("Produto Muito Caro\n");
    }
    
    return 0;
}
