#include <stdio.h>
#include <stdlib.h>

void frac(float *num, int *inteiro, float *frac);

int main()
{
    float numero = 0, parte_fracionaria = 0;
    int parte_inteira = 0;

    float *p_numero, *p_fracionaria;
    int *p_inteiro = 0;

    p_numero = &numero;
    p_fracionaria = &parte_fracionaria;
    p_inteiro = &parte_inteira;

    printf("\nDigite um valor real: ");
    scanf ("%f", &numero);
    frac (p_numero, p_inteiro, p_fracionaria);
    printf ("\n Parte inteira: %d e parte fracionaria: %f", *p_inteiro, *p_fracionaria);

    return 0;
}

void frac(float *num, int *inteiro, float *frac)
{
    int divisao = *num/1;
    *inteiro = divisao;
    *frac = *num - *inteiro;
}
