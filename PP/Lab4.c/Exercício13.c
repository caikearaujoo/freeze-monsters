#include <stdio.h>

float calculos (float n1, float n2, char operador);
int main() {
    float numero1, numero2;
    char s1nal;
    printf("Digite dois numeros: ");
    scanf("%f %f", &numero1, &numero2);
    printf ("\n Digite um operador algebrico: +, - , * , / : ");
    scanf (" %c", &s1nal);
    float resposta = calculos (numero1, numero2, s1nal);
    printf("\nO resultado da operacao eh: %.2f", resposta);

    return 0;
}
float calculos(float n1, float n2, char sinal) {
    switch (sinal) {
        case '+':
            return n1 + n2;
        case '-':
            return n1 - n2;
        case '*':
            return n1 * n2;
        case '/':
            if (n2 == 0) {
                printf("Erro: divisao por zero nao existe.\n");
                return 0;
            } else {
                return n1 / n2;
            }
        default:
            printf("Erro: operador invalido para esse codigo.\n");
            return 0;
    }
}
