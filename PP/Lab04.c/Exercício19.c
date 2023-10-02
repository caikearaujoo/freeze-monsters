#include <stdio.h>
int fatorial(int n);

int main ()
{
    int num=0;
    printf("\nDigite um numero inteiro positivo: ");
    scanf("%d", &num);
    if (num<=0)
    {
        printf("\nNumero invalido.");
    }
    else 
    {
        int resposta = fatorial(num);
        printf("%d! = %d\n", num, resposta);
    }
    return 0;
}


int fatorial(int n) 
{
    int resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado = resultado * i;
    }
    return resultado;
}
