#include <stdio.h>

int main() {
    int opcao;
    float n1, n2, resultado;

    do {
        printf("\nMenu:\n");
        printf("1 - Adicao\n");
        printf("2 - Subtracao\n");
        printf("3 - Multiplicacao\n");
        printf("4 - Divisao\n");
        printf("5 - Saida\n");
        printf("Digite a opcao desejada: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                printf("\nDigite dois numeros para a adicao:\n");
                scanf("%f %f", &n1, &n2);
                resultado = n1 + n2;
                printf("\nResultado: %.2f\n", resultado);
                break;
            case 2:
                printf("\nDigite dois numeros para a subtracao:\n");
                scanf("%f %f", &n1, &n2);
                resultado = n1 - n2;
                printf("\nResultado: %.2f\n", resultado);
                break;
            case 3:
                printf("\nDigite dois numeros para a multiplicacao:\n");
                scanf("%f %f", &n1, &n2);
                resultado = n1 * n2;
                printf("\nResultado: %.2f\n", resultado);
                break;
            case 4:
                printf("\nDigite dois numeros para a divisao:\n");
                scanf("%f %f", &n1, &n2);
                if(n2 == 0) {
                    printf("\nErro: divisao por zero.\n");
                } else {
                    resultado = n1 / n2;
                    printf("\nResultado: %.2f\n", resultado);
                }
                break;
            case 5:
                printf("\nSaindo do programa...\n");
                break;
            default:
                printf("\nOpcao invalida. Tente novamente.\n");
                break;
        }
    } while(opcao != 5);

    return 0;
}
