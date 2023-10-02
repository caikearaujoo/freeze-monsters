#include <stdio.h>

int soma_entre_numeros(int a, int b);

int main() {
    int n1, n2;

    printf("Digite dois numeros inteiros positivos: ");
    scanf("%d %d", &n1, &n2);

    if (n1 < 0 || n2 < 0) 
    {
        printf("Os numeros informados nao sao positivos.\n");
    } else 
    {
        printf("A soma dos numeros inteiros entre %d e %d eh %d\n", n1, n2, soma_entre_numeros(n1, n2));
    }

    return 0;
}
int soma_entre_numeros(int a, int b) 
{
    int soma = 0;
    int menor, maior;
    int i=0;

    if (a==b)
    {
        printf("\nOs numeros sao iguais.");
    }
    else if (a < b) 
    {
        menor = a;
        maior = b;
    } else 
    {
        menor = b;
        maior = a;
    }

    for (i = menor + 1; i < maior; i++) 
    {
        soma = soma+i;
    }

    return soma;
}
