#include <stdio.h>

int inversao (int valor);
int main()
{
    int numero;
    printf("Digite um numero maior que zero de no maximo 3 algarismos: ");
    scanf("%d", &numero);
     if (numero<=0 || numero>999)
    {
        printf("\nValor invalido. ");
    }
    else 
    {
    printf("\n%d", inversao(numero));
    return 0;
    }
}


int inversao (int valor) 
{
        int centenas = valor/100;
        int dezenas = (valor%100)/10;
        int unidades = valor%10;
        int soma = centenas+dezenas+unidades;
        return soma;
}
