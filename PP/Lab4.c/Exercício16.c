#include <stdio.h>

void desenha_linha (int valor);
int main()
{
    int numero;
    printf("Digite qual o tamanho da linha que voce deseja: ");
    scanf("%d", &numero);
    desenha_linha(numero);    
    return 0; 
}

void desenha_linha (int valor)
{
    int i;
    for (i=1;i<=valor;i++)
    {
        printf("=");
    }
}

       
