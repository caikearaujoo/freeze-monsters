#include <stdio.h>
#include <math.h>

int main() {
    int opcao_escolhida=0;
    float valor_1=0;
    float valor_2=0;
    printf("\nEscolha uma das opcoes abaixo:\n");
    printf("\nOpcao(1) Soma\n");
    printf("\nOpcao(2) Subtracao\n");
    printf("\nOpcao(3) Multiplicacao\n");
    printf("\nOpcao(4) Divisao\n");
    scanf("%d", &opcao_escolhida);
    printf("\nDigite um valor para a operacao:");
    scanf("%f", &valor_1);
    printf("\nDigite outro valor para a operacao:");
    scanf("%f", &valor_2);
    if (opcao_escolhida == 1)
    {
        float soma = (valor_1+valor_2);
        printf("\nA resposta eh %.2f", soma);
    }
    else 
    {
        if (opcao_escolhida == 2)
        {
            float subtracao = (valor_1-valor_2);
            printf("\nA resposta eh %.2f", subtracao);
        }
        else {
            if (opcao_escolhida == 3)
            {
                float multiplicacao = (valor_1*valor_2);
                printf("\nA resposta eh %.2f", multiplicacao);
            }
            else{
                if ((opcao_escolhida == 4) && valor_2!=0)
                {
                    float divisao = (valor_1/valor_2);
                    printf("\nA resposta eh %.2f", divisao);
                }
                else {
                    printf("\nA opcao escolhida nao existe ou voce tentou dividir por zero.");
                }
            }
        }
    }

return 0;
}
