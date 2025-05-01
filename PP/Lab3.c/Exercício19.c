#include <stdio.h>

int main() {
    int saque, notas;
    
    printf("Digite o valor do saque: ");
    scanf("%d", &saque);
    
    printf("\nNotas necessarias:\n");
    
    notas = saque / 100;
    saque %= 100;
    printf("%d notas de 100 reais\n", notas);
    
    notas = saque / 50;
    saque %= 50;
    printf("%d notas de 50 reais\n", notas);
    
    notas = saque / 20;
    saque %= 20;
    printf("%d notas de 20 reais\n", notas);
    
    notas = saque / 10;
    saque %= 10;
    printf("%d notas de 10 reais\n", notas);
    
    notas = saque / 5;
    saque %= 5;
    printf("%d notas de 5 reais\n", notas);
    
    notas = saque / 2;
    saque %= 2;
    printf("%d notas de 2 reais\n", notas);
    
    notas = saque / 1;
    printf("%d notas de 1 real\n", notas);
    
    return 0;
}
