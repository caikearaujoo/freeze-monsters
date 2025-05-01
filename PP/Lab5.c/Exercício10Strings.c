#include <stdio.h>

int main() {
    char nome[50];
    float valor, valor_vista;

    printf("Digite o nome da mercadoria: ");
    scanf("%s", nome);

    printf("Digite o valor da mercadoria: ");
    scanf("%f", &valor);

    valor_vista = valor * 0.9;

    printf("\nNome da mercadoria: %s", nome);
    printf("\nValor total: R$ %.2f", valor);
    printf("\nValor do desconto: R$ %.2f", valor * 0.1);
    printf("\nValor a ser pago a vista: R$ %.2f\n", valor_vista);

    return 0;
}
