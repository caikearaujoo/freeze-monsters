#include <stdio.h>

int eh_primo(int n);

int main() 
{
    int vet[10];
    int i;
    for (i=0;i<10;i++)
    {
        printf("\n Digite um valor para armazenar no vetor: ");
        scanf("%d", &vet[i]);
    }

    printf("\nAs posicoes dos numeros primos do vetor são: ");

    for (i=0;i<10;i++)
    {
        if (eh_primo(vet[i]))
        {
            printf("\nPosicao %d, valor: %d", i, vet[i]);
        }
    }
    return 0;
}   
int eh_primo(int n) 
{
    int i;
    if (n <= 1) return 0;
    for (i = 2; i < n; i++) 
    {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
