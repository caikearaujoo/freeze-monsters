#include <stdio.h>
#include <time.h>

int main() {
    int idade, ano_atual, ano_nasc;
    
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("Digite o ano atual: ");
    scanf("%d", &ano_atual);
    
    ano_nasc = ano_atual - idade;
    
    printf("Voce nasceu em %d\n", ano_nasc);
    
    return 0;
}
