#include <stdio.h>

float calcular_media(float nota1, float nota2, float nota3, char tipo);
int main() {
    float nota1, nota2, nota3, media;
    char tipo;

    printf("Digite as tres notas do aluno: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    printf("Digite A para calcular a media aritmetica ou P para media ponderada: ");
    scanf(" %c", &tipo);

    media = calcular_media(nota1, nota2, nota3, tipo);

    if (media >= 0) {
        printf("A media do aluno eh %.2f\n", media);
    }

    return 0;
}
float calcular_media(float n1, float n2, float n3, char tipo) {
    float media;

    if (tipo == 'A') {
        media = (n1 + n2 + n3) / 3;
    } else if (tipo == 'P') {
        media = (n1 * 5 + n2 * 3 + n3 * 2) / 10;
    } else {
        printf("Tipo invalido.\n");
        media = -1;
    }

    return media;
}
