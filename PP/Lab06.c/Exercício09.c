#include <stdio.h>
#include <math.h>

struct NumeroComplexo 
{
    float parteReal;
    float parteImaginaria;
};

int main() 
{
    struct NumeroComplexo z, w, soma, diferenca, produto;
    float moduloZ, moduloW;

    printf("Digite o primeiro numero complexo:\n");
    printf("Parte real de z: ");
    scanf("%f", &z.parteReal);
    printf("Parte imaginaria de z: ");
    scanf("%f", &z.parteImaginaria);

    printf("\nDigite o segundo numero complexo:\n");
    printf("Parte real de w: ");
    scanf("%f", &w.parteReal);
    printf("Parte imaginaria de w: ");
    scanf("%f", &w.parteImaginaria);

    soma.parteReal = z.parteReal + w.parteReal;
    soma.parteImaginaria = z.parteImaginaria + w.parteImaginaria;

    diferenca.parteReal = z.parteReal - w.parteReal;
    diferenca.parteImaginaria = z.parteImaginaria - w.parteImaginaria;

    produto.parteReal = z.parteReal * w.parteReal - z.parteImaginaria * w.parteImaginaria;
    produto.parteImaginaria = z.parteReal * w.parteImaginaria + z.parteImaginaria * w.parteReal;

    moduloZ = sqrt(z.parteReal * z.parteReal + z.parteImaginaria * z.parteImaginaria);
    moduloW = sqrt(w.parteReal * w.parteReal + w.parteImaginaria * w.parteImaginaria);

    printf("\nResultados:\n");
    printf("Soma: %.2f + %.2fi\n", soma.parteReal, soma.parteImaginaria);
    printf("Subtração: %.2f + %.2fi\n", diferenca.parteReal, diferenca.parteImaginaria);
    printf("Produto: %.2f + %.2fi\n", produto.parteReal, produto.parteImaginaria);
    printf("Módulo de z: %.2f\n", moduloZ);
    printf("Módulo de w: %.2f\n", moduloW);

    return 0;
}
