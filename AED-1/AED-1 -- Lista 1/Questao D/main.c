#include <stdio.h>

int main ()
{
    float n1, n2, n3, media, precisa;

    printf("\nDigite as 3 notas de suas avaliacoes: ");
    scanf ("%f %f %f", &n1, &n2, &n3);

    media = (n1 + n2 + n3) / 3;
    if ((media >= 0) && (media < 3))
        {
            printf("\nO aluno foi reprovado.");
        }
    else if ((media >= 3) && (media <7))
        {
            printf("\nO aluno ficou de exame final.");
            precisa = 12 - media;
            printf("\nPrecisa tirar %.2f no exame final para ser aprovado.", precisa);
        }
    else if ((media >= 7) && (media <= 10))
        {
            printf("\nO aluno foi aprovado!!");
        }
    else
        {
           printf("\nMedia invalida.");
        }
    return 0;
}

