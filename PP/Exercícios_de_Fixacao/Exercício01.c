#include <stdio.h>

void pontuacao (int *pontosA, int *pontosB, int golsA, int golsB);

int main ()
{
    int pontosA, pontosB, golsA, golsB;

    printf("\nDigite quantos pontos o time A possui: ");
    scanf("%d", &pontosA);
    printf("\nDigite quantos pontos o time B possui: ");
    scanf("%d", &pontosB);
    printf("\nDigite quantos gols o time A fez na partida: ");
    scanf("%d", &golsA);
    printf("\nDigite quantos gols o time B fez na partida: ");
    scanf("%d", &golsB);

    pontuacao (&pontosA, &pontosB, golsA, golsB);
    return 0;

}

void pontuacao (int *pontosA, int *pontosB, int golsA, int golsB)
{
    if (golsA > golsB)
    {
        *pontosA += 3;
        printf("\nO time A venceu! Sua nova pontuacao eh: %d", *pontosA);
    }
    if (golsA == golsB)
    {
        *pontosA += 1;
        *pontosB += 1;
        printf("\nO jogo deu empate! A nova pontuacao do time A eh %d e do time B eh %d", *pontosA, *pontosB);
    }
    if (golsB > golsA)
    {
        *pontosB += 3;
        printf("\nO time B venceu! Sua nova pontuacao eh: %d", *pontosB);
    }
}
