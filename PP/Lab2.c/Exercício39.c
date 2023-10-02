#include <stdio.h>

int main() {
    float salarioAtual, salarioReajustado;
    int tempoServico, bonus;

    printf("Digite o salário atual do funcionário: R$ ");
    scanf("%f", &salarioAtual);

    printf("Digite o tempo de serviço do funcionário (em anos): ");
    scanf("%d", &tempoServico);

    if (salarioAtual <= 500) {
        salarioReajustado = salarioAtual * 1.25; 
        bonus = 0;
        if (tempoServico >= 1) {
            bonus = 0; 
        }
    } else if (salarioAtual <= 1000) {
        salarioReajustado = salarioAtual * 1.20; 
        if (tempoServico >= 1 && tempoServico <= 3) {
            bonus = 100;
        } else {
            bonus = 0;
        }
    } else if (salarioAtual <= 1500) {
        salarioReajustado = salarioAtual * 1.15; 
        if (tempoServico >= 4 && tempoServico <= 6) {
            bonus = 200;
        } else {
            bonus = 0;
        }
    } else if (salarioAtual <= 2000) {
        salarioReajustado = salarioAtual * 1.10; 
        if (tempoServico >= 7 && tempoServico <= 10) {
            bonus = 300;
        } else {
            bonus = 0;
        }
    } else {
        salarioReajustado = salarioAtual; 
        if (tempoServico > 10) {
            bonus = 500;
        } else {
            bonus = 0;
        }
    }

    printf("O salário reajustado do funcionário é: R$ %.2f\n", salarioReajustado);

    if (bonus > 0) {
        printf("O funcionário receberá um bônus de R$ %d.\n", bonus);
    } else {
        printf("O funcionário não tem direito a nenhum bônus.\n");
    }

    return 0;
}
