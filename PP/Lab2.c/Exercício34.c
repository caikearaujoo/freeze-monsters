#include <stdio.h>

int main() {
    float nota;
    int faltas;

    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);

    printf("Digite o numero de faltas do aluno: ");
    scanf("%d", &faltas);

    if (faltas > 20) {
        if (nota >= 9.0 && nota <= 10.0) {
            printf("Conceito B\n");
        } else if (nota >= 7.5 && nota < 9.0) {
            printf("Conceito C\n");
        } else if (nota >= 5.0 && nota < 7.5) {
            printf("Conceito D\n");
        } else if (nota >= 4.0 && nota < 5.0) {
            printf("Conceito E\n");
        } else if (nota >= 0.0 && nota < 4.0) {
            printf("Conceito E\n");
        } else {
            printf("Nota invalida\n");
        }
    } else {
        if (nota >= 9.0 && nota <= 10.0) {
            printf("Conceito A\n");
        } else if (nota >= 7.5 && nota < 9.0) {
            printf("Conceito B\n");
        } else if (nota >= 5.0 && nota < 7.5) {
            printf("Conceito C\n");
        } else if (nota >= 4.0 && nota < 5.0) {
            printf("Conceito D\n");
        } else if (nota >= 0.0 && nota < 4.0) {
            printf("Conceito E\n");
        } else {
            printf("Nota invalida\n");
        }
    }

    return 0;
}
