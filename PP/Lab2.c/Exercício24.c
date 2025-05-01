#include <stdio.h>
#include <math.h>

int main() {
    int opcao_escolhida=0;
    int valor_1=0;
    float valor_final=0;

    printf("\nEscolha uma das opcoes abaixo:\n");
    printf("\nOpcao(1) MG\n");
    printf("\nOpcao(2) SP\n");
    printf("\nOpcao(3) RJ\n");
    printf("\nOpcao(4) MS\n");
    scanf("%d", &opcao_escolhida);
    printf("\nDigite o valor da venda do produto em reais:");
    scanf("%d", &valor_1);
    switch (opcao_escolhida)
    {
        case 1:
        valor_final= (1.07*valor_1);
        printf("\nO valor somado com o imposto eh %.2f reais", (float)valor_final); break;
         case 2:
        valor_final= (1.12*valor_1);
        printf("\nO valor somado com o imposto eh %.2f reais", (float)valor_final); break;
         case 3:
        valor_final= (1.15*valor_1);
        printf("\nO valor somado com o imposto eh %.2f reais", (float)valor_final); break;
         case 4:
        valor_final= (1.08*valor_1);
        printf("\nO valor somado com o imposto eh %.2f reais", (float)valor_final); break;
        default:
        printf("\nValor invalido.");
    }

return 0;
}
